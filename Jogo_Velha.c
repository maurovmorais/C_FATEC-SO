#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void tabuleiro(char casas2[3][3])
{
    system("cls");
    printf("\n\n");
    printf("\t       1 | 2 | 3 \n\n",casas2[0][0], casas2[0][1], casas2[0][2]);
    printf("\t   1   %c | %c | %c \n",casas2[0][0], casas2[0][1], casas2[0][2]);
    printf("\t      -----------\n");
    printf("\t   2   %c | %c | %c \n",casas2[1][0], casas2[1][1], casas2[1][2]);
    printf("\t      -----------\n");
    printf("\t   3   %c | %c | %c \n",casas2[2][0], casas2[2][1], casas2[2][2]);
}

int main(){

    char casas[3][3] = { {'1','2','3'},
                         {'4','5','6'},
                         {'7','8','9'}, };

    char res;
    int cont_jogadas,l,c,vez = 0,i,j;
    do{
        cont_jogadas = 1;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                casas[i][j] = ' ';
                }
        }
        do{
            tabuleiro(casas);
            if(vez % 2 == 0){
                printf("\n\nJogador X\n");
            }else{
                printf("\n\nJogador O\n");
            }
            printf("\n\nDigite a linha: ");
            scanf("%i",&l);
            printf("\n\nDigite a coluna: ");
            scanf("%i",&c);
            if(l < 1 || c < 1 || l > 3 || c > 3)
            {
                l = 0;
                c = 0;
            }else if(casas[l-1][c-1] != ' '){
                l = 0;
                c = 0;
            } else{
                if(vez % 2 == 0){

                    casas[l-1][c-1] = 'X';
                }else{
                    casas[l-1][c-1] = 'O';
                }
                vez++;
                cont_jogadas++;
            }
            if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0] == 'X')
            {
                cont_jogadas = 11;
            }
            if(casas[0][0]=='O' && casas[0][1]=='O' && casas[0][2] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[1][0]=='O' && casas[1][1]=='O' && casas[1][2] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[2][0]=='O' && casas[2][1]=='O' && casas[2][2] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[0][0]=='O' && casas[1][0]=='O' && casas[2][0] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[0][1]=='O' && casas[1][1]=='O' && casas[2][1] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[0][2]=='O' && casas[1][2]=='O' && casas[2][2] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2] == 'O')
            {
                cont_jogadas = 12;
            }
            if(casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0] == 'O')
            {
                cont_jogadas = 12;
            }
        }while(cont_jogadas <= 9);
        tabuleiro(casas);
        if(cont_jogadas == 10)
        {
            printf("\nJogo empatado");
        }
        if(cont_jogadas == 11)
        {
            printf("\nVencedor X\n");
        }
        if(cont_jogadas == 12)
        {
            printf("\nVencedor O\n");
        }
        printf("\n\nDeseja jogar novamente? [S-N]\n");
        //scanf("%s",&res);
        res = getche();
    }while(res == 's' || res == 'S');

}
