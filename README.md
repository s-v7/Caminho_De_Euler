# Caminho de Euler

## Overview

This C script checks for the existence of an Eulerian path in a graph represented by an adjacency matrix.

## Author

- Silas Vasconcelos
- GitHub: [S-v7](https://github.com/S-v7)

## Language

C

## Script Description

The script defines a function `funcao_Impar` to check whether a given degree is odd. The main function `Caminho_De_Euler` checks if there exists an Eulerian path in the graph based on the Eulerian path conditions. It then prompts the user to input the size of the graph and uses a predefined adjacency matrix `M` to check for the existence of the Eulerian path.

## Code

```c
#include<stdio.h>

// Function to check if a degree is odd
int funcao_Impar(int grau){
  if(grau % 2 == 1){
    return 1;
  }
  return 0;
}

// Function to check for the existence of an Eulerian path
int Caminho_De_Euler(int Matriz[5][5], int n){
    int total = 0; // Number of nodes found so far
    int grau = 0;  // Node degree
    int i = 1, j = 1; // Matrix indices

    while(total <= 2 && i < n){
      grau = 0;
      for(j = 1; j < n; j++){
        grau += Matriz[i][j]; // Find the degree of node i(*)
      }
      if(funcao_Impar(grau)){
        total += 1; // Found another odd node
      }
      i += 1;
    }
    if(total > 2){
      printf("Não existe um Caminho de Euler\nTotal: %d ", total);
    } else {
      printf("Existe um Caminho de Euler\nTotal: %d ", total);
    }
    return 0;
}

int main(){
    int t = 0;
    int M[5][5] = {{0,2,1,0,0}, // Adjacency Matrix
                   {2,0,1,0,0},
                   {1,1,0,1,1},
                   {0,0,2,0,2},
                   {0,0,1,2,0}};

    printf("Digite o valor de n: ");
    scanf("%d", &t);

    Caminho_De_Euler(M, t);

    return 0;
}
```
## Usage
- 1. Compile the script using a C compiler.
- 2. Run the executable.
- 3. Input the size of the graph when prompted.
- 4. View the output indicating the existence of an Eulerian path

## Notes
- This script checks the existence of an Eulerian path based on the degree of nodes in a graph represented by an adjacency matrix.
- Users should input the size of the graph n when prompted



