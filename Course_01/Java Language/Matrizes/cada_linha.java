package Matrizes;

import java.util.Locale;
import java.util.Scanner;

public class cada_linha {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
	
		int i, j, m;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		m = sc.nextInt();
		
		int [][] matriz = new int [m][m];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextInt();
			}
		}
		
		
		int maior;
		
		System.out.println("MAIOR ELEMENTO DE CADA LINHA: ");
		
		for (i = 0; i < m; i++) {
			maior = matriz[i][0];
			for (j = 0; j < m; j++) {
				if (maior < matriz[i][j]) {
					maior = matriz[i][j];
				}
			}
			System.out.println(maior);
		}
		
		sc.close();
	}
}
