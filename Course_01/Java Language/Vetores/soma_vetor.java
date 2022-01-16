package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n;
		
		System.out.print("Quantos números você vai digitar? ");
		n = sc.nextInt();
		
		double [] v = new double [n];
		double soma, media;
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um número: ");
			v[i] = sc.nextDouble();
		}
		
		soma = 0;
		System.out.println();
		System.out.print("VALORES = ");
		for (i = 0; i < n; i++) {
			System.out.print(v[i] + " ");
			soma += v[i];
		}
		
		media = soma / n;
		
		System.out.println();
		System.out.println("SOMA = " + String.format("%.2f", soma));
		System.out.println("MÉDIA = " + String.format("%.2f", media));
		
		sc.close();
	}

}
