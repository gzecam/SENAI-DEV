#include <stdio.h>
int main(){
	int x[] = { 7, 3, 2, 0, 8}; //Vetor com 5 elementos, declarando e atribuindo
	int *p = x; //Queremos um ponteiro "p" igual ao vetor "x"
	int i;
	//La�o para mostrar o vetor "x"
	for(i = 0; i < 5; i++)
		printf("%d ", x[i]);
		
	printf("\n");
	
	//La�o para mostrar o ponteiro "p"
	for(i = 0; i < 5; i++)
		printf("%d ", p[i]);
	
	//Modificando 1� elemento do vetor "x" para 100
	x[0] = 100;

	printf("\n");

	//La�o para mostrar o ponteiro "p"
	for(i = 0; i < 5; i++)
		printf("%d ", p[i]);
	
	return 0;
}
