public class BankAccount{

	private double balance;
	private String name;
	private int id;

	
	public double getBalance(){
		return this.balance;
	}

	public double getName(){
		return this.name;
	}

	public double getId(){
		return this.id;
	}

	public void setBalanceVal(double value){
		this.balance = value;
	}

	/**
	* Construtor que inicializa uma conta vazia
	* @author <Iago Nuvem>
	*/
	public void BankAccount(String n, int i){
		this.balance = 0.0;
		this.name = n;
		this.id = i;
	}

	/**
	* Realiza  o incremento no saldo
	* @author <Iago Nuvem>
	* @param <valor> <Valor do deposito do tipo double>
	* @return <Retorna o valor do saldo após o deposito>
	**/
	public double deposito(double valor){
		return (this.balance += valor);
	}

	/**
	* Realiza  o decremento no saldo
	* @author <Iago Nuvem>
	* @param <valor> <Valor da retirada do tipo double>
	* @return <Retorna o valor do saldo após a retirada>
	**/
	public double retirada(double valor){
		return (this.balance -= valor);
	}

}

public class Contas{

}

public class DataSet{
	private double[] array;

	public void DataSet(int n){
		this.array = new double[10];
	}

	/**
	* Adiciona um valor ao vetor.
	* @author <Iago Nuvem>
	* @param <x> <Valor a ser incluido no array, do tipo double>
	**/
	public void addValue(double x){
		// Se a ultima posição do array for vazia, significa que ainda há espaço para adicionar um valor
		if(this.array[this.array.length - 1] == NULL){
			// Percorre o array em busca de uma posição vazia
			for(int i = 0; i < this.array.length; i++){
				// Quando encontrar uma posição vazia...
				if(this.array[i] == NULL){
					this.array[i] = x; // Seta o valor passado como parametro
					break; // Encerra o loop
				}
			}
		}
		else{
			System.out.println("Não é possível adicionar mais valores ao vetor");
		}
	}

	/**
	* Retorna a soma dos elementos do vetor
	* @author <Iago Nuvem>
	* @return <soma> <Soma dos elementos do vetor, tipo double>
	**/
	public double getSum(){
		double soma = 0;
		for (int i = 0; i < this.array.length ; i++ ) {
			soma += this.array[i];
		}
		return soma;
	}
}

public static void main(String[] args) {
	
}