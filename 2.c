#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int num=16, Num1=0, Num2=0, Promedio=0, Num3=0;
	printf("Ingrese quince numeros \n");
	while (num>0)
	{
		scanf("%d", &Num1);
		Num2=Num1+Num2;
		Promedio=Num2/15;
		
		num--;
		if (Num1>Num3)
		{
			Num3=Num1;
		}
	}
	printf ("El numero mayor es %d y el numero promedio es %d", Promedio, Num3);
}
