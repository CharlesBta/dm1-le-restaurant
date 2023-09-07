#include <stdio.h>
#include "fonction.c"

int main() {
    int nomClient;
    int table;
    char boisson;
    char plat;
    char dessert;
    int prixTotal;

    printf("Combien etes vous pour le restaurant? \n");
    scanf("%d",&nomClient);
    table = numTable(nomClient);

    getchar();
    printf("Quel boisson souhaitez vous? (s: soda, e: eau, l: limonade)\n");
    scanf("%c", &boisson);
    getchar();

    printf("Quel plats ? (c: coucous, t: tomates, r: risotto)\n");
    scanf("%c", &plat);
    getchar();

    printf("Quel dessert? (t: tiramisu, g: glace, m: macaron)\n");
    scanf("%c", &dessert);
    getchar();


    prixTotal = sommePlat(boisson,plat,dessert,nomClient);
    printf("Vous devez pour %d personne(s) %d e",nomClient,prixTotal);
    return 0;
}
