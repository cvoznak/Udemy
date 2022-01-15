package condicional;

import java.util.Locale;
import java.util.Scanner;

public class dardo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, maior;
		
		System.out.println("Digite as três distâncias: ");
		a = sc.nextDouble();
		b = sc.nextDouble();
		c = sc.nextDouble();
		
		maior = a;
		
		if (maior < b) {
			maior = b;
		}
		else if (maior < c) {
			maior = c;
		}
		
		System.out.println("MAIOR DISTÂNCIA = " + String.format("%.2f", maior));
		
		sc.close();
	}

}
