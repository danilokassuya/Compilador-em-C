#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "symbol.h"

void main()
{
    NO teste = createProgram();
    NO cons = createConstante(1,1);
    insertConstante(getGlobalSymbolTableProgram(teste),cons);
    printHash(getGlobalSymbolTableProgram(teste));
    printf("ok");
}