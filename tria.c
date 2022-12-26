#include<stdio.h>

int main(void){


 int tam_matriz;


printf("Digite a ordem da matriz:\n");
 scanf("%d", &tam_matriz); 

 float A[tam_matriz][tam_matriz];
 float B[tam_matriz][1];
 float x[tam_matriz];

 for(int i = 1; i <= tam_matriz;i++){
 	for(int j = 1; j <= tam_matriz; j++){
 		
 		if(i < j){
 			
 			A[i][j] = 0;
 		}

 		else{

 		scanf("%f", &A[i][j]);	
 		
 		}
 	}
 }

 	printf("Digite o vetor independente\n");
	for(int i = 1; i <= tam_matriz;i++){
 	
 		scanf("%f", &B[i][1]);
 		
 	}


for(int i = 1; i <= tam_matriz;i++){
 	
 	x[i] = B[i][1];

	for(int j = 1;j <= tam_matriz;j++){
		if(j <= (i-1)){
		x[i] = x[i] - (A[i][j] * x[j]);
		}
	}
	
	x[i]	= x[i]/A[i][i];
}

/*for(int i = 1; i <= tam_matriz;i++){
 	for(int j = 1; j <= tam_matriz; j++){

 		printf("Posição na matriz(%f,%f) == %f\n",i,j,A[i][j]);
 	}
 }

for(int i = 1; i <= tam_matriz;i++)
 	{
	printf("Posição no vetor independente (%f,1) == %f\n",i,B[i][1]);
 	}
*/
 	for(int i = 1; i <= tam_matriz;i++)
 	{
	printf("	Valor de x%d == %f\n",i,x[i]);
 	}


return 0;

}