#include <stdio.h>
#define Tam 10

void inicializa (int vector[Tam])
{
	for(int i=0;i<Tam;i++)
	{
	printf("Introduce un valor\n");
	scanf("%d",&vector[i]);
	}
}
int maximo(int vector[Tam])
{
	int max = vector[0];
	for (int i=1;i<Tam;i++)
	{
		if (vector[i]>max)
		{
			max=vector[i];
		}
	}
	return (max);
}
int main()
{
	int vector[Tam],max;
	inicializa(vector);
	max=maximo(vector);
	printf("El valor maximo del vector es: %d\n",max);
	return 0;
}
