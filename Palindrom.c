#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Palindrom(char* input){

	int r = strlen(input)-1;
    int i;
	
	for(i=0; i<r/2; i++){
		r--;
		if(input[i]!=input[r])
			return false;
	}
	return true;
}


int main(){
	char string[256]="";
	printf("Введите строку:");
	
	int index = 0;
    int letter;

    while ((letter = getchar ( )) != '\n') 
	string [index++] = letter;

    string[index] = '0';
	
	if (Palindrom(string) == true) 
		printf("TRUE");
	else 
		printf("false");
	
	return 0;
}