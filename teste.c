#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "symbol.h"

void main()
{
    NO teste = createProgram();
    NO par = createPar();
    insertPar(par,"a",1);
    insertFunction(teste,par,1,"a",1);
    printFunction(teste);
    printf("ok");
}