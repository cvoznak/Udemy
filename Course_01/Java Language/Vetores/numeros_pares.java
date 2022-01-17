package Vetores;

import java.util.Scanner;

public class numeros_pares {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int i, n, contePar;
		
		System.out.print("Quantos números você vai digitar? ");
		n = sc.nextInt();
		
		int [] v = new int [n];
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			v[i] = sc.nextInt();
		}
		
		System.out.println();
		System.out.println("NÚMEROS PARES: ");
		
		contePar = 0;
		
		for (i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				System.out.print(v[i] + " ");
				contePar++;
			}
		}		
		System.out.println();
		System.out.println();
		System.out.println("QUANTIDADE DE PARES = " + contePar);
	
		sc.close();
	}

}
