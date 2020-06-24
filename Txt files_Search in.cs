using System;
using System.IO;
namespace _20._05._2020
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] findings;
            string[] findings2;
            int count = 0;
            findings = new string[count];
            string read_path = @"C:\Users\Администратор\source\repos\20.05.2020\Motorcycle.txt";
            string write_path = @"C:\Users\Администратор\source\repos\20.05.2020\Result.txt";
            using (StreamReader sr = new StreamReader(read_path, System.Text.Encoding.Default))
            {
                string line;
                while ((line = sr.ReadLine()) != null)
                {
                    if (line == "Brand: Harley-Davidson")
                    {
                        do
                        {
                            count++;
                            findings2 = new string[count];
                            for (int i = 0; i < findings2.Length - 1; i++)
                                { findings2[i] = findings[i]; }
                            findings2[count - 1] = line;
                            findings = findings2;

                        } while ((line = sr.ReadLine()) != "-");

                    }
                }
                sr.Close();
            }
            using (StreamWriter sw = new StreamWriter(write_path, false, System.Text.Encoding.Default))
            {
                for (int i = 0; i < findings.Length; i++)
                {
                    sw.WriteLine(findings[i]);
                }
            }
                Console.WriteLine("It has been written in Result.txt:");
            for (int i = 0; i < findings.Length; i++)
            {
                Console.WriteLine(findings[i]);
            }
            Console.ReadKey();
        }
    }
}
