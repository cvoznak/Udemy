package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class dados_pessoais {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		n = sc.nextInt();
		
		double [] altura = new double [n];
		char [] genero = new char [n];
		
		for (i = 0; i < n; i++) {
			System.out.print("Altura da " + (i + 1) + "a pessoa: ");
			altura[i] = sc.nextDouble();
			System.out.print("Genero da " + (i + 1) + "a pessoa: ");
			genero[i] = sc.next().charAt(0);
		}
		
		double maior, menor, soma, media;
		int conteF;
		
		maior = altura[0];
		menor = altura[0];
		soma = 0;
		conteF = 0;
		
		for (i = 0; i < n; i++) {
			if (maior < altura[i]) {
				maior = altura[i];
			}
			if (menor > altura[i]) {
				menor = altura[i];
			}
			if (genero[i] == 'F') {
				soma += altura[i];
				conteF++;
			}
		}
		
		media = soma / conteF;
		
		System.out.println("Menor altura = " + menor);
		System.out.println("Maior altura = " + maior);
		System.out.println("Media das alturas das mulheres = " + String.format("%2f", media));
		System.out.println("Numeros de homens = " + (n - conteF));
		
		
		sc.close();
	}

}
