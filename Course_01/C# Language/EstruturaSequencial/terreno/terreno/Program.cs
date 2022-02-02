using System;
using System.Globalization;

namespace Terreno
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double largura, comprimento, valor, area, precoTotal;

            Console.Write("Digite a largura do terreno: ");
            largura = double.Parse(Console.ReadLine(), ci);
            Console.Write("Digite o comprimento do terreno: ");
            comprimento = double.Parse(Console.ReadLine(),ci);
            Console.Write("Digite o valor do metro quadrado: ");
            valor = double.Parse(Console.ReadLine(), ci);

            area = largura * comprimento;
            precoTotal = valor * area;

            Console.WriteLine("Área do terreno = " + area.ToString("F2", ci) + " m^2");
            Console.WriteLine("Preço do terreno = R$" + precoTotal.ToString("F2", ci));
        }
    }
}