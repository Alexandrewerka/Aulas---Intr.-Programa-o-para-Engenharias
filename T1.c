#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  char mat[3][3];
  int i, x, y, check;
  
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';


	void imprimir(char mat[3][3]){
	
		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);
}


	int testwin(char mat[3][3]) {
		
		if ((mat[0][0] && mat[1][0] && mat[2][0]) == 'O'|| (mat[0][1] && mat[1][1] && mat[2][1]) == 'O' || (mat[0][2] && mat[1][2] && mat[2][2]) == 'O'|| (mat[0][0] && mat[0][1] && mat[0][2]) == 'O' || (mat[1][0] && mat[1][1] && mat[1][2]) == 'O' || (mat[2][0] && mat[2][1] && mat[2][2]) == 'O' || (mat[0][0] && mat[1][1] && mat [2][2]) == 'O' || (mat[0][2] && mat[1][1] && mat[2][0]) == 'O') {
		
		check = 1;
		
		
		}
			else if ((mat[0][0] && mat[1][0] && mat[2][0]) == 'X'|| (mat[0][1] && mat[1][1] && mat[2][1]) == 'X' || (mat[0][2] && mat[1][2] && mat[2][2]) == 'X' || (mat[0][0] && mat[0][1] && mat[0][2]) == 'X' || (mat[1][0] && mat[1][1] && mat[1][2]) == 'X' || (mat[2][0] && mat[2][1] && mat[2][2]) == 'X' || (mat[0][0] && mat[1][1] && mat [2][2]) == 'X' || (mat[0][2] && mat[1][1] && mat[2][0]) == 'X') {

			check = 2;
				}
		return (check);
		}
		void validade(int x, y, mat [3[3]]){
			
			
		}
		
	for (i = 1;i<10;i++) {
	
		testwin(mat);
			if (check == 1){
			
				printf("Jogador 1 venceu!\n");
				break;
				}
				else if(check == 2){
					
					printf("Jogador 2 venceu!\n");
				break;
				}
		if (i%2 == 1) {
		
			printf("Jogador 1, digite as coordenadas do eixo x e y:\n");
			scanf("%d", &x);
			scanf("%d", &y);
	
			mat[y-1][x-1] = 'O';
			imprimir(mat);
	}
		else {
		
			printf("Jogador 2, digite as coordenadas do eixo x e y:\n");
			scanf("%d", &x);
			scanf("%d", &y);
			
			mat[y-1][x-1] = 'X';
			imprimir(mat);
		}
}
 if (check != 1 || check != 2);
 	
 	printf("A partida empatou!\n");

	return 0;
}
