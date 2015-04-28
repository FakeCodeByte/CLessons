#include <stdio.h>
#include <string.h>



void NOD(int a, int b){
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	printf("%d",a);
}


int main(){
	   int a, b;
	   printf("Введите первое число:");
	   scanf("%d", &a);
	   printf("Введите второе число:");
	   scanf("%d", &b);
	   NOD(a,b);
}