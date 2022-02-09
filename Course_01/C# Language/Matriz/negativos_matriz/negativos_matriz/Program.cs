using System;
using System.Globalization;

namespace NegativosMatriz
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
                for (j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }
;

            Console.WriteLine("Valores negativos:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (matriz[i,j] < 0)
                    {
                        Console.WriteLine(matriz[i,j]);
                    }
                }
            }
        }
    }
}