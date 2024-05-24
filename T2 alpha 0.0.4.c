#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	char pal[] = "plchdr", chute[] = "plchdr";
	int i, t, check;
	int wsize = 5;
	
	void printgreen(char chute[], int i) {
		printf("\033[32m%c\033[0m", chute[i]);
	}
	
	void printyellow(char chute [], int i){
		printf("\033[33m%c\033[0m", chute[i]);
	}
	
void wordcheck(char pal[], char chute[], int i, int wsize) {

for (i=0; i < wsize; i++){
		if (pal[i] == chute[i]){
			printgreen(chute, i);
	}
		else if (chute[i] == pal[0] ||chute[i] == pal[1] ||chute[i] == pal [2] ||chute[i] == pal[3] ||chute[i] == pal[4]) {
			printyellow(chute, i);
		}
			else printf("%c", chute[i]);
	}
	
	if (i = wsize - 1){
		printf("\n");
	}
}
	int wincheck(char chute[], char pal[], int wsize, int i){
	
		for (i = 0; i < wsize; i++){
		
			if (chute[i] != pal[i]){
				break;
			}
		else if (i == wsize - 1){
			check = 1;
			return check;
		}
	}
	check = 0;
	return check;
}


int main(int argc, char *argv[]) {
	char pal[] = "plch", chute[] = "plch";
	int i, t, wsize;
	scanf("%s\n", pal);
	
	
	
	for(t=0;t<6;t++){
		
	printf("Insira seu chute:\n");	
	scanf("%s\n", chute);

	wordcheck(pal, chute, wsize, i);
	wincheck(pal, chute, wsize, i);
		if (check = 1){
			printf("Você venceu!");
			break;
		}
	
}
		return 0;
}
