package condicional;

import java.util.Locale;
import java.util.Scanner;

public class glicose {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		double medida;
		
		System.out.print("Digite a medida da glicose: ");
		medida = sc.nextDouble();
		
		if (medida <= 100) {
			System.out.println("Classifica��o: normal");
		}
		else if (medida > 100 && medida <= 140) {
			System.out.println("Classifica��o: elevado");
		}
		else {
			System.out.println("Classifica��o: diabetes");
		}
		
		sc.close();
	}

}
