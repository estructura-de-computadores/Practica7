#include <stdio.h>
#define Tam 15

void lector (int vector_lee[Tam])
{
	for (int i=0;i<Tam;i++)
	{
		printf("Introdeuce un valor\n");
		scanf("%d",&vector_lee[i]);
	}
}
void parImpar (int vector_lee[Tam],int vector_cuenta[2])
{
	for (int i=0;i<Tam;i++)
	{
		if (vector_lee[i]%2==0)
		{
			vector_cuenta[0]=vector_cuenta[0]+1;
		}
		else
		{
			vector_cuenta[1]=vector_cuenta[1]+1;
		}
	}
}
int main()
{
	int vector_lee[Tam];
	int vector_cuenta[2]={0,0};

	lector(vector_lee);
	parImpar(vector_lee,vector_cuenta);

	printf("Los numeros pares son: %d\n",vector_cuenta[0]);
	printf("Los numeros impares son: %d\n",vector_cuenta[1]);

	return 0;
}
