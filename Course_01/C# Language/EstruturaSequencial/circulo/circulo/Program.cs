using System;
using System.Globalization;

namespace Circulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double raio, area;

            Console.Write("Digite a valor do raio do circulo: ");
            raio = double.Parse(Console.ReadLine(), ci);

            area = Math.PI * Math.Pow(raio, 2);

            Console.WriteLine("ÁREA = " + area.ToString("F3", ci));
        }
    }
}