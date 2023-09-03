#include <iostream>
#include "identification.h"

int main() 
{
    const int MIN_LENGTH = 2;
    const int MAX_LENGTH = 10;

    const char *validId = "Valid123";
    const char *invalidId = "Invalid@1";

    verifyId(validId, MIN_LENGTH, MAX_LENGTH);
    verifyId(invalidId, MIN_LENGTH, MAX_LENGTH);

    return 0;
}