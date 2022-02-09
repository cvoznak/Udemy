using System;
using System.Globalization;

namespace MediaPares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Quantos elementos vai ter o vetor? ");
            m = int.Parse(Console.ReadLine());

            int [] vet = new int[m];

            for (i = 0; i < m; i++)
            {
                Console.Write("Digite um número:");
                vet[i] = int.Parse(Console.ReadLine());
            }

            int soma = 0, countPares = 0;
            double media;

            for (i = 0; i < m; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    soma += vet[i];
                    countPares++;
                }
            }

            if (countPares == 0)
            {
                Console.WriteLine("Nenhum número par");
            }
            else
            {
                media = (double)soma / countPares;

                Console.WriteLine("Média dos pares = " + media.ToString("F1", ci));
            }
        }
    }
}