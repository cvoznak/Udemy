using System;
using System.Globalization;

namespace Consumo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int distancia;
            double combustivel, consumo;

            Console.Write("Distância percorrida: ");
            distancia = int.Parse(Console.ReadLine());
            Console.Write("Combustível gasto: ");
            combustivel = double.Parse(Console.ReadLine(), ci);

            consumo = (double) distancia / combustivel;

            Console.Write("Consumo médio = " + consumo.ToString("F3", ci));

        }
    }
}