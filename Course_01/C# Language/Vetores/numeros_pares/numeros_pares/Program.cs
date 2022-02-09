using System;
using System.Globalization;

namespace NumerosPares
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, m, countPares = 0;

            Console.Write("Quantos números você vai digitar? ");
            m = int.Parse(Console.ReadLine());

            int[] vet = new int[m];

            for (i = 0; i < m; i++)
            {
                Console.Write("Digite um número: ");
                vet[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine();
            Console.WriteLine("Números pares:");

            for (i = 0; i < m; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    Console.Write(vet[i] + " ");
                    countPares++;
                }
            }
            Console.WriteLine();
            Console.WriteLine("\nQuantidade de pares = " + countPares);
        }
    }
}