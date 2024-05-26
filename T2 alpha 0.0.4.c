#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

	char pal[] = "plchdr", chute[] = "plchdr";
	int i, t, check, ii;
	int wsize;
	
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
		else for (ii = 0; ii < wsize; ii++){
  
             if (pal[ii] == chute[i]){
             printyellow(chute, i);
		}
  }
			else {
             printf("%c", chute[i]);
             }
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
	int i, t, wsize, *p;
	
	print("Qual será a palavra a ser chutada?");
	            scanf("%s\n", pal);
	
    wsize =	strlen(pal);
    	p = (*int) malloc(wsize, sizeof(int));
    	
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

  if (check != 1) {
            printf("Você perdeu, tente outra vez!");
            }
		return 0;
}
