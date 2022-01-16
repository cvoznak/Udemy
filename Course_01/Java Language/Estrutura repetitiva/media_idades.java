package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class media_idades {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int idade, soma, contador;
		double media;
		
		System.out.println("Digite as idades: ");
		idade = sc.nextInt();
		
		soma = 0;
		contador = 0;
		
		while (idade > 0) {
			soma += idade;
			contador++;
			idade = sc.nextInt();
		}
		
		media = (double)soma / contador;
		
		System.out.println("MEDIA = " + String.format("%.2f", media));
		
		sc.close();
	}

}
