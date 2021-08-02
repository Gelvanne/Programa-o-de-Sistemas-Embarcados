#include <stdio.h>

int main(){
	int a;
	char b[10];
	printf("Digite um valor decimal: \n");
	scanf("%d",&a);
	itoa(a,b,2);
	printf("\n\n%d Forma Octal: %o\n",a,a);
	printf("\n\n%d Forma Hexadecimal %X\n\n\n",a,a);
	system ("pause");
	
	
	
	
	
	
}
