public class Pessoa{
	
	private String nome;
	private String mae;
	private String pai;

	/*
	Construtor
	*/
	public Pessoa(String txtnome, String txtpai, String txtmae){
		this.nome = txtnome;
		this.mae = txtmae;
		this.pai = txtpai;
	}

	public void verificaIgualdade(Pessoa p1, Pessoa p2){
		if(p1.nome == p2.nome && p1.mae == p2.mae){
			System.out.println("Sao a mesma pessoa");
		}
		else{
			System.out.println("Nao Sao a mesma pessoa");
		}
	}

	public void verificaIrmaos(Pessoa p1, Pessoa p2){
		if(p1.pai == p2.pai && p1.mae == p2.mae){
			System.out.println("Sao irmaos");
		}
		else{
			System.out.println("Nao Sao irmaos");
		}
	}

	public static void main(String[] args) {
		Pessoa p1 = new Pessoa("teste" , "teste", "teste");
		Pessoa p2 = new Pessoa("teste" , "teste", "teste");

		p1.verificaIgualdade(p1,p2);
	}
}