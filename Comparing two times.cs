using System;

namespace _13._05._2020
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the first time: ");
            TimeSpan first_date = TimeSpan.Parse(Console.ReadLine(),
                          System.Globalization.CultureInfo.InvariantCulture);
            Console.WriteLine("");
            Console.Write("Enter the second time: ");
            TimeSpan second_date = TimeSpan.Parse(Console.ReadLine(),
                          System.Globalization.CultureInfo.InvariantCulture);
            if (first_date == second_date)
            {
                Console.Write("You wrote the same times. Write the correct ones.");
            }
            if (first_date < second_date)
            {
                Console.Write("The first time is earlier - {0}",first_date);
            }
            else
            {
                Console.Write("The second time is earlier - {0}", second_date);
            }
            Console.ReadKey();
        }
    }
}
