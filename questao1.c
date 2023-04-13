#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	
   int n;
   printf("Qual o número de linhas da matriz?\n");
   scanf("%d",&n);
   
   int linhas, colunas, matr[n][n];
   srand(time(NULL));
 
   for(linhas = 0; linhas < n; linhas++)
	 {
        for(colunas = 0;  colunas< n; colunas++)
	     {
              matr[linhas][colunas] = rand() % 10;
              
          }
     }

    printf("\n Matriz A\n");
    for(linhas = 0; linhas < n; linhas++)
	 {
         for(colunas = 0;  colunas< n; colunas++)
		  {
              printf("%2d ", matr[linhas][colunas]);
          }
         printf("\n");
     }

    printf("\n\nDiagonal principal: ");
    for(linhas = 0; linhas < n; linhas++)
	 {
        printf("%d ", matr[linhas][linhas]);
     }

    printf("\n");
   

    return 0;
}