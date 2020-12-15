#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
//CALCULADORA TOPER

float n1, n2;
int op=0;

leitura_valores(){
    printf("\n\nDigite o primeiro número: ");
    scanf("%f",&n1);
    printf("\n\nDigite o segundo número: ");
    scanf("%f",&n2);
    printf("\n\nVocê escolheu os números %f e %f\n",n1,n2);
}

soma(){
    printf("\nVocê escolheu soma!");
    leitura_valores();
    printf("\nSoma: %f\n",n1+n2);

}

subtracao(){
    printf("\nVocê escolheu subtração!");
    leitura_valores();
    printf("\nSubtração: %f\n",n1-n2);

    }

multiplicacao(){
    printf("\nVocê escolheu multiplicação!");
    leitura_valores();
    printf("\nMultiplicação: %f",n1*n2);
}

divisao(){
    printf("\nVocê escolheu divisão!\n\nO primeiro número será dividido pelo segundo!");
    leitura_valores();
    if(n2==0){
        printf("\n\nMas não existe divisão por zero!");
    }else{
    printf("\nDivisão: %f",n1/n2);
    }
}

potencia(){
    printf("\nVocê escolheu Potência!\n\nO primeiro número será a base e o segundo será a potência desejada!");
    leitura_valores();
    float result_pot=pow(n1,n2);
    printf("\nPotência: %f",result_pot);
}

raiz(){
    printf("\nVocê escolheu Raiz!\n\nO primeiro número será o radicando e o segundo será o índice do radical!");
    leitura_valores();
    float result_raiz=pow(n1,1/n2);
    printf("\nRaiz: %f",result_raiz);
}

resto_da_divisao(){
    printf("\nVocê escolheu Resto de Divisão!\nO reusltado será o resto da divisão do primeiro número pelo segundo!");
    leitura_valores();
    if(n2==0){
        printf("\n\nMas não existe divisão por zero!");
    }else{
    printf("\nO resto é: %f",fmod(n1,n2));
}

}

menu(){
do{
    printf("\n | ==================================|");
    printf("\n | MENU                              | ");
    printf("\n | ==================================|");
    printf("\n | Operacoes Matematicas             | ");
    printf("\n | 1. Soma                           | ");
    printf("\n | 2. Substracao                     | ");
    printf("\n | 3. Multiplicacao                  | ");
    printf("\n | 4. Divisao                        | ");
    printf("\n | 5. Potencia n2²                   | ");
    printf("\n | 6. Raiz n2ª                       | ");
    printf("\n | 7. Resto da Divisao               | ");
    printf("\n | 0. SAIR                           | ");
    printf("\n | ================================= |");
    printf("\n\n Digite a opcao desejada:");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        soma();
        break;
    case 2:
        subtracao();
        break;
    case 3:
        multiplicacao();
        break;
    case 4:
        divisao();
        break;
    case 5:
        potencia();
        break;
    case 6:
        raiz();
        break;
    case 7:
        resto_da_divisao();
        break;
    default:
        printf("\nDesculpe, opção inválida\n");
        break;
    case 0:
    printf("\nOk........você deseja sair.....");
        }
}while(op!=0);
    printf("\n\nObrigado por usar a calculadora!");

    }

main(void){
setlocale(LC_ALL,"");
 menu();
}
