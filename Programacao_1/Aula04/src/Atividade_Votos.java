import java.io.Console;
import java.util.Scanner;

public class Atividade_Votos {
	public static void main(String[] args) {
		int op = 99;
		int vtAna = 0, vtClara = 0, vtJoao = 0, vtInacio = 0;

		while(op != 0){
			Scanner scan = new Scanner(System.in);
			
			System.out.println("Em quem deseja votar:\n");
			System.out.println("1.Ana | 2.Clara | 3.João | 4.Inácio \n");
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
					
				default:
					System.out.println("Opção inválida \n");
			}		
			
			if(op != 0) {
			System.out.println("Total de votos na Ana: " + vtAna + "\n" + "Total de votos na Clara: " + vtClara + "\n" + 
			"Total de votos no João: " + vtJoao + "\n" + "Total de votos no Inácio: " + vtInacio);
			}
			
		};
	}
}
