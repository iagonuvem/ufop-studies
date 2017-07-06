#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

// Exercicio 3 e 4 - Pag 25
int dado(int s){
	srand(s);
	int r =  rand() % 6 + 1; // Gera um numero aleatorio de 1 a 6

	return r;
}


int main()
{
	int q,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0, reps = 1000000;
	float p1,p2,p3,p4,p5,p6;
	for (int i = 0; i < reps; i++) // lançar o dado um milhão de vezes
	{
		q = dado(i);

		switch(q){
			case 1:
				c1++;
			break;
			case 2:
				c2++;
			break;
			case 3:
				c3++;
			break;
			case 4:
				c4++;
			break;
			case 5:
				c5++;
			break;
			case 6:
				c6++;
			break;
			default:
			break;
		}
	}

	p1 = ((float)c1 / reps)*100;
	printf("Numero 1 foi sorteado %d vezes (%.4f por cento)\n", c1 ,p1);

	p2 = ((float)c2 / reps)*100;
	printf("Numero 2 foi sorteado %d vezes (%.4f por cento)\n", c2 ,p2);

	p3 = ((float)c3 / reps)*100;
	printf("Numero 3 foi sorteado %d vezes (%.4f por cento)\n", c3 ,p3);

	p4 = ((float)c4 / reps)*100;
	printf("Numero 4 foi sorteado %d vezes (%.4f por cento)\n", c4 ,p4);

	p5 = ((float)c5 / reps)*100;
	printf("Numero 5 foi sorteado %d vezes (%.4f por cento)\n", c5 ,p5);

	p6 = ((float)c6 / reps)*100;
	printf("Numero 6 foi sorteado %d vezes (%.4f por cento)\n", c6 ,p6);

	return 0;
}