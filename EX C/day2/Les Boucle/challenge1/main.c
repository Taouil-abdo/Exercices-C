#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Challenge 1 : Table de Multiplication Invers�e
//�crivez un programme C qui demande un nombre � l�utilisateur et affiche sa table de multiplication en ordre d�croissant,
// de 10 � 1. Par exemple, pour le nombre 5, affichez :
//
//5 * 10 = 50 5 * 9 = 45 5 * 8 = 40 ... 5 * 1 = 5


int main(int argc, char *argv[]) {
	
	
	int i , num;
	
	printf("insert the numbers of the element");
	scanf("%d",&num);
	
	
    for (i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
	return 0;
}
