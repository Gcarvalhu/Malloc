#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//malloc(memory allocation)
	
	//Malloc serve para alocar fisicamente em sua mem�ria RAM um espa�o determinado normalmente pelo tipo de dado passado como par�metro
	//int = 4 bits double = 8 bits short = 2 bits char = 1 bit
	double a;
	int b;
	short c;
	char d;
		
	printf("Tamanho de um double: %li bits\n", sizeof(a));
	printf("Tamanho de um int: %li bits\n", sizeof(b));
	printf("Tamanho de um short: %li bits\n", sizeof(c));
	printf("Tamanho de um char: %li bits\n", sizeof(d));
	
	//(int  *) serve para informar que o valor que ser� retornado ser� do mesmo tipo do ponteiro 
	int *p = (int *)malloc(sizeof(int)); //Aqui foi alocado um tamanho de 4 bits(int) 
	
	*p = 1000;
	
	
	//free remove a aloca��o feita, mas n�o apaga seu valor
	free(p);//ponteiro n�o est� mais alocado a sua memoria, mas ele continua sendo 1000 mesmo assim
	
	
		
	//NOTA: mesmo que voce  tenha alocado um espa�o, ele n�o vai estar vazio mesmo que voce nao tenha inserido nada, atente se a isto
	printf("\nRetorno do int alocado: %i", *p);
		
	return 0;
}
