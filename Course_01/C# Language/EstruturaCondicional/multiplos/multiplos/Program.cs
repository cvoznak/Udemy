using System;
using System.Globalization;

namespace Multiplos
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int n1, n2, temp;

            Console.WriteLine("Digite dois números inteiros: ");
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());

            if (n1 > n2)
            {
                temp = n1;
                n1 = n2;
                n2 = temp;
            }

            if (n2 % n1 == 0)
            {
                Console.WriteLine("São multiplos");
            }
            else
            {
                Console.WriteLine("Não são multiplos");
            }
        }
    }
}