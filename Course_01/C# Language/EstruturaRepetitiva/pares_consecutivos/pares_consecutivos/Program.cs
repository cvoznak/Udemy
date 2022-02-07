using System;
using System.Globalization;

namespace PareConsecutivos
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int n, somaPares = 0;

            Console.Write("Digite um número inteiro: ");
            n = int.Parse(Console.ReadLine());

            while (n != 0)
            {
                if (n % 2 != 0)
                {
                    n = n + 1;
                }
                somaPares = 5 * n + 20;
                Console.WriteLine("SOMA = " + somaPares);
                Console.Write("Digite um número inteiro: ");
                n = int.Parse(Console.ReadLine());
            }

            
        }
    }
}