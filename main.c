#include <stdio.h>
#include "fonction.c"

int main() {
    int table;
    printf("Combien etes vous pour le restaurant? \n");
    scanf("%d",&table);
    table = numTable(table);
    printf("%d",table);
    return 0;
}
