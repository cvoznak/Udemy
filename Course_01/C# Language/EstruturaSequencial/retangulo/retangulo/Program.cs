using System;
using System.Globalization;

namespace Retangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double dbase, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            dbase = double.Parse(Console.ReadLine(), ci);
            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), ci);

            area = dbase * altura;
            perimetro = (2 * dbase) + (2 * altura);
            diagonal = Math.Sqrt(Math.Pow(dbase, 2.0) + Math.Pow(altura, 2.0));

            Console.WriteLine("AREA = " + area.ToString("F4",ci));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", ci));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", ci));

        }
    }
}