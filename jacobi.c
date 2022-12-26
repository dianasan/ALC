#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define tam 3

int main(){
	int t, i, j, k;
	float a[tam][tam], b[tam],x[tam], x0[tam],x2[tam], e, norma = 0, soma = 0, soma2 = 0;

	//inserindo elementos na matriz A
	printf("Inserindo elementos da amtriz A:\n");
	for(i = 0;i < tam;i++){
		for(j = 0; j < tam;j++){
			printf("Insira o elemento a[%i,%i]:",1+1, j+1);
			scanf("%f", &a[i][j]);
		}
	}//inserindo os elemntos do vetor de termos independentes B
	printf("\nInserindo os termos idependentes B:\n");
	for(i = 0; i < tam; i++){
		printf("Insira o elemento b[%i]:", i+1);
		scanf("%f",&b[i]);
	} 

	//inserindo os elementos do vetor x0 inicial
	printf("\nEntrando com os valores do vetor x0(inicial)\n");
	for(i = 0; i < tam; i++){
		printf("x0[%i] =",i+1);
		scanf("%f",&x0[i]);
	}

	//imprimeindo a matriz 
	 printf("\n Matriz A:\n");
	 for(i = 0; i < tam; i++){
	 	for(j = 0; j < tam; j++){
	 		printf("%0.f", a[i][j]);
	 		if(j==2){
	 			printf("\n");
	 		}
	 		else{
	 			printf("\t");
	 		}
	 	}
	 }
	
	 printf("\n\n");

	 //imprimindo o vetor de termos independentes

	 printf("\n Vetor B:\n");
	 for(i = 0; i < tam; i++){
	 	printf("%.0f",b[i]);
	 	if(i == 2){
	 		printf("\n");
	 	}
	 	else{
	 		printf("\t");
	 	}
	 }

	 printf("\n\n");

	 //imprimindo o vetor x
	 printf("\n Vetor x:\n");
	 for(j = 0; j < tam; j++){
	 	printf("%.0f",x0[j]);

	 	if(j == 2){
	 		printf("\n");
	 	}
	 	else{
	 		printf("\t");
	 	}
	 }

	 printf("\n\n");

	 printf("Entre com a precisão: \n");
	 scanf("%f", &e);

	 while(!(pare)){
	 	for(i = 0; i < tam; i++){
	 		//calculando  o valor do primeiro somatório
	 		for(j = 0; j < i; j++){
	 			soma = soma + a[i][j]*x0[j];
	 		}
	 		//calculando o valor do segundo somatório
	 		for(j = i+1; j < tam; j++){
	 			soma2 = soma2 + a[i][j]*x0[j];
	 		}
	 		
	 		x[i] = (b[i] - soma - soma2)/a[i][j];
	 		printf("x%i = %f\n",i, x[i]);
	 		soma = 0;
	 		soma2 = 0;
	 	}

	 	for(t = 0; t, tam; t++){
	 		x2[t] = x[t] - x0[t];
	 	}

	 	norma = (sqrt((x2[0]*x2[0])+(x2[1]*x2[1])+(x2[2]*x2[2])))/sqrt((x[0]*x[0])+(x[1]*x[1])+(x[2]*x[2]));
	 	printf("norma = %f",norma);
	 	printf("\n Pressione para continuar\n");
	 	getch();

	 	if(norma <= e)
	 	{
	 		pare = true;
	 	}
	 	else{
	 		for(t = 0;t < tam;t++){
	 			x0[t] = x[t];
	 		}
	 	  k++;
	 	}
	 }
 return 0;
}