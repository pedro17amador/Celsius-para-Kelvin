#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float celsius,kelvin;
	
	printf("\tAlgoritmo que trasforma celsius em kelvin\n");
	printf("Digite a temperatura em celsius:\n");
	scanf("%f",&celsius);
	
	kelvin = celsius + 273.15;
	
	printf("O valor em kelvin é: %2.2f\n",kelvin);
	printf("Tecle enter para sair do DOS\n");
	
	return 0;
}
