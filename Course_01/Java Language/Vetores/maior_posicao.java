package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class maior_posicao {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n, maiorP;
		
		System.out.print("Quantos números você vai digitar? ");
		n = sc.nextInt();
		
		double [] v = new double [n];
		double maior;
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um número: ");
			v[i] = sc.nextDouble();
		}
		
		maior = v[0];
		maiorP = 0;
		
		for (i = 0; i < n; i++) {
			if (maior < v[i]) {
				maior = v[i];
				maiorP = i;
			}
		}
		System.out.println();
		System.out.println("MAIOR VALOR = " + String.format("%.2f", maior));
		System.out.println("POSIÇÃO DO MAIOR VALOR = " + maiorP);
		
		sc.close();
	}

}
