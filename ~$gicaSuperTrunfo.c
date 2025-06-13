#include<stdio.h>

 int main() {

 //Definição das variaveis para armazenar as propriedades das cidades
 char codigo[10];
 char nome[50];
 char pais[50];
 int populacao;
 float area;
 float pib;
 float pibpercapita;
    //cadastro das cartas
    printf("digite o cogigo da cidade:");
    scaf("%s", codigo);
    printf("digite o nome da cidade:");
    scaf("%s", nome:);
    printf("digite o nome do pais:");
    scaf("%s", pais);
    printf("digite a populacao da cidade:");
    scaf("%d", &populacao);
    printf("digite a area da cidade:");
    scaf("%f", area);
    printf("digite o pib da ciade:");
    scaf("&f", pib);
    pibpercapita = pib / populacao;
    printf("digite o pib per capita da ciade: %f", pibpercapita);
     //comparacao de cartas
     char codigo2[10];
     char nome2[50];
     char pais2[50];
     int populacao2;
     float area2;
     float pib2;float pibpercapita2;
      //cadastro das cartas
     printf("digite o codigo da cidade:");
     scaf("%s", codigo2);
    printf("digite o nome da cidade:");
    scaf("%s", nome2:);
    printf("digite o nome do pais:");
    scaf("%s", pais2);
    printf("digite a populacao da cidade:");
    scaf("%d", &populacao2);
    printf("digite a area da cidade:");
    scaf("%f", area2);
    printf("digite o pib da ciade:");
    scaf("&f", pib2);
    pibpercapita2 = pib2 / populacao2;
    printf("digite o pib per capita da ciade: %f", pibpercapita2);

    // comparacao de cartas
    if (populacao > populacao2)
        printf("A cidade %s tem maior populacao que a cidade2 %s\n", nome, nome2); ");
else if (populacao < populacao2) {
        printf("A cidade %s tem menor populacao que a cidade2 %s \n", nome, nome2);}
        else {
        printf("As cidades %s e %s tem a mesma populacao\n", nome, nome2);}
        if (area > area2)
        printf("A cidade %s tem maior area que a cidade2 %s \n", nome, nome2);
        else if (area < area2) {
        printf("A cidade %s tem menor area que a cidade2 %s \n", nome, nome2);}
        else{
        printf("A cidade %s e %s tem a mesma area\n", nome, nome2);}
        if(pib > pib2)
        printf("A cidade %s tem maior pib que a cidade2 %s \n", nome, nome2);
        else if (pib < pib2) {
        printf("A cidade %s tem menor pib que a cidade2 %s \n", nome, nome2);}
        else {
        printf("A cidade %s e %s tem o menor pib\n", nome, nome2);}
        if (pibpercapita > pibpercapita2)
        printf("A cidade %s tem maior pib per capita que a cidade2 %s \n", nome, nome2);
        else if (pibpercapita < pibpercapita2) {
        printf("A cidade %s tem menor pib per capita que a cidade2 %s \n", nome, nome2);}
        else{
        printf("A cidade %s e %s tem o mesmo pib per capita %f\n",nome, nome2, pibpercapita);
 }

       

