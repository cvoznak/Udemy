package saida_de_dados;

import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		System.out.println("Bom dia!");
		System.out.println("Boa noite!");
		
		int x, y;
		x = 10;
		y = 20;
		System.out.println(x);
		System.out.println(y);
		
		Locale.setDefault(Locale.US);
		
		double w;
		w = 2.53456;
		System.out.println(w);
		System.out.println(String.format("%.2f", w));
		
		int idade;
		double salario;
		String nome;
		char sexo;
		idade = 32;
		salario = 4560.9;
		nome = "Maria Silva";
		sexo = 'F';
		
		System.out.println("A funcionaria " + nome + ", sexo " + sexo + ", ganha "
				+ String.format("%.2f", salario) + " e tem "+ idade + " anos.");

	}

}
