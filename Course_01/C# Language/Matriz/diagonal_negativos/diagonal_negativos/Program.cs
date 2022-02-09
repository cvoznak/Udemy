using System;
using System.Globalization;

namespace DiagonalNegativos
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

            int [,] matriz = new int[m, n];

            for (i = 0; i < m; i++)
            {
                for(j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }
            int countNegativos = 0;
            Console.WriteLine("Diagonal principal:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        Console.Write(matriz[i,j] + " ");
                    }
                    if (matriz[i,j] < 0)
                    {
                        countNegativos++;
                    }

                }
            }
            Console.WriteLine("\nQuantidade de negativos = " + countNegativos);
        }
    }
}