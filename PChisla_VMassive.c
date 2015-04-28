#include <stdio.h>

int Count=0;

int CountPNumber(int *Numbers){
	
	int i; 
	
for(i=0; i<5; i++){
	
	if ((Numbers[i]>1) && (Numbers[i]%Numbers[i]))
		
		Count++;
}
return Count;	
}

int main()
{
	int Number[5];
	
	int i;
	
	for(i=0; i<5; i++)
		
		scanf("%d",Number[i]);
	
	CountPNumber(*Number);
	
	printf("%d",Count);
	
	return 0;
    
}