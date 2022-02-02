using System;
using System.Globalization;

namespace ProcDeDadosCasting
{
    class Program
    {
        static void Main (string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x, y;

            x = 10;
            y = 20;

            Console.WriteLine(x);
            Console.WriteLine(y);

            int q;
            double w;

            q = 5;
            w = 2 * q;

            Console.WriteLine(q);
            Console.WriteLine(w.ToString("F2", CI));

            double b1, b2, h, area;
            b1 = 6;
            b2 = 8;
            h = 5;
            area = (b1 + b2) / 2 * h;
            Console.WriteLine(area.ToString("F2", CI));

            int a, b;
            double resultado;
            a = 5;
            b = 2;
            resultado = (double) a / b;
            Console.WriteLine(resultado);

            double c;
            int d;
            c = 5.0;
            d = (int) a;



        }
    }
}