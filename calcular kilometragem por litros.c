# include <stdio.h>

// Faca um programa em C que o usuário digite o numero de quilometros, 
// a quantidade de litros de gasolina que o carro usou para rodar esse número de quilometros. 
// Em posse desses dois dados calcule o consumo em km/L que o carro tem. 
// Esse programa deve rodar sem parar, nao ter fim. 



// declaração de uma função para realizar o cálculo matemático.
float kmporlitro(float km, float lts) {
	float consumo;
	consumo=km/lts;
	return consumo;
}


int main () {
	int cont = 1;
	float kilometros;
	float litros;
	float resultado;
	while (cont == 1){
	printf("Digite a quantidade de kilometros percorrida:");
	scanf ("%f", &kilometros);
	printf("Digite a quantidade de litros consumida:");
	scanf ("%f", &litros);
	resultado = kmporlitro(kilometros,litros);
	printf("O consumo do veiculo e de :  %f", resultado);
	printf("  KM/Litros %\n %\n %\n ");
	
	printf("continuar calculndo? 0 Não ou 1 Sim");
	scanf ("%d", &cont);

}

	return 0;
}
