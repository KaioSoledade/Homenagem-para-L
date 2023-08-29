#include <stdio.h>

int main() {
    char resposta;
    printf("Leonardo e feio?\n");
    printf(" Escolha entre S ou N\n");

    scanf("%c", &resposta);


    if(resposta == 'S'){
        printf("VOCE ESTA EXTREMAMENTE CERTO \n");
    }else if(resposta == 'N'){
        printf("VOCE ESTA ERRADO\n");
        return 1;
    }else{
        printf("COLOQUE UMA RESPOSTA VALIDA\n");
        return 1;
    }
    return 0;
}
