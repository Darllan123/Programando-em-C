#include <stdio.h>
int main(){
	int cont;
float salario,salarioliquido,desconto,Totalimposto,Totalsalariobruto,Totalsalarioliquido;
Totalsalariobruto=0;
salarioliquido=0;
Totalimposto=0;
Totalsalarioliquido=0;
cont=1;
do{
	printf("Qual salario do funcionario?\n\n");
	scanf(" %f",&salario);
	if(salario<=999.00){
		desconto= salario*10/100;
		salarioliquido=salario-desconto;
		printf("O salario liquido e de : %.2f\n\n",salarioliquido);
		printf("O salario teve 10 por cento de desconto que equivale a %.2f reais.\n\n",desconto);
	}
	if((salario>=999.01) && (salario<=1999.00)){
		desconto=salario*15/100;
		salarioliquido=salario-desconto;
		printf("O salario liquido e de : %.2f\n\n",salarioliquido);
		printf("O salario teve 15 por cento de desconto que equivale a %.2f reais.\n\n",desconto);
	}
	if((salario>=1999.01) && (salario<=9999.00)){
	desconto=salario*20/100;
		salarioliquido=salario-desconto;
		printf("O salario liquido e de : %.2f\n\n",salarioliquido);
		printf("O salario teve 20 por cento de desconto que equivale a %.2f reais.\n\n",desconto);
	}
	if((salario>=9999.01)&&(salario<=99999.00)){
				desconto=salario*30/100;
		salarioliquido=salario-desconto;
		printf("O salario liquido e de : %.2f\n\n",salarioliquido);
		printf("O salario teve 30 por cento de desconto que equivale a %.2f reais.\n\n",desconto);
	}
		Totalimposto=Totalimposto+desconto;
		Totalsalariobruto=Totalsalariobruto+salario;
		Totalsalarioliquido=Totalsalariobruto-Totalimposto;
		cont++;
}
		while(cont<=5);
	printf(" A soma dos salarios e de : %.2f reais\n\n",Totalsalariobruto);
		printf( "O total de imposto e de : %.2f reais\n\n",Totalimposto);
		printf("A soma do salario liquido e de : %.2f\n\n",Totalsalarioliquido);

}
