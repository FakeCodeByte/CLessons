#include <stdio.h>
#include <string.h>

int NOD_R(int a,int b){
if (b==0) 
	    return a;

return 
       NOD_R(b, a % b);
}



int main(){
int a, b;
	   printf("Введите первое число:");
	   scanf("%d", &a);
	   printf("Введите второе число:");
	   scanf("%d", &b);
	   printf("%d",NOD_R(a,b));
}