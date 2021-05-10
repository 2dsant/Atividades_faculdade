import java.io.Console;
import java.util.Scanner;

public class Atividade_Votos {
	public static void main(String[] args) {
		int op = 99;
		int vtAna = 0, vtClara = 0, vtJoao = 0, vtInacio = 0, brancos = 0, nulos = 0, total=0;
		float percentNulo, percentBranco;  
		
		while(op != 0){
			Scanner scan = new Scanner(System.in);
			
			System.out.println("Em quem deseja votar:\n");
			System.out.println("1.Ana | 2.Clara | 3.João | 4.Inácio | 5.Voto Nulo | 6.Voto em branco\n");
			op = scan.nextInt();
			
			switch(op) {
				case 0:
				System.out.println("Programa encerrado!");
				break;
				
				case 1:
					vtAna ++;
					break;
					
				case 2:
					vtClara ++;
					break;
					
				case 3:
					vtJoao ++;
					break;
					
				case 4:
					vtInacio ++;
					break;
				case 5:
					nulos ++;
					break;
				case 6:
					brancos ++;
					break;
					
				default:
					System.out.println("Opção inválida \n");
			}
			
			total = vtAna + vtClara + vtJoao + vtInacio + brancos + nulos;
			percentNulo =  (nulos/(float)total)*100;
			percentBranco =  (brancos/(float)total)*100;
			
			if(op != 0) {
			System.out.println("\nTotal de votos na Ana: " + vtAna + "\n" + "Total de votos na Clara: " + vtClara + "\n" + 
			"Total de votos no João: " + vtJoao + "\n" + "Total de votos no Inácio: " + vtInacio + "\n" + "Total de votos nulos: " 
			+ nulos + "\n" + "Total de votos em branco: " + brancos);
			System.out.println("Percentual de votos brancos: " + percentBranco + "%" + "\nPercentual de votos nulos: " + percentNulo + "%" + "\n\n");
			}
			
		};
	}
}
