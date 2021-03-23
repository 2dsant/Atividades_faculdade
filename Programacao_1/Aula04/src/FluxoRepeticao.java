public class FluxoRepeticao {

	public static void main(String[] args) {
		
		int controle = 0;
		
		while(controle < 10) {
			System.out.println("Controle: " + controle);
			controle++;
		}
		do {
			System.out.println("Controle: " + controle);
		} while (controle < 1);
		
		
		for (int controle1 = 0; controle1 <= 10;  controle1++) {
			System.out.println("Controle: " + controle1);
		}

	}

}