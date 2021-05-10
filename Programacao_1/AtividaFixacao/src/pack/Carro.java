package pack;

public class Carro {
	private String nome;
	private String cor;
	private String marca;
	private Proprietario proprietario;
	private String Modelo;
	private String Cor;
	private String Ano;
	private String Marca;
	private String Chassi;
	private String Proprietário;
	private int velocidadeMax;
	private int velocidadeAtual;
	private int numPportas;
	private boolean tetoSolar;
	private int numMarcha;
	private int marchaAtual;
	private boolean cambioAut;
	private int VolCombustivel;
	
	public Carro(String nome, String cor, String marca, Proprietario proprietario) {
		this.nome = nome;
		this.cor = cor;
		this.marca = marca;
		this.proprietario = proprietario;
	}

	public void Acelerar() {
		if(velocidadeAtual < velocidadeMax) {
			this.velocidadeAtual += 1;
		}
	}
	
	public void TrocarMarcha(int marcha) {
		if(marcha < numMarcha) {
			
			switch(marcha) {
				
			case 0:
				if(velocidadeAtual == 0) {
					this.marchaAtual = 0;
				}
				break;
			case 1:
				this.marchaAtual = 1;
			break;
				
			case 2:
				this.marchaAtual = 2;
			
			case 3:
				this.marchaAtual = 3;
			break;
			
			case 4:
				this.marchaAtual = 4;
			break;

			case 5:
				this.marchaAtual = 5;
			break;	
			}
		}
	}
	
	public void Frear() {
		this.velocidadeAtual = 0;
	}
	
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public Proprietario getProprietario() {
		return proprietario;
	}

	public void setProprietario(Proprietario proprietario) {
		this.proprietario = proprietario;
	}
	
	
}
