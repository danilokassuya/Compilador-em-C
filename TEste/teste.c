#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "symbol.h"

void main()
{
    NO teste = createProgram();
    insertConstante(getGlobalSymbolTableProgram(teste),createConstante("a",0,1,1));
    insertConstante(getGlobalSymbolTableProgram(teste),createConstante("ab",0,1,1));
    insertConstante(getGlobalSymbolTableProgram(teste),createConstante("ba",0,1,1));
    printHash(getGlobalSymbolTableProgram(teste));
    printf("ok");
}
