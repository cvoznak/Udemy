using System;
using System.Globalization;

namespace Temperatura
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double c, f;
            char escolha;

            Console.Write("Você vai digitar a temperatura em qual escala (C/F): ");
            escolha = char.Parse(Console.ReadLine());

            if (escolha == 'C')
            {
                Console.Write("Digite a temperatura em Celsius: ");
                c = double.Parse(Console.ReadLine(), ci);
                f = c * 9 / 5 + 32;
                Console.WriteLine("Temperatura em Fahrenheit: " + f.ToString("F2", ci));
            }
            else if (escolha == 'F')
            {
                Console.Write("Digite a temperatura em Fahrenheit: ");
                f = double.Parse(Console.ReadLine(), ci);
                c = (f - 32) * 5 / 9;
                Console.WriteLine("Temperatura em Celsius: " + c.ToString("F2", ci));
            }
        }
    }
}