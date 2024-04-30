#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	//Declaração inicial de variáveis
	char mat[3][3];
	char jog, ador;
 	 int i, x, y, check, test;
 	 
 	 //Função simples para escolha de caractéres, só está em uma função para facilitar a visualização mesmo, poderia estar dentro do próprio código
 	 void selecao(jog, ador){
 	 
	  	printf("Jogadores 1 e 2, escolham seus caractéres:\n");
		scanf("%c %c", &jog, &ador);
	

	  }

	//Função "Imprimir", imprime a matriz quando chamada
	void imprimir(char mat[3][3]){

		printf(" %c %c %c\n %c %c %c\n %c %c %c\n", mat[0][0], mat[1][0], mat[2][0], mat[0][1], mat[1][1], mat[2][1], mat[0][2], mat[1][2], mat[2][2]);

	}

	//Função "testwin", checagem de condições de vitória, chamada no final de cada rodada, testa pela vitória de cada jogador, imprime a mensagem de vitória do vencedor (quando exista) e emite uma bandeira que quebra o loop
	int testwin(char mat[3][3]) {
		
		if (mat[0][0] == jog && mat[1][0] == jog && mat[2][0] == jog || mat[0][1] == jog && mat[1][1] == jog && mat[2][1] == jog || mat[0][2] == jog && mat[1][2] == jog && mat[2][2] == jog || mat[0][0] == jog && mat[0][1] == jog && mat[0][2] == jog || mat[1][0] == jog && mat[1][1] == jog && mat[1][2] == jog || mat[2][0] == jog && mat[2][1] == jog && mat[2][2] == jog || mat[0][0] == jog && mat[1][1] == jog && mat [2][2] == jog || mat[0][2] == jog && mat[1][1] == jog && mat[2][0] == jog ) {
		
			printf("Jogador 1 venceu!\n");
			check = 1;
		}
		
	 	if (mat[0][0] == ador && mat[1][0] == ador && mat[2][0] == ador || mat[0][1] == ador && mat[1][1] == ador && mat[2][1] == ador || mat[0][2] == ador && mat[1][2] == ador && mat[2][2] == ador || mat[0][0] == ador && mat[0][1] == ador && mat[0][2] == ador || mat[1][0] == ador && mat[1][1] == ador && mat[1][2] == ador || mat[2][0] == ador && mat[2][1] == ador && mat[2][2] == ador || mat[0][0] == ador && mat[1][1] == ador && mat [2][2] == ador || mat[0][2] == ador && mat[1][1] == ador && mat[2][0] == ador ) {
		
			printf("Jogador 2 venceu!\n");		
			check = 1;
		}
		
		return (check);
	}
	
	//Função "validade", determina se o espaço escolhido está vazio e é parte da matriz, inicialmente o plano era utilizar uma variável booleana, mas C não suporta bool 
	int validade(char mat [3][3], int x, int y){
		
		if (mat [y-1][x-1] != '-') {
			
			printf ("As coordenadas são inválidas, insira uma posição correta.\n");
			test = 0;
		}
		else 	test = 1;
		
		return (test);
	}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
  
  //Inicialização da matriz
mat[0][0] = mat[1][0] = mat[2][0] = mat[0][1] = mat[1][1] = mat[2][1] = mat[0][2] = mat[1][2] = mat[2][2] = '-';

	//Seleção de caractéres, imprime um aviso quando os caractéres escolhidos forem iguais e repete
	do {
		
		selecao(jog, ador);
	
		if (jog == ador){
			printf("Os dois caractéres são iguais, por favor selecione caractéres distintos\n");
	}
}
	while (jog == ador);
	
	//Loop de rodadas, repete até uma condição de vitória ser atingida ou 9 turnos passarem sem vencedores, alternando entre os jogadores		
	for (i = 1;i<10;i++) {
	
		//O jogador ativo é determinado pela paridade do turno, Jogador 1 joga em turnos ímpares, Jogador 2 em turnos pares
		if (i%2 == 1 ) {
		
			printf("Jogador 1, digite as coordenadas do eixo x e y:\n");
			
			do {
			//Recolhe as coordenadas da posição escolhida e testa a validade da posição, repetindo a sequência se a posição for inválida
			scanf("%d", &x);
			scanf("%d", &y);
			
			validade(mat, x, y);
		
		}	
			while (test == 0);
			
			//Adiciona o símbolo na posição escolhida da matriz e imprime-a
			mat[y-1][x-1] = jog;
			imprimir(mat);
		}
		else {
			
			//Turno do Jogador 2, idêntico ao turno do Jogador 1
			printf("Jogador 2, digite as coordenadas do eixo x e y:\n");
			
			do{
			
				scanf("%d", &x);
				scanf("%d", &y);
			
				validade(mat, x, y);
		}
			while (test == 0);		
			
				mat[y-1][x-1] = ador;
				imprimir(mat);
		}
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
