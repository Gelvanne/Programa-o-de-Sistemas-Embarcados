# include <stdio.h>

// 1. Fazer um programa em C que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros. 

int main () {
	float metros;
	float dm;
	float cm;
	float mm;
	printf("Digite a medida  em metros :");
	scanf ("%f", &metros);
	dm = metros/10;
	cm = metros/100;
	mm = metros/1000;
	
	printf("Valor em Decimetros: %f \n" ,dm );
	
	
	printf("Valor em centimetros: %f \n",cm );
	
	
	printf("Valor em milimetros: %f \n", mm );
	
return 0;
}

	

