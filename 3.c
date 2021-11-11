#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int inf, sup;
	
	printf( "Introduzca un numero \n");
	scanf( "%d", &inf);
	printf( "Introduzca un numero\n" );
	scanf( "%d", &sup);	
	
	printf( "\n " );
	if (inf<= sup)
		
		do
	{
		printf ("%d\n", inf);
		inf++;
		
	} 
	while ( inf<= sup);
	
	else
		printf( "error: %d no es mayor o igual que %d", sup, inf );
	
	return 0;
}
