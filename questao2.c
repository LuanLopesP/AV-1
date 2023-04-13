#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	
   int n;
   printf("Qual o número de linhas da matriz?\n");
   scanf("%d",&n);
   
   int linhas, colunas, matr1[n][n],matr2[n][n],matr3[n][n];
   srand(time(NULL));
 
   for(linhas = 0; linhas < n; linhas++)
	 {
        for(colunas = 0;  colunas< n; colunas++)
	     {
              matr1[linhas][colunas] = rand() % 10;
              matr2[linhas][colunas] = rand() % 10;
              matr3[linhas][colunas] = matr1[linhas][colunas] + matr2[linhas][colunas]; 
          }
     }

    printf("\n Matriz A\n");
    for(linhas = 0; linhas < n; linhas++)
	 {
         for(colunas = 0;  colunas< n; colunas++)
		  {
              printf("%2d ", matr1[linhas][colunas]);
          }
         printf("\n");
     }

    printf("\n Matriz B\n");
    for(linhas = 0; linhas < n; linhas++)
     {
         for(colunas = 0;  colunas< n; colunas++)
		  {
              printf("%2d ", matr2[linhas][colunas]);
          }
         printf("\n");
     }

    printf("\n Soma das Matrizes\n");
    for(linhas = 0; linhas < n; linhas++)
	 {
         for(colunas = 0;  colunas< n; colunas++)
		  {
              printf("%2d ", matr3[linhas][colunas]);
          }
         printf("\n");
     }
    printf("\n\n");

    return 0;
}