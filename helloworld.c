/*
* helloworld3.c
* My third C program
* by Ethan
* created 02-16-2025
*/

#include <stdio.h>

void printComma()
{
    printf(", ");
}

void printWord(char* word)
{
    printf("%s", word);
}

int main()
{
    printWord("Hello");
    printComma();
    printWord("world!");
    printf("\n");
    return 0;
}
