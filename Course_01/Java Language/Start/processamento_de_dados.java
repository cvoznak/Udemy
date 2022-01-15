package processamento_de_dados;

import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int x, y;
		x = 5;
		y = 2 * x;
		System.out.println(x);
		System.out.println(y);
		
		double w;
		w = 2 * x;
		System.out.println(x);
		System.out.println(String.format("%.1f", w));
		
		double b1, b2, h, area;
		b1 = 6;
		b2 = 8;
		h = 5;
		area = (b1 + b2) / 2 * h;
		System.out.println(area);
		
		int a, b;
		double resultado;
		a = 5;
		b = 2;
		
		resultado = (double) a / b;
		
		System.out.println(resultado);
		
		double r;
		int p;
		r = 5;
		p = (int) r;
		
		System.out.println(p);

	}

}
