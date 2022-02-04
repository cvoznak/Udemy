using System;
using System.Globalization;

namespace Glicose
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double glicose;

            Console.Write("Digite a medida da glicose: ");
            glicose = double.Parse(Console.ReadLine(), ci);

            if (glicose <= 100)
            {
                Console.WriteLine("Classificação: Normal");
            }
            else if (glicose > 100 && glicose <= 140)
            {
                Console.WriteLine("Classificação: Elevado");
            }
            else
            {
                Console.WriteLine("Classificação: Diabetes");
            }
        }
    }
}