#include <stdio.h>

int main () {

char estado[10];
char codigo[10];
char cidade[50];
int populacao;
float area;
float PIB;
int pontosturisticos;

char estad2[10];
char codigo2[10];
char cidade2[50];
int populacao2;
float area2;
float PIB2;
int pontosturisticos2;



printf("Cidade 1  \n"); //mensagem informando sobre a primeira cidade

printf("Digite a sua UF: \n "); //Mensagem ao usuario
scanf("%s", estado);  //retorna ao usuário a solicitação da UF

printf("digite o código do seu estado: \n ");  //Mensagem ao usuario
scanf("%s",codigo);  //solicita ao usuário o código da UF

printf("Digite a sua cidade: \n ");  //mensagem ao usuário
scanf("%s", cidade);   //solicita o nome da cidade do usuário

printf("Qual a população de sua cidade: \n "); //mensagem ao usuário 
scanf("%d", &populacao); //solicita a população do usuário

printf("Qual a aréa da sua cidade: \n "); //mensagem ao usuário
scanf("%f", &area); //solicita a área da cidade 

printf("Qual o PIB da sua cidade: \n "); //mensagem ao usuário
scanf("%f", &PIB);  //solicita a área da cidade

printf("Quantos pontos turísticos sua cidade tem: \n"); //mensagem ao usuário
scanf("%d", &pontosturisticos);  //solicita a quantidade de pontos turísticos

printf("Cidade 2  \n"); //mensagem informando sobre a primeira cidade

printf("Digite a sua UF: \n "); //Mensagem ao usuario
scanf("%s", estad2);  //retorna ao usuário a solicitação da UF

printf("digite o código do seu estado: \n ");  //Mensagem ao usuario
scanf("%s",codigo2);  //solicita ao usuário o código da UF

printf("Digite a sua cidade: \n ");  //mensagem ao usuário
scanf("%s", cidade2);   //solicita o nome da cidade do usuário

printf("Qual a população de sua cidade: \n "); //mensagem ao usuário 
scanf("%d", &populacao2); //solicita a população do usuário

printf("Qual a aréa da sua cidade: \n "); //mensagem ao usuário
scanf("%f", &area2); //solicita a área da cidade 

printf("Qual o PIB da sua cidade: \n "); //mensagem ao usuário
scanf("%f", &PIB2);  //solicita a área da cidade

printf("Quantos pontos turísticos sua cidade tem: \n"); //mensagem ao usuário
scanf("%d", &pontosturisticos2);  //solicita a quantidade de pontos turísticos

printf("Cidade 1 \n"); //mensagem sobre informações da cidade 1
printf("Estado é: %s \n ", estado); //retorna os dados informados na cidade 1
printf("O Codigo é: %s \n", codigo); //retorna os dados informados na cidade 1
printf("A Cidade é: %s \n", cidade); //retorna os dados informados na cidade 1
printf("A População é: %d \n", populacao); //retorna os dados informados na cidade 1
printf("A Area da cidade é: %f \n", area); //retorna os dados informados na cidade 1
printf("O PIB da cidade é %f \n", PIB); //retorna os dados informados na cidade 1
printf("A quantidade de pontos turísticos é: %d \n", pontosturisticos); //retorna os dados informados na cidade 1

printf("Cidade 1 \n"); //mensagem sobre informações da cidade 2
printf("Estado é: %s \n ", estad2); //retorna os dados informados na cidade 2
printf("O Codigo é: %s \n", codigo2); //retorna os dados informados na cidade 2
printf("A Cidade é: %s \n", cidade2); //retorna os dados informados na cidade 2
printf("A População é: %d \n", populacao2); //retorna os dados informados na cidade 2
printf("A Area da cidade é: %f \n", area2); //retorna os dados informados na cidade 2
printf("O PIB da cidade é %f \n", PIB2); //retorna os dados informados na cidade 2
printf("A quantidade de pontos turísticos é: %d \n", pontosturisticos2); //retorna os dados informados na cidade 2








}