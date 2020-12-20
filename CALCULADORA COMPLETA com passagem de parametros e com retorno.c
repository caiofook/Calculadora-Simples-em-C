#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h> //A DIFERENÇA VAI SER QUE CADA FUNÇÃO VAI FUNCIONAR RECEBENDO VALORES (PARAMETROS) E RETORNANDO VALORES (RETORNO). TAMBÉM TENTANTO AO MÁXIMO NÃO UTILIZAR VARIÁVEIS GLOBAIS DESNECESSÁRIAS

//VARIÁVEIS GLOBAIS
float n1, n2;

//PROCEDIMENTO LEITURA
leitura(){
printf("\n\nDigite o primeiro número: ");
scanf("%f",&n1);
printf("\n\nDigite o segundo número: ");
scanf("%f",&n2);
}

//FUNÇÕES
float soma(float n1,float n2){
return (n1+n2);}

float sub(float n1,float n2){
return (n1-n2);}

float mult(float n1,float n2){
return (n1*n2);}

float divi(float n1,float n2){
    if(n2==0){
    printf("\nNão existe divisão por zero!\n");
    }else{
    return (n1/n2);}
    }

float pot(float n1,float n2){
return (pow(n1,n2));}

float raiz(float n1,float n2){
return (pow(n1,1/n2));}

float resto(float n1,float n2){
return (fmod(n1,n2));}

//FUNÇÃO MENU
menu(){
int op;
do{
printf("\n | ==================================|");
printf("\n | MENU                              | ");
printf("\n | ==================================|");
printf("\n | Operacoes Matematicas             | ");
printf("\n | 1. Soma                           | ");
printf("\n | 2. Subtracao                      | ");
printf("\n | 3. Multiplicacao                  | ");
printf("\n | 4. Divisao                        | ");
printf("\n | 5. Potencia n2²                   | ");
printf("\n | 6. Raiz n2ª                       | ");
printf("\n | 7. Resto da Divisao               | ");
printf("\n | 0. SAIR                           | ");
printf("\n | ================================= |");
REFAZ:
printf("\n\n Digite a opcao desejada:");
scanf("%d",&op);
if(op==1){printf("Beleza, você escolheu SOMA");
}else if(op==2){printf("Beleza, você escolheu SUBTRAÇÃO");
}else if(op==3){printf("Beleza, você escolheu MULTIPLICAÇÃO");
}else if(op==4){printf("Beleza, você escolheu DIVISÃO");
}else if(op==5){printf("Beleza, você escolheu POTÊNCIA");
}else if(op==6){printf("Beleza, você escolheu RAIZ");
}else if(op==7){printf("Beleza, você escolheu RESTO DE DIVISÃO");
}else if(op==0){printf("Beleza, ENTÃO XAU");
    exit(0);
}else{
    printf("\n\nOPÇÃO INVÁLIDA MEU IRMÃO");
    goto REFAZ;}

leitura();
switch (op){
case 1:
    printf("\nResultado de %.2f + %.2f: %.2f", n1,n2,soma(n1, n2));
    break;
case 2:
    printf("\nResultado de %.2f - %.2f: %.2f", n1,n2,sub(n1, n2));
    break;
case 3:
    printf("\nResultado de %.2f x %.2f: %.2f", n1,n2,mult(n1, n2));
    break;
case 4:
    printf("\nResultado de %.2f / %.2f: %.2f", n1,n2,divi(n1, n2));
    break;
case 5:
    printf("\nResultado de %.2f elevado a %.2f: %.2f", n1,n2,pot(n1, n2));
    break;
case 6:
    printf("\nResultado da raiz %.0fª de %.2f: %.2f", n2,n1,raiz(n1, n2));
    break;
case 7:
    printf("\nResto da divisão %.2f / %.2f: %.2f", n1,n2,resto(n1, n2));
    break;
}}while(op!=0);
}

//PROGRAMA PRINCIPAL

main(){
setlocale(LC_ALL,"");
menu();
}
