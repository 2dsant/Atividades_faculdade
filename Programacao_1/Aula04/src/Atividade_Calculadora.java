import java.util.Scanner;

public class Atividade_Calculadora {

	public static void main(String[] args) {
		Scanner num = new Scanner(System.in);
		
	    System.out.printf("Informe o primeiro numero: \n");
		int n1 = num.nextInt();
	    System.out.printf("Informe o segundo numero: \n");
		int n2 = num.nextInt();
		
		Atividade_Calculadora.soma(n1, n2);
		Atividade_Calculadora.subtracao(n1, n2);
		Atividade_Calculadora.multiplicacao(n1, n2);
		Atividade_Calculadora.divisao(n1, n2);
	}
	
	public static void soma(int n1, int n2) {
		int result = n1 + n2;
		System.out.println("SOMA: " + result);
	}
	
	public static void subtracao(int n1, int n2) {
		int result = n1 - n2;
		System.out.println("SUBTRAÇÃO: " + result);
	}
	
	public static void multiplicacao(int n1, int n2) {
		int result = n1 * n2;
		System.out.println("MULTIPLICAÇÃO: " + result);
	}
	
	public static void divisao(int n1, int n2) {
		int result = n1 / n2;
		System.out.println("DIVISÃO: " + result);
	}

}
