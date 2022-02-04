using System;
using System.Globalization;

namespace Duracao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int seg, min, hr;

            Console.Write("Digite a duração em segundos: ");
            seg = int.Parse(Console.ReadLine());

            hr = seg / 3600;
            min = (seg % 3600) / 60;
            seg = ((seg % 3600) % 60);

            Console.WriteLine(hr + ":" + min + ":" + seg);
        }
    }
}