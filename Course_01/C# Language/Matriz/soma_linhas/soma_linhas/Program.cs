using System;
using System.Globalization;

namespace SomaLinhas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, j, m, n;

            Console.Write("Qual a quantidade de linhas da matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidade de colunas da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] matriz = new int[m, n];

            for (i = 0; i < m; i++)
            {
                Console.WriteLine("Digite os elementos da " + (i + 1) + "a. linha: ");
                for (j = 0; j < n; j++)
                {
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            int[] vetor = new int[m];

            int soma = 0;

            Console.WriteLine("Vetor gerado:");

            for (i = 0; i < m; i++)
            {
               for (j = 0; j < n; j++)
                {
                    soma += matriz[i, j];
                }
                vetor[i] = soma;
                soma = 0;
                Console.WriteLine(vetor[i]);
            }
        }
    }
}