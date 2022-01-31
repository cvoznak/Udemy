package Matrizes;

import java.util.Locale;
import java.util.Scanner;

public class matriz_geral {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		
		int i, j, m, linha, coluna;
		
		System.out.print("Qual a ordem da matriz? ");
		m = sc.nextInt();
		
		double [][] matriz = new double [m][m];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextDouble();
			}
		}
		
		double soma;
		
		soma = 0;
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (matriz[i][j] > 0) { 
					soma += matriz[i][j];
				}
			}
		}
		
		System.out.println();
		System.out.println("SOMA DOS POSITIVOS: " + soma);
		System.out.println();
		
		System.out.print("Escolha uma linha: ");
		linha = sc.nextInt();
		System.out.print("LINHA ESCOLHIDA: ");
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (i == linha) {
					System.out.print(matriz[i][j] + " ");
				}
			}
		}
		System.out.println();
		System.out.println();
		System.out.print("Escolha uma coluna: ");
		coluna = sc.nextInt();
		System.out.print("COLUNA ESCOLHIDA: ");
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (j == coluna) {
					System.out.print(matriz[i][j] + " ");
				}
			}
		}
		System.out.println();
		System.out.println();
		System.out.print("DIAGONAL PRINCIPAL: ");
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (i == j) {
					System.out.print(matriz[i][j] + " ");
				}
			}
		}
		System.out.println();
		System.out.println();
		
		double [][] matrizAlterada = new double [m][m];
		
		System.out.println("MATRIZ ALTERADA:");
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (matriz[i][j] < 0) {
					matrizAlterada[i][j] = matriz[i][j] * matriz[i][j];
				}
				else {
					matrizAlterada[i][j] = matriz[i][j];	
				}
				System.out.print(matrizAlterada[i][j] + " ");
			}
			System.out.println();
		}
		sc.close();
	}

}
