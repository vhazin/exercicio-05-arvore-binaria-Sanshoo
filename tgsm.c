#include <stdio.h>
#include <stdlib.h>

int* fazsaida (int n, char preordem[], char inordem[]){
  
}

int main(void) {
  int c;
  scanf("%i", &c); 
  char saida[c][52];
  int n;
  char preordem[52];
  char inordem[52];
  for (int a = 0; a < c; a++){
    scanf("%i %s %s", &n, preordem, inordem);
    saida[a] =  fazsaida();
  }
}