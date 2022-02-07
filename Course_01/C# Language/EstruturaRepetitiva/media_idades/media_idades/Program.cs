using System;
using System.Globalization;

namespace MediaIdades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int idade, soma = 0, count = 0;
            double media;

            Console.WriteLine("Digite as idades:");
            idade = int.Parse(Console.ReadLine());

            if (idade < 0)
            {
                Console.WriteLine("IMPOSSÍVEL CALCULAR");
            }
            else
            {
                while (idade > 0)
                {
                    soma += idade;
                    count++;
                    idade = int.Parse(Console.ReadLine());
                }
                media = (double)soma / count;
                Console.WriteLine("MÉDIA = " + media.ToString("F2", ci));
            }
            
        }
    }
}