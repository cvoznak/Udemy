using System;
using System.Globalization;

namespace SomaMatrizes
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

            int[,] matrizA = new int[m, n];
            int[,] matrizB = new int[m, n];
            int[,] matrizSoma = new int[m, n];

            Console.WriteLine("Digite os valores da matriz A:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matrizA[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("Digite os valores da matriz B:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matrizB[i, j] = int.Parse(Console.ReadLine());
                }
            }
            
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    matrizSoma[i, j] = matrizA[i, j] + matrizB[i, j];
                }
            }

            Console.WriteLine("Matriz Soma:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write(matrizSoma[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}