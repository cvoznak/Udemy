using System;
using System.Globalization;

namespace Fatorial
{
    class Program
    {
        static void Main(string[] arg)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int n, fatorial = 1;

            Console.Write("Digite a valor de N: ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++)
            {
                fatorial *= i;
            }

            Console.WriteLine("FATORIAL = " + fatorial);
        }
    }
}