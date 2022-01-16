package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class divisao {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, i;
		double num, deno, resultado;
		
		System.out.print("Quantos casos vocês vai digitar? ");
		n = sc.nextInt();
		
		for (i = 0; i < n; i++) {
			System.out.print("Entre com o numerador: ");
			num = sc.nextDouble();
			System.out.print("Entre com o denominador: ");
			deno = sc.nextDouble();
			if (deno == 0) {
				System.out.println("DIVISÃO IMPOSSÍVEL");
			}
			else {
				resultado = num / deno;
				System.out.println("DIVISÃO = " + String.format("%.2f", resultado));
			}
		}
		
		sc.close();
	}

}
