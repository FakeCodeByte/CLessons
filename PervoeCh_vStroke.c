#include <stdio.h>
#include <string.h>


char FirstNumber_in_String(char* String){

int i;

for(i=0; i<strlen(String)-1; i++){
	
	if((int)(String[i])>47 && (int)(String[i])<58 )
	
return String[i];
}
	
}


int main(){
	
	char string[256]="";
	printf("Введите строку:");
	
	int index = 0;
    int letter;

    while ((letter = getchar ( )) != '\n') 
	string [index++] = letter;

    string[index] = '0';
	
	printf("Первое число в строке: %c",FirstNumber_in_String(string));;
	
	return 0;
}