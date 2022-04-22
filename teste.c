#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "symbol.h"

void main()
{
    NO teste = createProgram();
    insertConstante(teste,"teste",0,5,5);
    printf("ok");
}
