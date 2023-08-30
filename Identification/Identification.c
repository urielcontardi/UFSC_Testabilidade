// O programa é responsável por determinar se um identificador é válido ou 
// não - um identificador válido deve começar com uma letra e conter apenas 
// letras ou dígitos; além disso, deve ter no mínimo 1 e no máximo 6 caracteres 
// de comprimento.

#include "Identification.h"

bool verifyId(const char *id, const int MIN_LENGTH, const int MAX_LENGTH)
{
    bool isValid = true;
    int length = strlen(id);

    // 1 - Minimo e maximo
    if (length < MIN_LENGTH || length > MAX_LENGTH)
    {
        printf("Tamanho inválido. \nTamanho do identificador: %d \nTamanho mínimo de %d e máximo de %d \n\n", length, MIN_LENGTH, MAX_LENGTH);
        isValid = false;
    }

    // 2 - Deve começar com uma letra 
    if (!isalpha(id[0])) 
    {
        printf("Inválido. \nO identificador deve começar com uma letra \n\n");
        isValid = false;
    }

    // 3 - Deve conter apenas letras ou dígitos
    for (int i = 1; i < length; i++) 
    {
        if (!isalnum(id[i])) 
        {
            printf("O identificador deve conter apenas letras ou dígitos \n\n");
            isValid = false;
        }
    }

    // 4 - Identificador Válido
    if (isValid == true)
    {
        printf("Identificador Válido! \n\n");
    }
    
    return isValid;

}