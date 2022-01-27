package Matrizes;

import java.util.Locale;
import java.util.Scanner;

public class soma_linhas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, j, m, n;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		m = sc.nextInt();
		System.out.print("Qual a quantidade de colunas da matriz? ");
		n = sc.nextInt();
		
		double [][] matriz = new double [m][n];
		
		for (i = 0; i < m; i++) {
			System.out.println("Digite os elementos da " + (i + 1) + "a. linha:");
			for (j = 0; j < n; j++) {
				matriz[i][j] = sc.nextDouble();
			}
		}
		
		double [] vetor = new double [m];
		
		for (i = 0; i < m; i++) {
			vetor[i] = 0;
			for (j = 0; j < n; j++) {
				vetor[i] += matriz[i][j];
			}
		}
		
		System.out.println("VETOR GERADO:");
		
		for (i = 0; i < m; i++) {
			System.out.print(vetor[i] + " ");
		}
				
				
		sc.close();
	}

}
