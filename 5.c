#include<stdio.h>
#include<stdlib.h>

int main()
{
	int base, exp, con=1, pot=1;
	printf("Ingrese un numero de base\n");
	scanf("%d",&base);
	printf("Ingrese el exponente\n");
	scanf("%d",&exp);
	while(con<=exp)
	{
		pot=pot*base;
		cont=cont+1;
		printf("La potencia es %d", pot);
	}
	printf("La potencia es %d", pot);
}
