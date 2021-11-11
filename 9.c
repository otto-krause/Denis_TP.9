#include<stdio.h>
#include<stdlib.h>
int main()
{
	int personas=1, sueld, mas=0, menos=0, i=0;
	while (personas<=20)
	{
		printf("introduzca el sueldo de la persona %d: ",personas);
		scanf("%d",&sueld);
		if (sueld<2000)
		{
			menos=menos+1;
		}
		else
		{
			if (sueld>2000)
			{
				mas=mas+1;
			}
			else
			{
				i=i+1;
			}
		}
		personas=personas+1;
	}
	printf("Las personas con su sueldo a 2000 son: %d\n Las personas con un sueldo menor a 2000 son: %d\n",mas,menos);
	printf("Las personas con un sueldo igual a 2000 son: %d",i);
}
