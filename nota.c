#include <stdio.h>
#define Tam 10

int main()
{
	int nota[Tam];
	for (int i=0;i<Tam;i++)
	{
		printf("Dame una nota\n");
		scanf("%d",&nota[i]);
	}
	printf("La nota en la posicion 2 es %d\n",nota[2]);
}
