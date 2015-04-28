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
#include <stdlib.h>
#define ASize 4

void Um_Matrix(){
	int i, k, l;
	int aMatrix[ASize][ASize];
	int bMatrix[ASize][ASize];
	int rMatrix[ASize][ASize];

	for (i = 0; i<ASize; i++){
		for (k = 0; k<ASize; k++){
			aMatrix[i][k] = rand() % 10;
			bMatrix[i][k] = rand() % 10;
		}
	}

	printf("\nИсходные данные матрицы А:\n");

	for (i = 0; i<ASize; i++){
		for (k = 0; k<ASize; k++){
			printf(" %d ", aMatrix[i][k]);
		}
		printf("\n");
	}

	printf("\nИсходные данные матрицы B:\n");

	for (i = 0; i<ASize; i++){
		for (k = 0; k<ASize; k++){
			printf(" %d ", bMatrix[i][k]);
		}
		printf("\n");
	}

	printf("\nПолученная матрица:\n");

	for (i = 0; i<ASize; i++) {
		for (l = 0; l<ASize; l++) {
			rMatrix[i][l] = 0;
			for (k = 0; k<ASize; k++) {
				rMatrix[i][l] += aMatrix[i][k] * bMatrix[k][l];
			}
		}
	}

	for (i = 0; i<ASize; i++){
		for (k = 0; k<ASize; k++){
			printf(" %d ", rMatrix[i][k]);
		}
		printf("\n");
	}
}



int main(){

	Um_Matrix();
	return 0;

}