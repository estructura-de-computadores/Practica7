#include <stdio.h>
#include <math.h>
#define Tam 15

float Fmedia (int vector[Tam])
{
	int suma=0;
	float media;
	for (int i=0;i<Tam;i++)
	{
		suma=suma+vector[i];
	}
	media=(float)suma/Tam;
	return (media);
}
int Fvarianza(int vector[Tam],float media)
{
	int op=0;
	for (int i=0;i<Tam;i++)
	{
		op=pow((vector[i]-media),2);
	}
	int varianza=op/Tam;
	return (varianza);
}
int Fdesviaciontipica(int vector[Tam],float varianza)
{
	float desviaciontipica = sqrt (varianza);
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
	float media = Fmedia(vector);
	float varianza = Fvarianza(vector,media);
	float desviacion = Fdesviaciontipica(vector,varianza);
	printf ("La media es: %.2f\n",media);
	printf ("La varianza es: %.2f\n",varianza);
	printf ("La desviacion tipica es: %.2f\n",desviacion);
	return 0;
}
