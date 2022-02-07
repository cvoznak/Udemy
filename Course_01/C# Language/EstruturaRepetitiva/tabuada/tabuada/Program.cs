using System;
using System.Globalization;

namespace Tabuada
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;

            Console.Write("Deseja ver a tabuada para qual valor? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i < 11; i++)
            {
                Console.WriteLine(n + " x " + i + " = " + (n * i));
            }
        }
    }
}