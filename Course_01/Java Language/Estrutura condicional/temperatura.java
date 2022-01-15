package condicional;

import java.util.Locale;
import java.util.Scanner;

public class temperatura {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double f, c;
		char entrada;
		
		System.out.print("Você vai digitar a temperatura em qual escala (C/F)? ");
		entrada = sc.next().charAt(0);
				
		if (entrada == 'F') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			f = sc.nextDouble();
			c = (f - 32) * (5.0 / 9.0);
			System.out.println("Temperatura equivalente em Celsius: " + String.format("%.2f", c));
		}
		else {
			System.out.print("Digite a temperatura em Celsius: ");
			c = sc.nextDouble();
			f = ((9.0 / 5.0) * c) + 32;
			System.out.println("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", f));
		}

		sc.close();
	}

}
