#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  char mat[3][3];
  int i, x, y;
  
  i = 1;
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';


	void imprimir(char mat[3][3]){
	
		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);
}
	
	if (i%2 == 1) {
	printf("Jogador 1, digite as coordenadas do eixo x e y:\n");
	scanf("%d", &x);
	scanf("%d", &y);
	mat[y-1][x-1] = 'O';
	imprimir(mat);
}








	return 0;
}
