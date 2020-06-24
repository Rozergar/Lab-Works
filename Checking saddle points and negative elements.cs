using System;

namespace _01._04._2020
{
    class Program
    {
        static bool Min_in_Line(int[,] matrix, int i, int value)
        {
            for (int j = 0; j < 4; j++)
            {
                if (matrix[i, j] < value)
                {
                    return false;
                }
            }
            return true;
        }

        static bool Max_in_Column(int[,] matrix, int j, int value)
        {
            for (int i = 0; i < 3; i++)
            {
                if (matrix[i, j] > value)
                {
                    return false;
                }
            }
            return true;
        }

        static void Main(string[] args)
        {
            int[,] Matrix = new int[3, 4]
            {
                {1, 0, -3, -16},
                {-5, 7, -4, -22 },
                {0, -11, -12, -13 }
            };
            Console.WriteLine("Saddle points are:");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (Min_in_Line(Matrix, i, Matrix[i, j]) && Max_in_Column(Matrix, j, Matrix[i, j]))
                    {
                        Console.WriteLine("[{0},{1}] = {2}", i+1, j+1, Matrix[i, j]);
                    }
                }
            }

            for (int i = 0; i < 3; i++)
            {
                int Negative_Elements = 0;
                bool Zero_Counting = false;
                for (int j = 0; j < 4; j++)
                {
                    if (Matrix [i, j] == 0)
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            if (Matrix [i, k] < 0)
                            { 
                                Negative_Elements++; 
                            }
                        }
                        Zero_Counting = true;
                    }
                }
                if (Zero_Counting)
                {
                    Console.WriteLine("Number of Negative elements in {0} string = {1}", i+1, Negative_Elements);
                }
                else
                {
                    Console.WriteLine("There isn't 0 in {0} string", i+1);
                }
            }
            Console.ReadKey();
        }
    }
}
