package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class senha_fixa {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int senha, tentativa;
		
		System.out.print("Digite a senha: ");
		tentativa = sc.nextInt();
		
		senha = 2002;
		
		while (tentativa != senha) {
			System.out.print("Senha Invalida! Tente novamente: ");
			tentativa = sc.nextInt();
		}
		
		System.out.println("Acesso permitido!");
		
		sc.close();
	}

}
