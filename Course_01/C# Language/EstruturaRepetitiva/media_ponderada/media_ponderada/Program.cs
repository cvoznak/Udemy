using System;
using System.Globalization;

namespace MediaPonderada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, n;
            double n1, n2, n3, media;

            Console.Write("Quantos casos você vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {
                Console.WriteLine("Digite três números:");
                n1 = double.Parse(Console.ReadLine(), ci);
                n2 = double.Parse(Console.ReadLine(), ci);
                n3 = double.Parse(Console.ReadLine(), ci);

                media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

                Console.WriteLine("MÉDIA = " + media.ToString("F1", ci));
            }
        }
    }
}