/* A program that prints out characters entered until the escape sequence is entered. */

#include<stdio.h>

int main(){

  char character;
  character = getchar();

  while(character != '\n'){

    character = getchar();
    putchar(character);
    
  }
  return 0;
}
