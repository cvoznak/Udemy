using System;
using System.Globalization;

namespace SomaVetores
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;
            
            int i, m;

            Console.Write("Quantos números você vai digitar? ");
            m = int.Parse(Console.ReadLine());

            double [] vet = new double[m];

            double soma = 0, media = 0;

            for (i = 0; i < m; i++)
            {
                Console.Write("Digite um número: ");
                vet[i] = double.Parse(Console.ReadLine(), ci);
            }

            Console.Write("\nValores = ");
            for (i = 0; i < m; i++)
            {
                Console.Write(vet[i].ToString("F2", ci) + " ");
                soma += vet[i];
            }

            media = (double) soma / m;

            Console.WriteLine("\nSOMA = " + soma.ToString("F2", ci));
            Console.WriteLine("MÉDIA = " + media.ToString("F2", ci));

        }
    }
}