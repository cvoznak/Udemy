using System;

namespace DentroFora
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, num, conteDentro = 0;

            Console.Write("Quantos casos você vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um número: ");
                num = int.Parse(Console.ReadLine());
                
                if (num >= 10 && num <= 20)
                {
                    conteDentro++;
                }
            }

            Console.WriteLine(conteDentro + " Dentro");
            Console.WriteLine((n - conteDentro) + " Fora");
        }
    }
}