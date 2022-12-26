#include <stdio.h>
#include <math.h>

int main (void){

    int N;
    float tol;

    printf("Escreva a ordem da matriz:");
    scanf("%d", &N);

    printf("Escreva a tolerância do erro na forma decimal:");
    scanf("%f", &tol);

    printf("\n");

    double matA[N][N], matB[N][1], x[N][1], xcom[N][1], xer[N][1];
    int i, j, cond, c = 0;

    printf("Escreva a matriz dos coeficientes:\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%lf", &matA[i][j]);
        }
    }

    printf("Escreva a matriz dos termos independentes:\n");

   for(i = 0; i < N; i++)
   {
    scanf("%lf", &matB[i][0]);
   }
  
  for(i = 0; i < N; i++)
  {
    x[i][0] = 0.0;
  }

  for(i = 0; i < N; i++)
  {
    xcom[i][0] = 0.0;
  }

  for(i = 0; i < N; i++)
  {
    xer[i][0] = 0.0;
  }

  do
  {
    for(i = 0; i < N; i++)
    {
        double soma = 0;

        for(j = 0; j < N; j++)
        {
            if(i != j)
            {
                soma = soma + matA[i][j]*x[j][0];
            }
        }

        x[i][0] = (matB[i][0] - soma)/matA[i][i];
    }

    for(i = 0; i < N; i++)
    {
        xer[i][0] = (fabs(x[i][0] - xcom[i][0])/fabs(x[i][0]))*100;

        if(xer[i][0] > tol)
        {
            cond = 1;
        }
        else
        {
            cond = 0;
        }

        xcom[i][0] = x[i][0];
    }

    printf("\n");
  
    for(i = 0; i < N; i++)
    {
        printf("X%d = %lf |e| = %lf\n",i+1, x[i][0], xer[i][0]);
    }

    c++;

    printf("Iteração: %d\n", c);

  }while(cond != 0);

  printf("O número de iterações foram: %d\n", c);

  return 0;
}