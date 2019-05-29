#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char path1[255], char path2[255], texto_str[255];

	gets(&path1);
	gets(&path2);

	// criando a variável ponteiro para o arquivo
	FILE *pont_arq1, *pont_arq2;
	  
	//abrindo o arquivo
	pont_arq1 = fopen(path1, "a");
	pont_arq2 = fopen(path2, "w");

	//enquanto não for fim de arquivo o looping será executado
  	while(fgets(texto_str, 255, pont_arq1) != NULL){
  		char line[255] = fgets(texto_str, 255, pont_arq1);
  		fprintf(pont_arq2, "%s", line);
  	}

	// fechando arquivo
	fclose(pont_arq1);
	fclose(pont_arq2);
	
	return 0;
}