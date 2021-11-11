#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont=1, post=0, negt=0, cero=0;
	while(cont<=10)
	{
		printf("Introduzca un numero %d\n",cont);
		scanf("%d",&num);
		if (num<0)
		{
			
			negt=negt+1;
		}
		else
		{
			if (num>0)
			{
				post=post+1;
			}
			else
			{
				cero=cero+1;
			}
		}
		cont=cont+1;
	}
	printf("Numeros positivos: %d\n Numeros negativos: %d\n Numeros iguales a cero: %d",post,negt,cero);
}
