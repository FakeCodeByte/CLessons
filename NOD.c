///////////////////////////////////////////////////////////////////////////////////////////////////
/// ___________       __          _________            .___    __________          __           ///
/// \_   _____/____  |  | __ ____ \_   ___ \  ____   __| _/____\______   \___.__._/  |_  ____   ///
///  |    __) \__  \ |  |/ // __ \/    \  \/ /  _ \ / __ |/ __ \|    |  _<   |  |\   __\/ __ \  ///
///  |     \   / __ \|    <\  ___/\     \___(  <_> ) /_/ \  ___/|    |   \\___  | |  | \  ___/  ///
///  \___  /  (____  /__|_ \\___  >\______  /\____/\____ |\___  >______  // ____| |__|  \___  > ///
///      \/        \/     \/    \/        \/            \/    \/       \/ \/                \/  ///
///                                    (c)FakeCodeByte                                          ///
///////////////////////////////////////////////////////////////////////////////////////////////////
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