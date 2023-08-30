#include <stdio.h>
#include <stdbool.h>
#include "Identification.h"

const int MIN_LENGTH = 1;
const int MAX_LENGTH = 6;

int main(void) {
    char id[100];

    // State Machine
    while (1)
    {
        printf("Digite um identificador:");
        scanf("%s", id);
        verifyId(id, MIN_LENGTH, MAX_LENGTH);
    }

    return 0;
}