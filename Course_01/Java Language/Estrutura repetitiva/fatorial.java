package Repetitivo;

import java.util.Scanner;

public class fatorial {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n, i, fatorial;
		
		System.out.print("Digite o valor de N: ");
		n = sc.nextInt();
		
		fatorial = 1;
		
		for (i = 1; i <= n; i++) {
			fatorial *= i; 
		}
		
		System.out.println("FATORIAL = " + fatorial);
		
		sc.close();
	}

}
