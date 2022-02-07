using System;
using System.Globalization;

namespace Negativos
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, m;

            Console.Write("Quantos números você vai digitar? ");
            m = int.Parse(Console.ReadLine());

            int [] vet = new int[m];

            for (i = 0; i < m; i++)
            {
                Console.Write("Digite um número: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("NÚMEROS NEGATIVOS:");
            
            for (i = 0; i < m; i++)
            {
                if (vet[i] < 0)
                {
                    Console.WriteLine(vet[i]);
                }
            }
        }


    }
}