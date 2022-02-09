using System;
using System.Globalization;

namespace MaiorPosicao
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

            for (i = 0; i < m; i++) 
            {
                Console.Write("Digite um número: ");
                vet[i] = double.Parse(Console.ReadLine(), ci);
            }

            int iMaior = 0;
            double maior;

            maior = vet[0];

            for (i = 0; i < m; i++)
            {
                if (maior < vet[i])
                {
                    maior = vet[i];
                    iMaior = i;
                }
            }

            Console.WriteLine("Maior valor = " + maior.ToString("F1", ci));
            Console.WriteLine("Posição do maior valor = " + iMaior);
        }
    }
}