#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int a, b, c, temp;
	
	printf("declare os valores dos 3 n�meros\n");
	scanf("%d %d %d", &a, &b, &c);
	
	while (a>c) {
		(temp = a);
		(a = c);
		(c = temp) 
	;}
	while (a>b) {
		(temp = a);
		(a = b);
		(b = temp);	
	}
	while (b>c) {
		(temp = b);
		(b = c);
		(c = temp);
	}
	printf("Os n�meros, na ordem correta, s�o %d, %d e %d", a, b, c);
	
	return 0;
}
