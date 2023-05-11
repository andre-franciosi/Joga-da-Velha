#include <stdio.h>
#include <conio.h>

char posicoes[10] = {'o','1', '2', '3', '4', '5', '6', '7', '8', '9'};

int vitoria();
void tabuleiro();

int main()
{

    int jogador = 1, i, escolha;

    char mark;
    do
    {

        tabuleiro();
        jogador = (jogador %2) ? 1:2;

        printf("Jogador %d digite um número: ", jogador);
        scanf("%d", &escolha);

        mark = (jogador == 1) ? 'X' : 'O';

        if (escolha == 1 && posicoes[1] == '1')
            posicoes[1] = mark;
        else if (escolha == 2 && posicoes[2] == '2')
            posicoes[2] = mark;
        else if (escolha == 3 && posicoes[3] == '3')
            posicoes[3] = mark;
        else if (escolha == 4 && posicoes[4] == '4')
            posicoes[4] = mark;
        else if (escolha == 5 && posicoes[5] == '5')
            posicoes[5] = mark;
        else if (escolha == 6 && posicoes[6] == '6')
            posicoes[6] = mark;
        else if (escolha == 7 && posicoes[7] == '7')
            posicoes[7] = mark;
        else if (escolha == 8 && posicoes[8] == '8')
            posicoes[8] = mark;
        else if (escolha == 9 && posicoes[9] == '9')
            posicoes[9] = mark;
        
        else
        {

            printf("Jogada Inválida!");

            jogador--;
            getch();

        }
        i = vitoria();

        jogador++;
    } while (i == -1);

    tabuleiro();
    
    if (i == 1)
        printf("==>\aJogador %d win ", --jogador);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}


int vitoria()
{
    if (posicoes[1] == posicoes[2] && posicoes[2] == posicoes[3])
        return 1;
        
    else if (posicoes[4] == posicoes[5] && posicoes[5] == posicoes[6])
        return 1;
        
    else if (posicoes[7] == posicoes[8] && posicoes[8] == posicoes[9])
        return 1;
        
    else if (posicoes[1] == posicoes[4] && posicoes[4] == posicoes[7])
        return 1;
        
    else if (posicoes[2] == posicoes[5] && posicoes[5] == posicoes[8])
        return 1;
        
    else if (posicoes[3] == posicoes[6] && posicoes[6] == posicoes[9])
        return 1;
        
    else if (posicoes[1] == posicoes[5] && posicoes[5] == posicoes[9])
        return 1;
        
    else if (posicoes[3] == posicoes[5] && posicoes[5] == posicoes[7])
        return 1;
        
    else if (posicoes[1] != '1' && posicoes[2] != '2' && posicoes[3] != '3' &&
        posicoes[4] != '4' && posicoes[5] != '5' && posicoes[6] != '6' && posicoes[7] 
        != '7' && posicoes[8] != '8' && posicoes[9] != '9')

        return 0;
    else
        return  - 1;
}

void tabuleiro()
{

system('cls');
printf("\n\n TIC TAC TOE \n\n");

printf("Player 1 [X] ---- Player 2 [O] \n\n\n");

printf("     |     |     \n");
printf("  %c  |  %c  |  %c \n", posicoes[1], posicoes[2], posicoes[3]);

printf("_____|_____|_____\n");
printf("     |     |     \n");

printf("  %c  |  %c  |  %c \n", posicoes[4], posicoes[5], posicoes[6]);

printf("_____|_____|_____\n");
printf("     |     |     \n");

printf("  %c  |  %c  |  %c \n", posicoes[7], posicoes[8], posicoes[9]);

printf("     |     |     \n\n");

}
