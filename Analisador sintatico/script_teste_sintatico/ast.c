#include <ast.h>
#include <sintatico.tab.h>

int erroFinal(char a[],int linha,int coluna){
	int i = 1;
	printf("%s\n",a);
	while(i<coluna){
		printf(" ");
		i++;
	}
	printf("^");
	return 0;
}
