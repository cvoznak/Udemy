package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class aprovados {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int i, n;
		
		System.out.print("Quantos alunos ser�o digitados? ");
		n = sc.nextInt();
		
		String [] nome = new String [n];
		double [] nota1 = new double [n];
		double [] nota2 = new double [n];
		double media;
		
		for (i = 0; i < n; i++) { 
			System.out.println("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno:");
			sc.nextLine();
			nome[i] = sc.nextLine();
			nota1[i] = sc.nextDouble();
			nota2[i] = sc.nextDouble();
		}
		
		System.out.println("Alunos aprovados:");
		
		for (i = 0; i < n; i++) {
			media = (nota1[i] + nota2[i]) / 2;
			if (media >= 6d) {
				System.out.println(nome[i]);
			}
		}
		
		sc.close();
	}

}
