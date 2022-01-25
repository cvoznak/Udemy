package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class mais_velho {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n, maisVelho, iMaisVelho;
		
		System.out.print("Quantas pessoas você vai digitar? ");
		n = sc.nextInt();
		
		String [] nomes = new String [n];
		int [] idade = new int [n];
		
		for (i = 0; i < n; i++) {
			System.out.println("Dados da " + (i + 1) + "a pessoa:");
			System.out.print("Nome: ");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			System.out.print("Idade: ");
			idade[i] = sc.nextInt();
		}
		
		
		maisVelho = idade[0];
		iMaisVelho = 0;
			
		for (i = 0; i < n; i++) {
			if (maisVelho < idade[i]) {
				maisVelho = idade[i];
				iMaisVelho = i;
			}
		}
		
		System.out.print("PESSOA MAIS VELHA: " + nomes[iMaisVelho]);

		sc.close();
	}

}
