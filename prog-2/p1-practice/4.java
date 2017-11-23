public class Contatos{

	Integer cod;
	String nome;
	String email;
	String telefone;
	String endereco;
	String aniversario;
	Integer	tipo;

	// Construtor da classe
	public Contatos(String txtnome, String txtemail, String txttelefone, String txtendereco, Integer tipo){
		this.nome = txtnome;
		this.email = txtemail;
		this.telefone = txttelefone;
		this.endereco = txtendereco;
	}

	public static void main(String []args) {
		System.out.println("ola mundo");

		//Instancia um novo objeto
      	Contatos cliente = new Contatos("Prisco", "prisco@ufop.com", "12312312", "av teste", 1);
      
   	}
}

public class Clientes{
	String ultimaCompra;
	String classificacao;

	public Clientes(String txtnome, String txtemail, String txttelefone, String txtendereco, Integer tipo){
		this.nome = txtnome;
		this.email = txtemail;
		this.telefone = txttelefone;
		this.endereco = txtendereco;
	}

}

public class Fornecedores{

}