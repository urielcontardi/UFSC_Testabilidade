#ifndef IDENTIFICATION_H
#define IDENTIFICATION_H

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool verifyId(const char *id, const int MIN_LENGTH, const int MAX_LENGTH);

#endif