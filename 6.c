#include<stdio.h>
#include<stdlib.h>
int main()
{
	int alumno=1, nota=0, cont;
	float promed=0, promedcurso=0;
	while(alumno<=30)
	{
		printf("Ingrese las 10 notas del alumno %d\n",alumno);
		cont=1;
		while(cont<=10)
		{
			printf("Nota %d: ",cont);
			scanf("%d",&nota);
			
			promed=promed+nota;
			cont=cont+1;
		}
		promedcurso=promedcurso+promed;
		promed=promed/10;
		printf("El promedio del alumno es %f\n", promed);
		promed=0;
		alumno=alumno+1;
	}
	promedcurso=promedcurso/10;
	printf("El promedio del curso es \n%f",promedcurso);
}
