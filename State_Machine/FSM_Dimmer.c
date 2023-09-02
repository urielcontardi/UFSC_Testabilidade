#include <stdio.h>
#include "FSM_Dimmer.h"

void stateMachine(light_state_t *currentState, int *brightness, char cmd)
{
    switch (*currentState) {

        case ST_OFF:
            if (cmd == 'L')
            {
                *currentState   = ST_ON;
                *brightness     = 10;
                printf("Lampada ligada, brilho em %d \n\n", *brightness);
            }
            break;

        case ST_ON:
            if (cmd == 'D')
            {
                *currentState   = ST_OFF;
                *brightness     = 0;
                printf("Lampada desligada, brilho em %d \n\n", *brightness);
            }
            else if(cmd == 'N')
            {
                if (*brightness > 1)
                    *brightness     = *brightness - 1;
                else
                    *brightness     = 10;
                
                printf("Brilho em %d \n\n", *brightness);             
            }
        
            break;
    }
}

char menu(void){
    char cmd;
    printf("\n Comandos disponíveis: \n");
    printf(" L - Ligar \n D - Desligar \n N - Diminuir Brilho \n\n");
    scanf(" %c", &cmd);
    return cmd;
}
