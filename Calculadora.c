#include <stdio.h>

int main ()
{
    int operacao, resposta;
    float numero1, numero2;
    resposta=1;
    while (resposta==1){
        printf("Insira o primeiro valor:\n");
        scanf("%f", &numero1);
        printf("\n");
        printf("Informe o número da opção deseja\n1-Soma\n2-Subtração\n3-Divisão\n4-Multiplicação\n-");
        scanf("%d", &operacao);
        printf("\n");
        printf("Insira o segundo valor:\n");
        scanf("%f", &numero2);
        printf("\n");

        if(operacao==1){
          printf("%1.2f + %1.2f = %1.2f\n\n", numero1, numero2, numero1 + numero2);
        }
        else if(operacao==2){
          printf("%1.2f - %1.2f = %1.2f\n\n", numero1, numero2, numero1 - numero2);
        }
        else if(operacao==3){
          printf("%1.2f / %1.2f = %1.2f\n\n", numero1, numero2, numero1 / numero2);
        }
        else if(operacao==4){
          printf("%1.2f x %1.2f = %1.2f\n\n", numero1, numero2, numero1 * numero2);
        }
        else{
          printf("Digite uma opção válida.");
        }
        printf("Digite < 1 > para continuar:");
        scanf("%d", &resposta);
        printf("\n");
    }
    printf("FIM");
    return 0;
}
