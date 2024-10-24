#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int sudoku[9][9]{};
char mapa[9][9]{};

int valid_number(int j, int i, int number) {
  // retorna 1 si es una posicion valida para ese numero

  int valid = 1;

  // Verificamos en la fila
  for (int ii = 0; ii < 9; ++ii) {
    if (sudoku[j][ii] == number) {
      valid = 0;
      // printf("Invalido: %d ya se encuentra  en la misma fila\n", number);
      return valid;
    }
  }

  // Verificamos en la columna
  for (int jj = 0; jj < 9; ++jj) {
    if (sudoku[jj][i] == number) {
      valid = 0;
      // printf("Invalido: %d ya se encuentra  en la misma columna\n", number);
      return valid;
    }
  }

  // Verificamos en el cuadro 3x3 que contiene las coordenadas
  for (int jj = (j / 3) * 3; jj < (j / 3) * 3 + 3; ++jj) {
    for (int ii = (i / 3) * 3; ii < (i / 3) * 3 + 3; ++ii) {
      if (sudoku[jj][ii] == number) {
        valid = 0;
        // printf("Invalido: %d ya se encuentra  en el cuadro 3x3\n", number);
        return valid;
      }
    }
  }

  return valid;
}

int es_solucion() {
  int valid = 1;
  for (int jj = 0; jj < 9; ++jj) {
    for (int ii = 0; ii < 9; ++ii) {
      if (sudoku[jj][ii] != 0 && valid_number(jj, ii, sudoku[jj][ii]) == 0) {
        valid = 0;
        return valid;
      }
    }
  }
  return valid;
}

int sol = 0;
int solve(int j, int i, int k) {
  /*
  for(int k=1;k<10;k++){
     if( sudoku[j][i] == 0 && valid_number(j, i, k) == 1 ){
        int tmp = sudoku[j][i];
        sudoku[j][i] = k;
        if( es_solucion()==1 ){
           //////////////
           printf("Sudoku!\n");
           for (int jj = 0; jj < 9; ++jj){
              for (int ii = 0; ii < 9; ++ii){
                 printf("%d", sudoku[jj][ii]);
                 if( ii<8 ){
                    printf(" ");
                 }
              }
              printf("\n");
           }
           //////////////
        }
        if(i<9 && j<9){
           solve(j, i+1);
        }else{
           if(i>=9 && j<9){
              solve(j+1, 0);
           }
        }
        sudoku[j][i] = tmp;
     }
     if(mapa[j][i]=='#'){
        if(i<9 && j<9){
           solve(j, i+1);
        }else{
           if(i>=9 && j<9){
              solve(j+1, 0);
           }
        }
     }
  }
  */
  /*
     int tmp{};
     for(int k=1;k<10;k++){

        if( mapa[j][i] != '#' && valid_number(j, i, k) == 1 ){
           tmp = sudoku[j][i];
           sudoku[j][i] = k;
           if( es_solucion()==1 ){
              //////////////
              printf("Sudoku!\n");
              for (int jj = 0; jj < 9; ++jj){
                 for (int ii = 0; ii < 9; ++ii){
                    printf("%d", sudoku[jj][ii]);
                    if( ii<8 ){
                       printf(" ");
                    }
                 }
                 printf("\n");
              }
              //////////////
           }


              for (int jj = 0; jj < 9; ++jj){
                 for (int ii = 0; ii < 9; ++ii){
                    printf("%d", sudoku[jj][ii]);
                    if( ii<8 ){
                       printf(" ");
                    }
                 }
                 printf("\n");
              }
              //////////////

           if(i<9 && j<9){
              //printf("%d ", sudoku[j][i]);
              solve(j, i+1);
           }else{
              if(i>=9 && j<9){
              //   printf("\n");
                 solve(j+1, 0);
              }
           }
           sudoku[j][i] = tmp;

        }

        if(i<9 && j<9){
           //printf("%d ", sudoku[j][i]);
           solve(j, i+1);
        }else{
           if(i>=9 && j<9){
           //   printf("\n");
              solve(j+1, 0);
           }
        }

     }
  */

  if (sol != 1) {
    int tmp{};
    for (int jj = j; jj < 9; ++jj) {
      for (int ii = i; ii < 9; ++ii) {

        if (mapa[j][i] != '#' && valid_number(j, i, k) == 1) {
          tmp = sudoku[j][i];
          sudoku[j][i] = k;

          if (es_solucion() == 1) {
            //////////////
            sol = 1;
            printf("Sudoku!\n");
            for (int jj = 0; jj < 9; ++jj) {
              for (int ii = 0; ii < 9; ++ii) {
                printf("%d", sudoku[jj][ii]);
                if (ii < 8) {
                  printf(" ");
                }
              }
              printf("\n");
            }
            //////////////
          }
          solve(jj, ii, k + 1);
          sudoku[j][i] = tmp;
        }
      }
    }
  }
  return 0;
}

int main() {
  FILE *fp;

  int num{};

  fp = fopen("sudoku.txt", "r");
  if (fp == NULL) {
    printf("No such file or directory");
    return 1;
  } else {

    // load the sudoku problem
    for (int jj = 0; jj < 9; ++jj) {
      for (int ii = 0; ii < 9; ++ii) {
        fscanf(fp, "%d", &sudoku[jj][ii]);
        if (sudoku[jj][ii] == 0) {
          mapa[jj][ii] = '.';
        } else {
          mapa[jj][ii] = '#';
        }
      }
    }

    printf("Sudoku to solve:\n");
    for (int jj = 0; jj < 9; ++jj) {
      for (int ii = 0; ii < 9; ++ii) {
        printf("%d", sudoku[jj][ii]);
        if (ii < 8) {
          printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n");
    printf("Current map:\n");
    for (int jj = 0; jj < 9; ++jj) {
      for (int ii = 0; ii < 9; ++ii) {
        printf("%c", mapa[jj][ii]);
        if (ii < 8) {
          printf(" ");
        }
      }
      printf("\n");
    }

    solve(0, 0, 1);
  }
  return 0;
}
