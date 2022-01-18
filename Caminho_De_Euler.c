#include<stdio.h>

/**************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script: Caminho de Euler
*     Language: C
*
*
***************************************************************************************/
//Função Ímpar;
int funcao_Impar(int grau){
  if(grau % 2 == 1){
    return 1;
  }
return 0;
}/* Fim Função Ímpar */
/************************/
/* Ínicio Função Caminho de Euler; */
int Caminho_De_Euler(int Matriz[5][5],int n){

    int total = 0; //Número de Nós encontrados até agora;
    int grau = 0;  // O grau do Nó;
    int i = 1, j = 1; // Índices da Matriz;

    while(total <= 2 && i < n){
      grau = 0;
      for(j = 1; j < n; j++){
        grau += Matriz[i][j]; //Encontra o grau do Nó i(*)
      }
      if(funcao_Impar(grau)){
        total += 1; //Encontrou um outro nó Ímpar; 
      }
      i += 1;
    }
    if(total > 2){
      printf("Não existe um Caminho de Euler\nTotal: %d ", total);
    } else {
      printf("Existe um Caminho de Euler\nTotal: %d ", total);
    }
return 0;
}/*Fim Função Caminho de Euler*/

int main(){

int t = 0;
int M[5][5] = {{0,2,1,0,0},//Matriz de Adjacência
               {2,0,1,0,0},
               {1,1,0,1,1},
               {0,0,2,0,2},
               {0,0,1,2,0}};

printf("Digite o valor de n: ");
  scanf("%d", &t);

Caminho_De_Euler(M,t);

return 0;
}
