#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int a,b,c;
	float x1,x2;
	
	printf("Digite o valor de A:");
	scanf("%d",&a);
	printf("Digite o valor de B:");
	scanf("%d",&b);
	printf("Digite o valor de C:");
	scanf("%d",&c);
	
	x1 = (-b + sqrt((pow(b,2)-4*a*c)))/2*a;
	x2 = (-b - sqrt((pow(b,2)-4*a*c)))/2*a;
	
	printf("O resultado de X1 é: %.1f",x1);
	printf("O resultado de X2 é: %.1f",x2);
	
	return 0;
}

