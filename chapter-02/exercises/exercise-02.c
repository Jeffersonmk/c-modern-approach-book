/*
2. Consider the following program:

#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}

(a) Identify the directives and statements in this program.
(b) What output does the program produce?
*/


#include <stdio.h> /*Diretiva*/
int main (void)
{
    printf("Parkison's Law:\nWork expands so as to"); /*Instrução1*/
    printf("fill the time\n"); /*Instrução2*/
    printf("avaliable for its completion.\n"); /*Instrução3*/
    return 0;
}

/*
Saída: 
Parkison's Law:
Work expands so as tofill the time
avaliable for its completion.
*/