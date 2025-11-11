#include <stdio.h>




int main(){
    // Menu do programa
    char argumento;
    printf("Uso: ImageEncoder [-? | -m | -f ARQ]\n");
    printf("Codifica imagens binárias dadas em arquivos PBM ou por dados informados manualmente.\n");    
    
    while(1){
        
        scanf(" %c", &argumento);

        switch(argumento){
            case '?':
                printf("Argumentos:\n");
                printf("-?, --help  : apresenta essa orientação na tela.\n");
                printf("-m, --manual: ativa o modo de entrada manual, em que o usuário fornece todos os dados da imagem informando-os através do teclado.\n");
                printf("-f, --file: considera a imagem representada no arquivo PBM (Portable bitmap).\n");
                break;
            // Caso o usuário escolha o modo manual
            case 'm':
                printf("Informe a altura e largura da imagem:\n");
                int altura, largura;
                scanf("%d %d", &altura, &largura);
                break;

            // Caso o usuário escolha o modo arquivo
            case 'f':
            break;


            }
    }
}