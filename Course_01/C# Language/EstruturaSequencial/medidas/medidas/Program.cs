using System;
using System.Globalization;

namespace Medidas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

            Console.Write("Digite a medida A: ");
            a = double.Parse(Console.ReadLine(), ci);
            Console.Write("Digite a medida B: ");
            b = double.Parse(Console.ReadLine(), ci);
            Console.Write("Digite a medida C: ");
            c = double.Parse(Console.ReadLine(), ci);

            areaQuadrado = Math.Pow(a, 2);
            areaTriangulo = (a * b) / 2;
            areaTrapezio = (a + b) * c / 2;

            Console.WriteLine("ÁREA DO QUADRADO = " + areaQuadrado.ToString("F4", ci));
            Console.WriteLine("ÁREA DO TRIÂNGULO = " + areaTriangulo.ToString("F4", ci));
            Console.WriteLine("ÁREA DO TRAPÉZIO = " + areaTrapezio.ToString("F4", ci));
        }
    }
}