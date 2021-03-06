///////////////////////////////////////////////////////////////////////////////////////////////////
/// ___________       __          _________            .___    __________          __           ///
/// \_   _____/____  |  | __ ____ \_   ___ \  ____   __| _/____\______   \___.__._/  |_  ____   ///
///  |    __) \__  \ |  |/ // __ \/    \  \/ /  _ \ / __ |/ __ \|    |  _<   |  |\   __\/ __ \  ///
///  |     \   / __ \|    <\  ___/\     \___(  <_> ) /_/ \  ___/|    |   \\___  | |  | \  ___/  ///
///  \___  /  (____  /__|_ \\___  >\______  /\____/\____ |\___  >______  // ____| |__|  \___  > ///
///      \/        \/     \/    \/        \/            \/    \/       \/ \/                \/  ///
///                                    (c)FakeCodeByte                                          ///
///////////////////////////////////////////////////////////////////////////////////////////////////
///                         В файле Text.txt сожержится 1234567890                              ///
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Left,Right,Middle; 

void Bin_Search(int key){
	
	int k;
	int Array[10];
	char string[10];
	FILE *file = fopen("Text.txt","r");
	
	if(file == NULL) {
		
		printf("Невозможно открыть файл!");
        return;		
	}
	
			fscanf(file,"%s",&string);
	fclose(file);
	
   for(k=0; k<10; k++)	
	Array[k] = (int)(string[k]-48);
	
	
	Left   = 0;
	Right  = 9;
	Middle = (Left + Right) / 2;
	
		if (Array[Middle] < key){
			Left = Middle;
		}
		else{
			Right = Middle;
		}

	
	for(k=Left; k<=Right; k++)
		if(Array[k] == key){
			printf("\n Число [%d] найден, позиция [%d]", key, k+1);
		return;
		}
		printf("\nЭлемент не найден!");
	return;
	
}

int main(){
	Bin_Search(5);
	return 0;
}