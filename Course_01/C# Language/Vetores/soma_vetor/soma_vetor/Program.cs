using System;
using System.Globalization;

namespace SomaVetor
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Quantos valores vai ter cada vetor? ");
            m = int.Parse(Console.ReadLine());

            double[] vetA = new double[m];
            double[] vetB = new double[m];
            double[] vetR = new double[m];

            Console.WriteLine("Digite os valores do Vetor A: ");

            for (i = 0; i < m; i++)
            {
                vetA[i] = double.Parse(Console.ReadLine(), ci);
            }

            Console.WriteLine("Digite os valores do Vetor B: ");

            for (i = 0; i < m; i++)
            {
                vetB[i] = double.Parse(Console.ReadLine(), ci);
            }

            for (i = 0; i < m; i++)
            {
                vetR[i] = vetA[i] + vetB[i];
            }

            Console.WriteLine("VETOR RESULTANTE: ");
            for (i = 0; i < m; i++)
            {
                Console.WriteLine(vetR[i]);
            }
        }
    }
}