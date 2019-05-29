#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int dias,ano,mes,dia;

	scanf(&dias);

	ano = dias/365;
	mes = (dias%365)/12;
	dia = ((dias%365)%12)/30

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano,mes,dia);

	return 0;
}