#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	char pal[] = "plchdr", chute[] = "plchdr";
	int i;
	
	void printgreen(char chute[], int i) {
		printf("\033[32m%c\033[0m", chute[i]);
	}
	
void wordcheck(char pal[], char chute[], int i) {

for (i=0; i < 5; i++){
		if (pal[i] == chute[i]){
			printgreen(chute, i);
	}
		else if (chute[i] == pal[0] ||chute[i] == pal[1] ||chute[i] == pal [2] ||chute[i] == pal[3] ||chute[i] == pal[4]) {
			printf ("%c", chute[i]);
		}	else printf("%c", chute[i]);
	}
	
}





int main(int argc, char *argv[]) {
	char pal[] = "plch", chute[] = "plch";
	int i;
	scanf("%6s\n", pal);
	
		
	scanf("%6s\n", chute);

	wordcheck(pal, chute, i);
		
		
	
		return 0;
}
