 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main(void)
{   
    setlocale(LC_ALL, "Portuguese");
	printf("Olá Mundo!\n");
	return 0;
}