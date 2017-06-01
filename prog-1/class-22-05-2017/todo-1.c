// 1) Write a program in C that read Hours , Minutes and seconds and convert it all to seconds.
// 2) Write a program in C that read a temperature in Celsius and convert to Farenheit and Kelvin (K = C + 273; F = 1,8C + 32).
// 3) Write a program in C that read Seconds and convert to HH:MM:SS format.

// question 1
#include <stdio.h>
int main()
{
	int h, m, s, soma;

	printf("digite as horas: \n");
	scanf("%h" , &h);

	printf("digite os minutos: \n");
	scanf("%m" , &m);

	printf("digite os segundos: \n");
	scanf("%s" , &s);

	h = 3600 * h;
	m = 60 * m;

	soma = h + m + s;

	printf("O valor em segundos e: %s\n" , soma);

	return 0;
}

// question 2
#include <stdio.h>
int main()
{
	float tc, tf , tk;

	printf("digite a temperatura em celsius: \n");
	scanf("%h" , &tc);

	tf = 1.8 * tc + 32;
	tk = tc + 273;

	printf("temperatura digitada em celsius: %s\n" , tc);
	printf("temperatura digitada em Farenheit: %s\n" , tf);
	printf("temperatura digitada em Kelvins: %s\n" , tk);

	return 0;
}

// question 3
#include <stdio.h>

int main()
{
	int s,h,m, restoh;

	printf("digite os segundos: \n");
	scanf("%s" , &s);

	h = s / 3600;
	restoh = s % 3600;
	m = restoh / 60;
	s = m % 60;

	printf("%d:" h);
	printf("%d:" m);
	printf("%d" s);

	return 0;
}