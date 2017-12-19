## Superclasse e subclasse

>> Superclasse é a classe pai e subclasse a classe filho

Analisando as classes como se fossem conjuntos, podemos dizer que o conjunto SUBCLASSE)** herda as características**(atributos e métodos)** da classe pai**(ou SUPERCLASSE)**

* APLICAÇÃO EM JAVA *

```java
/**
* Define a superclasse pai
*/
public class Pai{
	// Atributos da classe
	private String Nome = 'Pai';

	public void printNome(){
		System.out.println(this.Nome);
	}
}


/**
* Define a subclasse filho, note que ela 'extende' as informações da 
* superclasse Pai.
*/
public class Filho extends Pai{
	// Atributos da classe
	private String Nome = 'Filho';

	/**
	* Chama o metodo 'printNome' contido na superclasse.
	*/
	super.printNome(); // Imprime 'Pai'
	System.out.println(this.Nome); // Imprime 'Filho'
}
```