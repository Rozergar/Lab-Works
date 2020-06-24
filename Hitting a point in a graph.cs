using System;

namespace _22._04._2020
{
    class Program
    {
        static double Function (double x, double R)
        {
            double lower_limit = - 4;
            double upper_limit = 5;

            // Проверка на принадлежность Х допустимому интервалу значений
            if (x < lower_limit || x > upper_limit)
            { 
              throw new ArgumentOutOfRangeException
              (string.Format("Function is undefined for x belonging to [{0};{1}]", lower_limit, upper_limit)); 
            }

            double lim1 = 0;
            double lim2 = 2;
            double lim3 = 4;

            // y = 0
            if (x == lim1 || x == lim2 || x == lim3)
            {
                return 0;
            }
            // 1-й промежуток
            if (x >= lower_limit && x < lim1)
            {
                return (-0.5 * x);
            }
            // 2-й промежуток
            if (x > lim1 && x < lim2)
            {
                return (-Math.Sqrt(R*R - x*x)+2);
            }
            // 3-й промежуток
            if (x < lim2 && x < lim3)
            {
                return Math.Sqrt(R * R - (x - 2) * (x - 2));
            }
            // 4-й промежуток
            return -x + 4;
        }

        static void Main(string[] args)
        {
            Console.Write("Введите x = ");
            double x = Convert.ToDouble(Console.ReadLine()); 
            Console.Write("Введите R = ");
            double R = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("y = {0}", Function(x, R));
            Console.ReadKey();
        }
    }
}
