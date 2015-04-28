#include <stdio.h>
//#include <iostream>

//using namespace std;

int fib_n(int n){

	if (n == 0){ return 0; }
	if ((n == 1) || (n == -1)){ return 1; }

	if (n > 0){
		return fib_n(n - 1) + fib_n(n - 2);
	}

}

int main(){
int n = 0;
    //setlocale(LC_ALL,"RUSSIAN");
	printf("Введите число n: ");
	scanf("%d", &n);
	printf("%d",fib_n(n));
}