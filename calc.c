#include <stdio.h>
#include <math.h>

int main() {
    // resposta final para repeticao do programa
    int resp;
    do {
    // valor da opcao para saber qual metodo utilizar
    float opt ;
    printf("Para converter de BIN para DEC digite 1. Para converter de DEC para BIN digite 2.\n");
    scanf("%f", &opt);

    if (opt == 1) {
        
        long num;
        int dec = 0, rem = 0, place = 0;
        
        printf("Digite o numero que deseja converter de BIN para DEC \n");
        scanf("%ld", &num);
        printf("O numero binario %ld convertido para decimal é ", num);
        
        while(num) {
            rem = num % 10;
            if(rem) {
                dec = dec + (pow(2, place));
            }
            num = num / 10;
            place++;
        }
        
        printf("%d\n", dec);
        
    } else if (opt == 2) {
        int num, bin = 0, rem = 0, place = 1;
        printf("Digite o numero que deseja converter de DEC para BIN \n");
        scanf("%d", &num);
        printf("O numero decimal %d convertido para binario é ", num);
        
        while(num) {
            rem = num % 2;
            num = num / 2;
            bin = bin + (rem * place);
            place = place * 10;
            
        }
        
        printf("%d\n", bin);
    } else {
        printf("Por favor digite uma opcao valida!");
    }
        printf("Digite 1 para continuar ou 2 para sair\n");
        scanf("%d", &resp);
    }
    while (resp == 1);
        
        return 0;
        
    }
