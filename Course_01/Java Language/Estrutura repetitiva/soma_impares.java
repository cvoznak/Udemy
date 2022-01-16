package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class soma_impares {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int x, y, temp, soma;
		
		System.out.println("Digite dois numeros: ");
		x = sc.nextInt();
		y = sc.nextInt();
		
		if (x > y) {
			temp = x;
			x = y;
			y = temp;
		}
		
		if (x % 2 == 0) {
			x += 1;
		}
		else {
			x += 2;
		}
		
		soma = 0;
		
		for (int i =  x; i < y; i += 2 ) {
			soma += i;
		}
		
		System.out.println("SOMA DOS IMPARES = " + soma);
		
		sc.close();
	}

}
