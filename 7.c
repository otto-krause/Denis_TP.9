#include<stdio.h>
#include<stdlib.h>
int main()
{
	int vend=1, venta, total=0, mayor=0, mayorventa=0;
	while(vend<=20)
	{
		printf("Ingrese las ventas diarias de algun vendedor %d\n",vend);
		scanf("%d",&venta);
		venta=venta*15;
		
		if (mayor<venta)
		{
			
			mayor=venta;
			mayorventa=vend;
		}
		
		total=total+venta;
		printf("El total vendido es %d\n",venta);
		vend=vend+1;
	}
	printf("El total general de los vendedores es: %d ventas\n",total);
	printf("El vendedor con mas ventas es: %d con: %d ventas",mayorventa,mayor);
}
