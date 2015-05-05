#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int Array[MAX];
int k;

void _swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void _shift(){
	int tmp = Array[0];

	for (k = 0; k < MAX; k++)
		Array[k] = Array[k + 1];
	Array[MAX] = tmp;
}

void _p_create(){
	for (k = MAX / 2; k > 1; k--){
		if (MAX >= k * 2)
			if (Array[k] < Array[k * 2])
				_swap(&Array[k], &Array[k * 2]);
		if (MAX >= k * 2 + 1)
			if (Array[k] < Array[k * 2 + 1])
				_swap(&Array[k], &Array[k * 2 + 1]);
	}
}

int main(){

	for (k = 0; k<MAX; k++){
		Array[k] = rand() % 10;
	}
	_p_create();
	_shift();

	printf("%s", Array);
	
	return 0;
}