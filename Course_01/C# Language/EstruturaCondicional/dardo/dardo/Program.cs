using System;
using System.Globalization;

namespace Dardo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double a, b, c, maior;

            Console.WriteLine("Digite as três distâncias: ");
            a = double.Parse(Console.ReadLine(), ci);
            b = double.Parse(Console.ReadLine(), ci);
            c = double.Parse(Console.ReadLine(), ci);

            maior = a;

            if (maior < b)
            {
                maior = b;
            }
            else if (maior < c)
            {
                maior = c;
            }

            Console.WriteLine("MAIOR DISTÂNCIA = " + maior.ToString("F2", ci));
        }
    }
}