/*
You are required to indicate all the ways in which eight queens can be placed
on a chessboard without any of them killing another.
*/

#include <stdio.h>
#include <stdlib.h>
using namespace std;
/////////////////////////////////////
// Vriables Globales
int tablero[8][8];
bool respuesta = false;


/////////////////////////////////////
void inicializa(){
  for(int j=0;j<8;j++){
    for(int i=0;i<8;i++){
    tablero[i][j]=0; 
    }
  }
}
/////////////////////////////////////
void conquer_pos(int X, int Y){
int tempX=X;
int tempY=Y;
  for(int i=0;i<8;i++){
  tablero[X][i]=1;
  tablero[i][Y]=1;
  }
tempX=X;
tempY=Y;
  while(tempX>=0 && tempY>=0){
  tablero[tempX][tempY]=1;
  tempX--;
  tempY--;
  }
tempX=X;
tempY=Y;
  while(tempX<8 && tempY<8){
  tablero[tempX][tempY]=1;
  tempX++;
  tempY++;
  }
tempX=X;
tempY=Y;
  while(tempX>=0 && tempY<8){
  tablero[tempX][tempY]=1;
  tempX--;
  tempY++;
  }
tempX=X;
tempY=Y;
  while(tempX<8 && tempY>=0){
  tablero[tempX][tempY]=1;
  tempX++;
  tempY--;
  }
tablero[X][Y]=2;
}
/////////////////////////////////////
void unconquer_pos(int X, int Y){
int tempX=X;
int tempY=Y;
  for(int i=0;i<8;i++){
  tablero[X][i]=0;
  tablero[i][Y]=0;
  }
tempX=X;
tempY=Y;
  while(tempX>=0 && tempY>=0){
  tablero[tempX][tempY]=0;
  tempX--;
  tempY--;
  }
tempX=X;
tempY=Y;
  while(tempX<8 && tempY<8){
  tablero[tempX][tempY]=0;
  tempX++;
  tempY++;
  }
tempX=X;
tempY=Y;
  while(tempX>=0 && tempY<8){
  tablero[tempX][tempY]=0;
  tempX--;
  tempY++;
  }
tempX=X;
tempY=Y;
  while(tempX<8 && tempY>=0){
  tablero[tempX][tempY]=0;
  tempX++;
  tempY--;
  }
tablero[X][Y]=0;
}
////////////////////////////////////
void imprime(){
system("sleep 0.3");
system("clear");
  printf(" --- --- --- --- --- --- --- --- \n");
  for(int j=0;j<8;j++){
    for(int i=0;i<8;i++){
      if(tablero[i][j]==0){
      printf("|   ");
      }else{
         if(tablero[i][j]==1){
         printf("|   "); 
         }else{
         printf("| Q "); 
        }
      }
    }
  printf("|\n --- --- --- --- --- --- --- --- ");
  printf("\n");
  }
}
/////////////////////////////////////
bool reinas(){
int I=1;
  while(I <= 8){
  
  }
}

/////////////////////////////////

int main(){
inicializa();
imprime();
//conquer_pos(4,4);
//imprime();
//unconquer_pos(4,4);
//imprime();
reinas();
return 0;
}

