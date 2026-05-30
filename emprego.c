#include <stdio.h>
/*A História:
Joãozinho fez uma compra de 3.000 reais no
cartão de crédito, mas perdeu o emprego e
agora só consegue pagar um valor fixo por
mês. O banco cobra uma taxa de juros de 5%
ao mês sobre o saldo devedor restante. Para
piorar, a cada 6 meses, o banco cobra uma
"taxa de manutenção" de 50 reais que é
adicionada à dívida.




● O Desafio:
O programa deve pedir ao usuário o valor da
dívida inicial e o valor que ele pretende pagar
por mês. O programa deve simular o passar dos
meses até que a dívida seja zerada. Ao final,
imprima quantos meses demorou para quitar a
dívida e qual foi o valor total pago.
A cada mês, a lógica é:
○ Adicionar 5% de juros ao saldo devedor;
○ Subtrair o pagamento mensal do usuário;
○ Se o mês for múltiplo de 6, adicionar os 50 reais
de taxa.*/
int main(){
    float divida, pagapormes;
    int meses=0;
    printf("Qual o valor da sua divida?: \n");
    scanf("%f", &divida);
    printf("Qual o valor que voce pretende pagar por mes?: \n");
    scanf("%f", &pagapormes);
    while(divida >0.01){
        meses++;
    divida = divida *0.05;
    printf("Divida aplicando 5 porcento: %i\n", divida);
    if(pagapormes){
      divida - pagapormes;

    }
   if(meses %6==0){
    divida += 50;
   } 

   printf("--RESULTADOS--");
   printf("Quantidade de meses para quitar divida: %i\n", meses);
   printf("");
}
    return 0;
}