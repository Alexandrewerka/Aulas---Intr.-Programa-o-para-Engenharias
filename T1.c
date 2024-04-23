#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	char mat[3][3];
 	 int i, x, y, check, test;

	void imprimir(char mat[3][3]){

		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);

	}


	int testwin(char mat[3][3]) {
		
		if (mat[0][0] && mat[1][0] && mat[2][0] == 'O'|| mat[0][1] && mat[1][1] && mat[2][1] == 'O' || mat[0][2] && mat[1][2] && mat[2][2] == 'O'|| mat[0][0] && mat[0][1] && mat[0][2] == 'O' || mat[1][0] && mat[1][1] && mat[1][2] == 'O' || mat[2][0] && mat[2][1] && mat[2][2] == 'O' || mat[0][0] && mat[1][1] && mat [2][2] == 'O' || mat[0][2] && mat[1][1] && mat[2][0] == 'O') {
		
			printf("Jogador 1 venceu!\n");
			check = 1;
		}
		
		else if (mat[0][0] && mat[1][0] && mat[2][0] == 'X'|| mat[0][1] && mat[1][1] && mat[2][1] == 'X' || mat[0][2] && mat[1][2] && mat[2][2] == 'X' || mat[0][0] && mat[0][1] && mat[0][2] == 'X' || mat[1][0] && mat[1][1] && mat[1][2] == 'X' || mat[2][0] && mat[2][1] && mat[2][2] == 'X' || mat[0][0] && mat[1][1] && mat [2][2] == 'X' || mat[0][2] && mat[1][1] && mat[2][0] == 'X') {
		
			printf("Jogador 2 venceu!\n");		
			check = 2;
		}
		
		return (check);
	}
	
	int validade(char mat [3][3], int x, int y){
		
		if (mat [y-1][x-1] != '-') {
			
			printf ("As coordenadas são inválidas, insira uma posição correta\n");
			test = 0;
		}
		else 	test = 1;
		
		return (test);
	}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
  
  
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';
	
		
	for (i = 1;i<10;i++) {
	
		testwin(mat);
		
			if (check == 1){
			
				break;
			}
			else if(check == 2){
					
				break;
			}
		if (i%2 == 1 ) {
		
			printf("Jogador 1, digite as coordenadas do eixo x e y:\n");
			
			do {
			
			scanf("%d", &x);
			scanf("%d", &y);
			
			validade(mat, x, y);
		
		}	
			while (test == 0);
			
			mat[y-1][x-1] = 'O';
			imprimir(mat);
		}
		else {
		
			printf("Jogador 2, digite as coordenadas do eixo x e y:\n");
			
			do{
			
				scanf("%d", &x);
				scanf("%d", &y);
			
				validade(mat, x, y);
		}
			while (test == 0);		
				mat[y-1][x-1] = 'X';
				imprimir(mat);
		}
	}
 if (check != 1 && check != 2) {
 	
 	printf("A partida empatou!\n");
}
	return 0;
}
