#include <stdio.h>
#include <math.h>
#define Tam 15

float media (int vector[Tam])
{
	int suma=0;
	float media;
	for (int i=0;i<Tam;i++)
	{
		suma=suma+vector[i];
	}
	media=suma/Tam;
	return (media);
}
int varianza(int vector[Tam])
{
	int op=0;
	int media=media(vector);
	for (int i=0;i<Tam;i++)
	{
		op=pow((vector[i]-media),2);
	}
	int varianza=op/Tam;
	return (varianza);
}
int desviaciontipica(int vector[Tam])
{
	int varianza=varianza(vector);
	int desviaciontipica = sqrt (varianza);
	return (desviaciontipica);
}
int main()
{
	int vector[Tam];
	for (int i=0;i<Tam;i++)
	{
		printf("Introduzca un valor\n");
		scanf("%d",&vector[i]);
	}
	int media=media(vector);
	int varianza=varianza(vector);
	int desviacion=desviaciontipica(vector);
	printf ("La media es: %d\n",media);
	printf ("La varianza es: %d\n",varianza);
	printf ("La desviacion tipica es: %d\n",desviaciontipica);
	return 0;
}
