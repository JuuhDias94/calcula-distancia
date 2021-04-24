#include<stdio.h>
#include <stdlib.h>
#include <locale.h> //para poder usar palavras com acentua��o
#include<math.h> //para poder usar pow(elevado) e sqrt(raiz quadrada)

//struct para ponto inicial e ponto final:
struct ponto2d 
{    
	//vari�veis do tipo ponto flutuante com dobro de capacidade:
	double x;
	double y;
}; struct ponto2d ponto_inicial, ponto_final;

int main() //in�cio da fun��o
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentua��o

	//vari�veis do tipo ponto flutuante com dobro de capacidade:
	double dist, op1, op2, c; 
	int a = 0; //vari�vel do tipo inteiro

	//menu de op��es:
	printf("*** PROGRAMA QUE CALCULA A DIST�NCIA ENTRE DOIS PONTOS ***\n\n\n");
	printf(" _____________________MENU DE OP��ES______________________\n\n");
	printf("\t[1] - Digitar os valores do primeiro ponto              \n");
	printf("\t[2] - Digitar os valores do segundo ponto               \n");
	printf("\t[3] - Mostrar a dist�ncia entre os pontos               \n");
	printf("\t[4] - Sair                                              \n");
	printf(" _________________________________________________________\n");

	//pede n�mero da op��o desejada
	printf("\nDigite o n�mero da op��o desejada: ");
	scanf_s("%d", &a);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

	printf("\n"); //para pular linha

	//la�o de repeti��o para implementa��o das op��es do menu:
	while (a > 0 || a < 5) {
		switch (a)
		{
		case 1: //se a pessoa digitar 1
			printf("Digite os valores do primeiro ponto: \n");
			scanf_s("%lf%lf", &ponto_inicial.x, &ponto_inicial.y);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado
			break;
		case 2: //se a pessoa digitar 2
			printf("Digite os valores do segundo ponto: \n");
			scanf_s("%lf%lf", &ponto_final.x, &ponto_final.y);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado
			break;
		case 3: //se a pessoa digitar 3
			//para encontrar a dist�ncia entre os pontos x e y:
			op1 = pow(ponto_inicial.x - ponto_final.x, 2);
			op2 = pow(ponto_inicial.y - ponto_final.y, 2);
			dist = sqrt(op1 + op2);

			printf("A dist�ncia entre os pontos �: %.2lf\n\n", dist);
			break;
		case 4: //se a pessoa digitar 4
			exit(0);
			break;
		default:
			break;
		}

		//pede n�mero da op��o desejada
		printf("\nDigite o n�mero da op��o desejada: ");
		scanf_s("%d", &a);
		while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

		printf("\n"); //para pular linha
	}

	system("pause");
	return 0;
} //fim da fun��o 
