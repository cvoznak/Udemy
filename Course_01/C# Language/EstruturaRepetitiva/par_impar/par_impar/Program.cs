using System;

namespace ParImpar
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, n, num;

            Console.Write("Quantos números você vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {
                Console.Write("Digite um número: ");
                num = int.Parse(Console.ReadLine());
                if (num == 0)
                {
                    Console.WriteLine("NULO");
                }
                else if (num < 0)
                {
                    if (num % 2 == 0)
                    {
                        Console.WriteLine("Par Negativo");
                    }
                    else
                    {
                        Console.WriteLine("Impar Negativo");
                    }
                }
                else
                {
                    if (num % 2 == 0)
                    {
                        Console.WriteLine("Par Positivo");
                    }
                    else
                    {
                        Console.WriteLine("Impar Positivo");
                    }
                }
            }
        }
    }
}