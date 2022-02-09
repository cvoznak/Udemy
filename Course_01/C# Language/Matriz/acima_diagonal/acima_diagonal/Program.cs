using System;
using System.Globalization;

namespace AcimaDiagonal
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

            int soma = 0;

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (j > i)
                    {
                        soma += matriz[i, j];
                    }
                }
            }
            Console.WriteLine("Soma dos elementos acima da diagonal principal = " + soma);
        }
    }
}