/* A program to get the user's name and then provide a salutation to the screen */

#include<stdio.h>

int main(){
	char name[30];
	printf("Hello, please enter your full name:");
//	scanf("%s", name);
//	printf("Greetings %s\n", name);
	gets (name);
	printf("Greetings, ");
	puts (name);
	printf("\n");
	return 0;
}
