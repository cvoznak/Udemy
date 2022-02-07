using System;

namespace SomaImpares
{
    class Program
    {
        static void Main(string[] args)
        {
            int n1, n2, temp, soma = 0;

            Console.WriteLine("Digite dois números: ");
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());

            if (n1 > n2)
            {
                temp = n2;
                n2 = n1;
                n1 = temp;
            }

            for (int i = (n1 + 1); i < n2; i++)
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }
            }

            Console.WriteLine("SOMA DOS ÍMPARES = " + soma);
        }
    }
}