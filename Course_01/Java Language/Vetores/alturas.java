package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class alturas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int i, n, conteM;
		
		System.out.print("Quantas pessoas serão digitadas? ");
		n = sc.nextInt();
		
		int [] idade = new int [n];
		double [] altura = new double [n];
		String [] nome = new String [n];
		double totalAltura, mediaAltura, pMenos16;
		
		for (i = 0; i < n; i++) {
			System.out.println("Dados da " + (i + 1) + "a pessoa:");
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Idade: ");
			idade[i] = sc.nextInt();
			System.out.print("Altura: ");
			altura[i] = sc.nextDouble();
		}
		
		totalAltura = 0;
		
		conteM = 0;
		
		for (i = 0; i < n; i++) {
			totalAltura += altura[i];
			if (idade[i] < 16) {
				conteM++;
			}
		}
		
		pMenos16 = (double) conteM * 100 / n;
		
		mediaAltura = totalAltura / n;
		
		System.out.println("Altura média: " + String.format("%.2f", mediaAltura));
		System.out.println("Pessoas com menos de 16 anos: " + String.format("%.1f", pMenos16) + "%");
		for (i = 0; i < n; i++) {
			if (idade[i] < 16) {
				System.out.println(nome[i]);
			}
		}
		
		sc.close();
	}
}

