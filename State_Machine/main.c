#include <stdio.h>
#include "FSM_Dimmer.h"

int main(void) {

    // Variables
    light_state_t currentState = ST_OFF;
    int brightness = 0;
    
    printf("Lampada Desligada! \n");

    // State Machine
    while (1) {
        char cmd = menu();
        stateMachine(&currentState, &brightness, cmd);
    }

    return 0;
}