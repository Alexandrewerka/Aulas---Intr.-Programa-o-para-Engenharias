#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	//Declara��o inicial de vari�veis
	char mat[3][3], simbolo;
 	 int i, x, y, check, test;

	//Fun��o "Imprimir", imprime a matriz quando chamada
	void imprimir(char mat[3][3]){

		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);

	}

	//Fun��o "testwin", checagem de condi��es de vit�ria, chamada no final de cada rodada, testa pela vit�ria de cada jogador, imprime a mensagem de vit�ria do vencedor (quando exista) e emite uma bandeira que quebra o loop
	int testwin(char mat[3][3]) {
		
		if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O' || mat[0][1] =='O' && mat[1][1] =='O' && mat[2][1] == 'O' || mat[0][2] =='O' && mat[1][2] == 'O' && mat[2][2] == 'O' || mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O' || mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O' || mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O' || mat[0][0] == 'O' && mat[1][1] == 'O' && mat [2][2] == 'O' || mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O' ) {
		
			printf("Jogador de O venceu!\n");
			check = 1;
		}
		
	 	if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X' || mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X' || mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X' || mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X' || mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X' || mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X' || mat[0][0] == 'X' && mat[1][1] == 'X' && mat [2][2] == 'X' || mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X' ) {
		
			printf("Jogador de X venceu!\n");		
			check = 1;
		}
		
		return (check);
	}
	
	//Fun��o "validade", determina se o espa�o escolhido est� vazio e � parte da matriz, inicialmente o plano era utilizar uma vari�vel booleana, mas C n�o suporta bool 
	int validade(char mat [3][3], int x, int y){
		
		if (mat [y-1][x-1] != '-') {
			
			printf ("As coordenadas s�o inv�lidas, insira uma posi��o correta\n");
			test = 0;
		}
		else 	test = 1;
		
		return (test);
	}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
  
  //Inicializa��o da matriz
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';

	//Loop de rodadas, repete at� uma condi��o de vit�ria ser atingida ou 9 turnos passarem sem vencedores, alternando entre os jogadores		
	for (i = 1;i<10;i++) {
		
			printf("Jogador, digite as coordenadas do eixo x e y e o s�mbolo:\n");
			
			do {
			//Recolhe as coordenadas da posi��o escolhida e testa a validade da posi��o, repetindo a sequ�ncia se a posi��o for inv�lida
			scanf("%d %d %c", &x, &y, &simbolo);
	
				
			validade(mat, x, y);
		
		}	
			while (test == 0);
			
			//Adiciona o s�mbolo na posi��o escolhida da matriz e imprime-a
			mat[y-1][x-1] = simbolo;
			imprimir(mat);
		//Teste de vit�ria, no caso de um vencedor ser declarado, imprime a respectiva mensagem de vit�ria e quebra o loop
		testwin(mat);
		
			if (check == 1){
			
				break;
			}
			
	}
	//Se a bandeira de vit�ria n�o for checada quando o loop for quebrado, imprime uma declara��o de empate
 if (check != 1) {
 	
 	printf("A partida empatou!\n");
}
	return 0;
}
