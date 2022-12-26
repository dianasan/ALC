#include<stdio.h>

 int soma(int x, int y);
 int sub(int x, int y);
 int div(int x, int y);
 int mult(int x, int y);
 void con_vetores(int tamanho, int vetor);


int main ()
{
 
 int valor1, valor2, som, subt, mul, divi;
 int tam_um, tam_dois, aa = 0, aaa = 0, vet_um[aa], vet_dois[aaa];

 printf("Digite dois valores\n");
 scanf("%d %d",&valor1, & valor2);

 som = soma(valor1,valor2);
 printf("O resultado é %d\n",som);
 
  subt = sub(valor1,valor2);
 printf("O resultado é %d\n",subt);
  
  mul = mult(valor1,valor2);
 printf("O resultado é %d\n",mul);
  
  divi = div(valor1,valor2);
 printf("O resultado é %d\n",divi);

 printf("Digite o tamanho do primeiro vetor\n");
 scanf("%d", &tam_um);
	aa = tam_um;

 printf("Agora digite os elementos desse vetor\n");
 	for(int i = 0; i < tam_um; i++)
 	{
 		scanf("%d", &vet_um[i]);
 	}

 printf("Digite o tamanho do segundo vetor\n");
 scanf("%d", &tam_dois);
	aaa = tam_dois;

 printf("Agora digite os elementos desse vetor\n");
 	for(int i = 0; i < tam_dois; i++)
 	{
 		scanf("%d", &vet_dois[i]);
 	}

 con_vetores(tam_um, vet_um[0]);

 return 0;

}
//operações matemáticas báscias
int soma(int x, int y)
{
	int resultado;
	resultado = x + y;
	return resultado;
}

int sub(int x, int y)
{
	int resultado;
	resultado = x - y;
	return resultado;
}

int div(int x, int y)
{
	int resultado;
	resultado = x/y;
	return resultado;
}

int mult(int x, int y)
{
	int resultado;
	resultado = x*y;
	return resultado;
}

//operações com vetores

void con_vetores(int tamanho, int vetor)
{

    for(int i = 0; i < tamanho; i++)
    {
    	printf("Valor ",&vetor[i]);
    }
}