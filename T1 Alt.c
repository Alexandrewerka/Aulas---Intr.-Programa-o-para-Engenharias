#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	//Declaração inicial de variáveis
	char mat[3][3], simbolo;
 	 int i, x, y, check, test;

	//Função "Imprimir", imprime a matriz quando chamada
	void imprimir(char mat[3][3]){

		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);

	}

	//Função "testwin", checagem de condições de vitória, chamada no final de cada rodada, testa pela vitória de cada jogador, imprime a mensagem de vitória do vencedor (quando exista) e emite uma bandeira que quebra o loop
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
	
	//Função "validade", determina se o espaço escolhido está vazio e é parte da matriz, inicialmente o plano era utilizar uma variável booleana, mas C não suporta bool 
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
  
  //Inicialização da matriz
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';

	//Loop de rodadas, repete até uma condição de vitória ser atingida ou 9 turnos passarem sem vencedores, alternando entre os jogadores		
	for (i = 1;i<10;i++) {
		
			printf("Jogador, digite as coordenadas do eixo x e y e o símbolo:\n");
			
			do {
			//Recolhe as coordenadas da posição escolhida e testa a validade da posição, repetindo a sequência se a posição for inválida
			scanf("%d %d %c", &x, &y, &simbolo);
	
				
			validade(mat, x, y);
		
		}	
			while (test == 0);
			
			//Adiciona o símbolo na posição escolhida da matriz e imprime-a
			mat[y-1][x-1] = simbolo;
			imprimir(mat);
		//Teste de vitória, no caso de um vencedor ser declarado, imprime a respectiva mensagem de vitória e quebra o loop
		testwin(mat);
		
			if (check == 1){
			
				break;
			}
			
	}
	//Se a bandeira de vitória não for checada quando o loop for quebrado, imprime uma declaração de empate
 if (check != 1) {
 	
 	printf("A partida empatou!\n");
}
	return 0;
}
