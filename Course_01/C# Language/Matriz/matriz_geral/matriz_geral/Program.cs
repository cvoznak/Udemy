using System;
using System.Globalization;

namespace MatrizGeral
{
    class Program
    {

        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, j, m, n;

            Console.Write("Qual a ordem da matriz? ");
            m = int.Parse(Console.ReadLine());
            n = m;

            int[,] matriz = new int[m, n];


            Console.WriteLine("Digite os valores da matriz A:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            int somaPositivos = 0, linha, coluna;

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (matriz[i, j] > 0)
                    {
                        somaPositivos += matriz[i, j];
                    }
                }
            }
            
            Console.Write("\nSoma dos positivos: " + somaPositivos);
            Console.WriteLine();
            Console.Write("\nEscolha uma linha: ");
            linha = int.Parse(Console.ReadLine());

            Console.Write("Linha escolhida: ");
            for (i = linha; i <= linha; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write(matriz[i, j] + " ");
                }
            }
            Console.WriteLine();
            Console.Write("\nEscolha uma coluna: ");
            coluna = int.Parse(Console.ReadLine());
            
            Console.Write("Linha escolhida: ");
            for (i = 0; i < m; i++)
            {
                for (j = coluna; j <= coluna; j++)
                {
                    Console.Write(matriz[i, j] + " ");
                }
            }
            Console.WriteLine();
            Console.Write("\nDiagonal principal: ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        Console.Write(matriz[i, j] + " ");
                    }
                }
            }

            int [,] matrizAlterada = new int [m, n];

            Console.WriteLine();
            Console.WriteLine("\nMatriz alterada:");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (matriz[i, j] < 0)
                    {
                        matrizAlterada[i, j] = (int) Math.Pow(matriz[i,j], 2);
                    }
                    else
                    {
                        matrizAlterada[i, j] = matriz[i, j];
                    }
                }
            }
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    Console.Write(matrizAlterada[i, j] + " ");
                }
                Console.WriteLine();
            }

        }
    }
}