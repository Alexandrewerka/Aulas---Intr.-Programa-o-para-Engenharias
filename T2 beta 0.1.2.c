#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
	//Declaração inicial de variáveis
	char pal[] = "plchdr", chute[] = "plchdr";
	int i, t, check, ii;
	int wsize;
	//Funções para impressão fácil de texto em verde e amarelo
	void printgreen(char chute[], int i) {
		printf("\033[32m%c\033[0m", chute[i]);
	}
	
	void printyellow(char chute [], int i){
		printf("\033[33m%c\033[0m", chute[i]);
	}
	//Função "wordcheck", verifica cada caractére da palavra e imprime na cor correta, de acordo com as regras de Termo
void wordcheck(char pal[], char chute[], int i, int wsize, int ii){

	for (i=0; i < wsize; i++){
	
		//Impressão em verde ocorre quando a letra analisada é igual a letra da mesma posição da palavra alvo
		if (pal[i] == chute[i]){
			printgreen(chute, i);
	}
		//Impressão em amarelo ocorre quando a letra analisada é igual a qualquer uma das letras da palavra, o loop analisa cada letra individualmente
		else for (ii = 0; ii < wsize; ii++){
  	
             if (pal[ii] == chute[i]){
             printyellow(chute, i);
             break;
	 }
			//Se não houver correspondência, imprime a letra normalmente
			else {
             printf("%c", chute[i]);
             }
	}
	//Pula uma linha após a última letra da palavra
		if (i == wsize - 1){
			printf("\n");
	}
}

}
	//Função "wincheck", verifica se a palavra chutada corresponde ao alvo
	int wincheck(char chute[], char pal[], int wsize, int i){
		
		//verifica cada caractere individualmente, e quebra o loop caso encontre um caractere incorreto
		for (i = 0; i < wsize; i++){
		
			if (chute[i] != pal[i]){
				break;
			}
			
			//se a última letra estiver correta, o loop sai com check = 1 (ou seja, o jogador venceu)
		else if (i == wsize - 1){
			check = 1;
			printf("\033[32m%s\033[0m\n", pal);
			return check;
		}
	}
	check = 0;
	return check;
}


int main(int argc, char *argv[]) {
	char pal[] = "plchdr", *chute, yesno;
	int i, ii, t, wsize;
		setlocale(LC_ALL,"portuguese");
		
	//placeholder, determina as palavras a serem chutadas
	printf("Insira uma palavra a ser chutada:\n");
	            scanf("%s", pal);
	            
	            printf("Inserir mais palavras? y/n\n");
	            scanf("%c", yesno);
	            if( yesno == 'y'){
	            	printf
				}
	            
	            
	//atribui espaço adequado ao tamanho da palavra-alvo para os chutes
    wsize =	strlen(pal);
    	chute = (char*) calloc(wsize, sizeof(char));
    	
    	printf("A PALAVRA POSSUI %d LETRAS\n", wsize);
    	//Loop de rodada principal
	for(t=0;t<6;t++){
		
		printf("Você tem %d chance(s) restante(s)\n", 6-t);
		
		//Inserção de chutes
	printf("Insira seu chute:\n");	
	               scanf("%s", chute);
	               
	    //Confirma que o chute tem o tamanho adequado            
		while(strlen(chute) != wsize){
			printf("Chute de tamanho incorreto, repita o chute:\n");
			scanf("%s", chute);
		} 
		
		//Chama as funções de teste para o chute atual
	wordcheck(pal, chute, wsize, i, ii);
	
	wincheck(pal, chute, wsize, i);
	
		//No caso de vitória, encerra o código
    	if (check == 1){
	
    		printf("Você venceu!\n");
	
    		break;
		}
		
}
	//No caso de perda, encerra o código de maneira menos feliz
  if (check != 1) {
            printf("Você perdeu, tente outra vez!\n");
            }
            //Libera memória
            free (chute);
		return 0;
}
