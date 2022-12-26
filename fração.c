#include <stdio.h>

int mmc(int num1, int num2);
void soma(int num1, int num2,  int num3, int num4);

int main (void){

int num1, den1, num2, den2;


printf("Digite o numerador e o denominador da primeira fração:");
scanf ("%d %d", &num1, &den1);
printf("\n");
printf("Digite o numerador e o denominador da segunda fração:");
scanf("%d %d", &num2, &den2);
printf("\n");

printf("As frações são:%d/%d e %d/%d\n", num1, den1, num2, den2);

int mc = mmc(den1, den2);
printf("%d \n", mc);

soma(num1, den1, num2, den2);


return 0;
}

int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    while(resto != 0) {
        resto = a % b;

        a = b;
        b = resto;

    } 

    return ( num1 * num2) / a;
}

void soma(int num1, int num2,  int num3, int num4) {

	int soma, a, b, c, d, mc;

	if (b == d) {

		soma = a + b;
		
	printf("%d/%d\n",soma, b);

	} 

	else {

	mc = mmc(b,d);
	soma = ((mc/b)*a) + ((mc/d)*d);
	printf("%d/%d\n",soma, mc );

	}
}