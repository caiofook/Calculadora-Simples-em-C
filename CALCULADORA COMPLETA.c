#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
//CALCULADORA TOPER

float n1, n2;
int op=0;

leitura_valores(){
    printf("\n\nDigite o primeiro n�mero: ");
    scanf("%f",&n1);
    printf("\n\nDigite o segundo n�mero: ");
    scanf("%f",&n2);
    printf("\n\nVoc� escolheu os n�meros %f e %f\n",n1,n2);
}

soma(){
    printf("\nVoc� escolheu soma!");
    leitura_valores();
    printf("\nSoma: %f\n",n1+n2);

}

subtracao(){
    printf("\nVoc� escolheu subtra��o!");
    leitura_valores();
    printf("\nSubtra��o: %f\n",n1-n2);

    }

multiplicacao(){
    printf("\nVoc� escolheu multiplica��o!");
    leitura_valores();
    printf("\nMultiplica��o: %f",n1*n2);
}

divisao(){
    printf("\nVoc� escolheu divis�o!\n\nO primeiro n�mero ser� dividido pelo segundo!");
    leitura_valores();
    if(n2==0){
        printf("\n\nMas n�o existe divis�o por zero!");
    }else{
    printf("\nDivis�o: %f",n1/n2);
    }
}

potencia(){
    printf("\nVoc� escolheu Pot�ncia!\n\nO primeiro n�mero ser� a base e o segundo ser� a pot�ncia desejada!");
    leitura_valores();
    float result_pot=pow(n1,n2);
    printf("\nPot�ncia: %f",result_pot);
}

raiz(){
    printf("\nVoc� escolheu Raiz!\n\nO primeiro n�mero ser� o radicando e o segundo ser� o �ndice do radical!");
    leitura_valores();
    float result_raiz=pow(n1,1/n2);
    printf("\nRaiz: %f",result_raiz);
}

resto_da_divisao(){
    printf("\nVoc� escolheu Resto de Divis�o!\nO reusltado ser� o resto da divis�o do primeiro n�mero pelo segundo!");
    leitura_valores();
    if(n2==0){
        printf("\n\nMas n�o existe divis�o por zero!");
    }else{
    printf("\nO resto �: %f",fmod(n1,n2));
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
    printf("\n | 5. Potencia n2�                   | ");
    printf("\n | 6. Raiz n2�                       | ");
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
        printf("\nDesculpe, op��o inv�lida\n");
        break;
    case 0:
    printf("\nOk........voc� deseja sair.....");
        }
}while(op!=0);
    printf("\n\nObrigado por usar a calculadora!");

    }

main(void){
setlocale(LC_ALL,"");
 menu();
}
