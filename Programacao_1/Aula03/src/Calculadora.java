
public class Calculadora {

	public static void main(String[] args) {
		Calculadora.soma(5.3, 4.7);
		Calculadora.subtracao(5.3, 4.7);
		Calculadora.multiplicacao(5.3, 4.7);
		Calculadora.divisao(5.3, 4.7);
	}
	
	public static void soma(Double n1, Double n2) {
		double result = n1 + n2;
		System.out.println("SOMA: " + result);
	}
	
	public static void subtracao(Double n1, Double n2) {
		double result = n1 - n2;
		System.out.println("SUBTRAÇÃO: " + result);
	}
	
	public static void multiplicacao(Double n1, Double n2) {
		double result = n1 * n2;
		System.out.println("MULTIPLICAÇÃO: " + result);
	}
	
	public static void divisao(Double n1, Double n2) {
		double result = n1 / n2;
		System.out.println("DIVISÃO: " + result);
	}

}
