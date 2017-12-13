/* Algoritmo para resolver a identidade de Bezout
Pedro Bernardi Alves */

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct Bezout {
	int x, y, d, r;
}Bezout;

void read_bezout(Bezout *bezout) {
	printf("\nDigite o valor de A - ");
	scanf("%d", &equ[0][0]);// Recebe valor x e o posiciona no (0,0) da matriz 
	printf("Digite o valor de B - ");
	scanf("%d", &equ[1][0]);// Recebe valor y e o posiciona no (1,0) da matriz 
	printf("Digite o valor de C - ");
	scanf("%d", &c);// Recebe valor c 
}

int main() {
	Bezout *bezout;



	system("pause");
}


/*
int Testar_Divisor(int, int equ[][4], int);

int main() {

	while (1) {

		int k, c, j = 1, d, i = 2, r, equ[99][4], ch;// equ[99][4] matriz de numero alto de linhas e 4 colunas

		setlocale(LC_ALL, "");

		printf("\nDigite o valor de A - ");
		scanf("%d", &equ[0][0]);// Recebe valor x e o posiciona no (0,0) da matriz 
		printf("Digite o valor de B - ");
		scanf("%d", &equ[1][0]);// Recebe valor y e o posiciona no (1,0) da matriz 
		printf("Digite o valor de C - ");
		scanf("%d", &c);// Recebe valor c 

						// Valores pre-definos da matriz
		equ[0][2] = 1;
		equ[0][3] = 0;
		equ[1][2] = 0;
		equ[1][3] = 1;

		r = equ[0][0] % equ[1][0];// Resto vai receber resto da divisão de posição (0,0) e (1,0) da matriz
		d = (int)equ[0][0] / equ[1][0];//Quociente vai receber divisão inteira de (0,0) e (1,0)
		while (r != 0) // A operação vai ocorrer enquanto resto for diferente de 0
		{
			equ[j + 1][0] = r; //Posição (n+1,0) da matriz vai receber resto;
			equ[i][2] = equ[i - 2][2] - equ[i - 1][2] * d;//Posição (k,2) vai receber (k-2,2) menos (k-1,2) vezes quociente
			equ[i][3] = equ[i - 2][3] - equ[i - 1][3] * d;//Posição (k,3) vai receber (k-2,3) menos (k-1,3) vezes quociente
			r = equ[j][0] % equ[j + 1][0];// Resto vai receber resto da divisão de posição (n,0) e (n+1,0) da matriz
			d = (int)equ[j][0] / equ[j + 1][0];//Quociente vai receber divisão inteira de (n,0) e (n+1,0)
			i++;// Acrescentar +1 ao k
			j++;// Acrescentar +1 ao n
		}

		k = Testar_Divisor(c, equ, j);  //A função vai receber c, a matriz por referência e a posição final de n

		if (k != 0) {
			printf("\n------------------------\nMDC - %d\n", equ[j][0]);//Resultado do MDC
			printf("X0- %d\n", k*equ[i - 1][2]);//Resultado x0
			printf("Y0- %d\n------------------------\n", k*equ[i - 1][3]);//Resutado de y0
		}
		else {
			printf("\nNão há soluções pois %d não divide %d\n", equ[j][0], c);
		}

		printf("\n1 - Nova equação");
		printf("\n2 - Sair");
		printf("\n\nEscolha uma opção: "); //Verificar se usuario deseja digitar mais uma equação
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			break;
		case 2:
			exit(0);
		default:
			printf("\nEscolha incorra, por favor digite novamente\n");
		}

	}
	return 0;
}

//Função para testar se c é divisor de MDC (a,b)
int Testar_Divisor(int c, int equ[][4], int j) {

	if (c%equ[j][0] == 0) {//Se resto de divisão de c por mdc for igual a 0 é divisivel, se não, não há soluções
		return (c / equ[j][0]);// Retornar quociente
	}
	return 0;
}*/