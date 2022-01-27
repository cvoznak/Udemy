package Matrizes;

import java.util.Locale;
import java.util.Scanner;

public class diagonal_negativa {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, j, m;
		
		System.out.print("Qual a ordem da matriz? ");
		m = sc.nextInt();
		
		int [][] matriz = new int [m][m];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextInt();   
			}
		}
		
		int conteNega = 0;
		
		System.out.println("DIAGONAL PRINCIPAL: ");
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (i == j) {
					System.out.print(matriz[i][j] + " ");
				}
				if (matriz [i][j] < 0) {
					conteNega++;
				}
			}
		}
		System.out.println();
		System.out.println("QUANTIDADE DE NEGATIVOS = " + conteNega);
		
		sc.close();;
	}

}
