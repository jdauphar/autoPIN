#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define PRIME 23

int randomNum(){
  srand((int)time(NULL));
  return rand();
}

int* createPin(int length){
  int rBase = randomNum();
  int pin[length];
  int *pinPtr;
  pinPtr = &pin[0];
  for(int i = 0; i < length; i++)
    pin[i] = (((rBase % (PRIME+i))) % 10);
  return pinPtr;
}

void printPin(int *pin,int length){
  for(int i = 0; i < length; i++,pin++)
    printf("%i", *pin);
}

int main(int argc, char* argv[]){
  int length;
  if(argc == 1){
    printf("Enter pin length (up to max_int)\n");
    scanf("%i", &length);
  }else{
    length = atoi(argv[1]);
  }
  printf("Your new PIN is: ");
  printPin(createPin(length), length);
  printf("\n");  
  return 0;
}
