#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int randomNum(){
  srand((int)time(NULL));
  return rand();
}

int main(){
  printf("Enter pin length (up to max_int)\n");
  int length;
  scanf("%i", &length);

  char pin[length];
  int rBase = randomNum();
  
  for(int i = 0; i < length; i++){
    pin[i] = ((rBase %(i+22)) % 10);
  }
  
  printf("Your new PIN is: ");

  for(int i = 0; i < length; i++){
    printf("%i", pin[i]);
  }
  printf("\n");  
}
