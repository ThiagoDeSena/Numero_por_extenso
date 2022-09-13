#include <stdio.h>
#include <stdlib.h>
//4.Ler um número de 0 a 10 e escrever este número por extenso(usando o comando switch)
int main(){
	int n;
	printf("Ler um numero de 0 a 10 e escrever este numero por extenso(usando o comando switch)\n\n");
	printf("Digite um numero de 0 a 10: ");
	scanf("%d",&n);
	
	switch (n){
		case 0:
			printf("ZERO\n");
			break;
		case 1:
			printf("UM\n");
			break;
		case 2:
			printf("DOIS\n");
			break;
		case 3:
			printf("TRES\n");
			break;
		case 4:
			printf("QUATRO\n");
			break;
		case 5:
			printf("CINCO\n");
			break;
		case 6:
			printf("SEIS\n");
			break;
		case 7:
			printf("SETE\n");
			break;
		case 8:
			printf("OITO\n");
			break;
		case 9:
			printf("NOVE\n");
			break;
		case 10:
			printf("DEZ\n");
			break;
		default:
			printf("Numero invalido! Digite um numero valido.\n");
			break;
	}
	system("pause");
	return 0;
}
