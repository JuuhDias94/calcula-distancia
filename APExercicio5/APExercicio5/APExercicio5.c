#include<stdio.h>
#include <stdlib.h>
#include <locale.h> //para poder usar palavras com acentuação
#include<math.h> //para poder usar pow(elevado) e sqrt(raiz quadrada)

//struct para ponto inicial e ponto final:
struct ponto2d 
{    
	//variáveis do tipo ponto flutuante com dobro de capacidade:
	double x;
	double y;
}; struct ponto2d ponto_inicial, ponto_final;

int main() //início da função
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentuação

	//variáveis do tipo ponto flutuante com dobro de capacidade:
	double dist, op1, op2, c; 
	int a = 0; //variável do tipo inteiro

	//menu de opções:
	printf("*** PROGRAMA QUE CALCULA A DISTÂNCIA ENTRE DOIS PONTOS ***\n\n\n");
	printf(" _____________________MENU DE OPÇÕES______________________\n\n");
	printf("\t[1] - Digitar os valores do primeiro ponto              \n");
	printf("\t[2] - Digitar os valores do segundo ponto               \n");
	printf("\t[3] - Mostrar a distância entre os pontos               \n");
	printf("\t[4] - Sair                                              \n");
	printf(" _________________________________________________________\n");

	//pede número da opção desejada
	printf("\nDigite o número da opção desejada: ");
	scanf_s("%d", &a);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

	printf("\n"); //para pular linha

	//laço de repetição para implementação das opções do menu:
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
			//para encontrar a distância entre os pontos x e y:
			op1 = pow(ponto_inicial.x - ponto_final.x, 2);
			op2 = pow(ponto_inicial.y - ponto_final.y, 2);
			dist = sqrt(op1 + op2);

			printf("A distância entre os pontos é: %.2lf\n\n", dist);
			break;
		case 4: //se a pessoa digitar 4
			exit(0);
			break;
		default:
			break;
		}

		//pede número da opção desejada
		printf("\nDigite o número da opção desejada: ");
		scanf_s("%d", &a);
		while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

		printf("\n"); //para pular linha
	}

	system("pause");
	return 0;
} //fim da função 
