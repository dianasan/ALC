#include<stdio.h>

int main(void) {

int tam_matriz, i = 0;

printf("Digite a ordem da matriz:\n");
 scanf("%d", &tam_matriz); 

float A[tam_matriz][tam_matriz];
float B[tam_matriz];
float x[tam_matriz];

	printf("Digite os elementos da matriz\n");
 		for(int i = 0; i < tam_matriz; i++)
 		{
 			for(int j = 0; j < tam_matriz; j++)
 			{
 				if(i >= j)
 				{
 					scanf("%f", &A[i][j]);
 				}
 				else
 				{
 					A[i][j] = 0;
 				}
 			}
 		}

 	printf("Digite o vetor independente\n");
		while(i < tam_matriz)
		{
 			scanf("%f", &B[i]);
 			i++;	
 		}

	for(int i = 0; i < tam_matriz; i++)
	{
 		x[i] = B[i];

			for(int j = 0; j < tam_matriz; j++)
			{
				if(j < i)
				{
					x[i] = x[i] - (A[i][j] * x[j]);
				}
			}
		
		x[i]= x[i]/A[i][i];
	}

/*	for(int i = 0; i < tam_matriz;i++)
	{
 		for(int j = 0; j < tam_matriz; j++)
 		{
			printf("Posição na matriz(%d,%d) == %.1f\n",i,j,A[i][j]);
 		}
 	}
*/
 	for(int i = 0; i < tam_matriz;i++)
 	{
 		for(int j = 0; j < tam_matriz; j++)
 		{
 			printf("%1.f ", A[i][j]);
 		}
 
 			printf("\n");
 	}

/*	for(int i = 0; i < tam_matriz;i++)
 	{
		printf("Posição no vetor independente (%d) == %.1f\n",i,B[i]);
 	}
*/
 	for(int i = 0; i < tam_matriz;i++)
 	{
		printf("	Valor de x%d == %.1f\n",i,x[i]);
 	}

return 0;

}