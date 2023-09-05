#ifndef FSM_DIMMER_H
#define FSM_DIMMER_H

// Light State
typedef enum {
    ST_OFF,
    ST_ON
}light_state_t;

char menu(void);
void stateMachine(light_state_t *currentState, int *brightness, char cmd);

#endif 