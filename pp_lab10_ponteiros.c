#include <stdio.h>
#include <stdlib.h>

// luiz.brito@ufu.br


/*
4. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima
o endereço de cada posição dessa matriz.
*/
/*
int main()
{
	int i=0, j=0;
	float mat[3][3];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{

			printf("Digite um valor para a posicao[%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}
	
	
	printf("\nPosicao\t\tConteudo\tEndereco\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("mat[%d][%d]\t%.2f\t\t%ld\n", i, j, mat[i][j], (long int)&mat[i][j]);
		}
	}
	printf("\n");
	
	return 0;
}
*/


/*
3. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.
*/

/*
int main()
{

	int i=0;
	float vet[10]={0.5, 1.3, 2.0, 3.0, 4.5, 6.3, 7.5, 8,1, 9.6};
	
	printf("\n");
	printf("Um float ocupa %ld bytes nesta maquina.\n", sizeof(float));
	
	printf("Posicao\t\tConteudo\tEndereco\n");
	for(i=0; i<10; i++)
	{
		printf("vet[%d]\t\t%.2f\t\t%ld\n", i, vet[i], (long int)&vet[i]);
	}
	printf("\n");
	return 0;

}
*/

/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba:
a) o maior endereço.
b) o conteúdo do maior endereço.
*/

/*
int main()
{
	int n1=2, n2=3;
	int *n3=NULL, *n4=NULL;
	n3=&n1;
	n4=&n2;
	
	
	printf("\n");
	printf("O valor de n1 = %d\n", n1);
	printf("O valor de n2 = %d\n", n2);
	printf("O endereco de n1 = %ld\n", (long int)n3);
	printf("O endereco de n2 = %ld\n", (long int)n4);
	printf("\n");
	
	//maior = &n1 >&n2 ? &n1 : &n2;  //operador ternario
	
	if(n3>n4)
	{
	printf("O endereco n3=%ld e maior que n4=%ld o valor de n1 eh: %d\n\n", (long int)n3, (long int)n4, *n3);
	}
	else
	{
	printf("O endereco n4=%ld e maior que n3=%ld o valor de n2 eh: %d\n\n", (long int)n4, (long int)n3, *n4);
	}
	
	return 0;
}
*/


/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

int main()
{
	int n1=1; //4 bytes, 4*8bits  2³², 2³¹(negativos), 0, 2³¹-1(positivo)
	//long int; //64 bits
	float n2=1.0;
	char c1='a';
	
	//unsigned int inteiro_nao_negativo;
	//printf("tam(int) = %ld\n", sizeof(int));
	
	int *n3=NULL;
	float *n4=NULL;
	char *c2=NULL;

	n3 = &n1; //& fornece o endereço da variavel para o ponteiro
	n4 = &n2;
	c2 = &c1;
	
	printf("\nO valor inicial da variavel n1 eh: 1\n");
	printf("O valor inicial da variavel n2 eh: 1.0\n");
	printf("O valor inicial da variavel c1 eh: a\n\n");
	
	
	printf("Digite um valor para o ponteiro n3: ");
	scanf("%d", n3);	
	printf("Digite um valor para o ponteiro n4: ");
	scanf("%f", n4);	
	printf("Digite um caracter para o ponteiro c2: ");
	setbuf(stdin, NULL);
	scanf("%c", c2);

	
	printf("\nApos a entrada do valor usando a relacao n3=&n1 n1 recebeu o valor: %d\n", n1);
	printf("Apos a entrada do valor usando a relacao n4=&n2 n2 recebeu o valor: %.1f\n", n2);
	printf("Apos a entrada do valor usando a relacao c2=&c1 c1 recebeu o valor: %c\n\n", c1);
	
	return 0;
}

