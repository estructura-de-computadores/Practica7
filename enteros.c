#include <stdio.h>
#define Tam 20

void lector (int vector_lee[Tam])
{
	for (int i=0;i<Tam;i++)
	{
		printf ("Introduzca un valor\n");
		scanf ("%d",&vector_lee[i]);
	}
}
void enteros (int vector_lee[Tam],int vector_cuenta[3])
{
	for (int i=0;i<Tam;i++)
	{
		if (vector_lee[i]==0)
		{
			vector_cuenta[0]=vector_cuenta[0]+1;
		}
		if (vector_lee[i]>0)
		{
			vector_cuenta[1]=vector_cuenta[1]+1;
		}
		if (vector_lee[i]<0)
		{
			vector_cuenta[2]=vector_cuenta[2]+1;
		}
	}
}
int main ()
{
	int vector_lee[Tam];
	int vector_cuenta[3]={0,0,0};

	lector(vector_lee);
	enteros(vector_lee,vector_cuenta);

	printf("Numeros que son cero: %d\n",vector_cuenta[0]);
	printf("Numeros positivos: %d\n",vector_cuenta[1]);
	printf("Numeros negativos: %d\n",vector_cuenta[2]);
	return 0;
}
