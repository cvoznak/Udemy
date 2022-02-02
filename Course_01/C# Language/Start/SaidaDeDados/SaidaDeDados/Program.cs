using System;
using System.Globalization;

namespace SaidaDeDados
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture; //Para criar uma formaa reduzida que permita formatar o uso de ponto no lugar da virgula
            
            Console.WriteLine("Olá Mundo!");

            Console.Write("Bom dia!");
            Console.Write("Boa noite!");

            int x, y;
            x = 10;
            y = 20;
            Console.WriteLine(x);
            Console.WriteLine(y);

            double w;
            w = 2.3456;
            Console.WriteLine(w.ToString("F2", CultureInfo.InvariantCulture)); //para mudar somente numa variavel
            Console.WriteLine(w.ToString("F2", CI));

            int idade;
            double salario;
            string name;
            char sexo;

            idade = 32;
            salario = 4560.9;
            name = "Maria Silva";
            sexo = 'F';

            Console.WriteLine("A funcionária " + name + ", sexo " + sexo + ", ganha R$"
                + salario.ToString("F2", CI) + " e tem " + idade + " anos.");
        }
    }
}


