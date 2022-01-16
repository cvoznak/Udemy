package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class pares_consecutivos {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, soma;
		
		System.out.print("Digite um numero inteiro: ");
		n = sc.nextInt();
		
		soma = 0;
		
		while (n != 0) {
			if (n % 2 == 0) {
				for (int i = 0; i < 10; i += 2) { 
					soma += n + i;
				}
			}
			else {
				n = n + 1;
				for (int i = 0; i < 10; i += 2) {
					soma += n + i;
				}
		}
			System.out.println("SOMA = " + soma);
			soma = 0;
			System.out.print("Digite um numero inteiro: ");
			n = sc.nextInt();
		}
		sc.close();
	}

}
