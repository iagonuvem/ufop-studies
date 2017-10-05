/*Basic Java structure*/
package example1;

import java.util.Scanner;

/*
Java Class
*/
public class example1{
	public static void main(String[] args) {
		System.out.printIn("Hello Word!"); // Basic java message

		// Java Object
		Scanner entrada;
		entrada = new Scanner(System.in);

		System.out.printIn("Digite alguma coisa:");
		String str = "";
		str = entrada.next;
		System.out.printf("Valor digitado: %s" , str);
	}
}