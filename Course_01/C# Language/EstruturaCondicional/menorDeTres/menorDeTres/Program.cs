using System;
using System.Globalization;

namespace MenorDeTres
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int a, b, c, menor;

            Console.Write("Primeiro valor: ");
            a = int.Parse(Console.ReadLine());
            Console.Write("Segundo valor: ");
            b = int.Parse(Console.ReadLine());
            Console.Write("Terceiro valor: ");
            c = int.Parse(Console.ReadLine());

            menor = a;

            if (menor > b)
            {
                menor = b;
            }
            else if (menor > c)
            {
                menor = c;
            }

            Console.WriteLine("MENOR = " + menor);
        }
    }
}