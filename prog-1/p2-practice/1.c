#include <stdio.h>

void quest3(char a[3][31]){
	int cont_a = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 31; ++j)
		{
			if(a[i] == '\0'){
				break;
			}
			if(a[i][j] == 'a'){
				cont_a++;
			}
			else if(a[i][j] == 'e'){
				a[i][j] = '3';
			}
		}
	}

	printf("Letras A encontradas: %d\n", cont_a);

	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n", a[i]);
	}
	
}
int main(){
	char a[3][31];

	for (int i = 0; i < 3; ++i)
	{
		scanf("%s" , a[i]);
	}

	quest5(a);

	return 0;
}