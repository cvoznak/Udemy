using System;
using System.Globalization;

namespace CadaLinha
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

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            int maior;

            Console.WriteLine("Maior elemento de cada linha: ");

            for (i = 0; i < m; i++)
            {
                maior = matriz[i,0];
                for (j = 0; j < n; j++)
                {
                    if (maior < matriz[i, j])
                    {
                        maior = matriz[i, j];
                    }
                }
                Console.WriteLine(maior);
            }
        }
    }
}