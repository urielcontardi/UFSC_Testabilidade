
#include <iostream>
#include <cctype>
#include <cstring>

bool verifyId(const char *id, const int MIN_LENGTH, const int MAX_LENGTH) {
    bool sizeOk = true;
    bool isalnumOk = true;
    bool firstOk = true;
    int length = std::strlen(id);

    // 1 - Minimo e maximo
    if (length < MIN_LENGTH || length > MAX_LENGTH) {
        sizeOk = false;
    }

    // 2 - Deve começar com uma letra
    if (!std::isalpha(id[0])) {
        firstOk = false;
        
    }

    // 3 - Deve conter apenas letras ou dígitos
    for (int i = 1; i < length; i++) {
        if (!std::isalnum(id[i])) {
            isalnumOk = false;
        }
    }

    // 4 - 
    if(!(sizeOk && firstOk && isalnumOk))
    {
        std::cout << "--------------------------------------------\n";
        if(!sizeOk)
            std::cout << "Tamanho inválido. \nTamanho do identificador: " << length << "\nTamanho mínimo de " << MIN_LENGTH << " e máximo de " << MAX_LENGTH << "\n\n";
        if (!firstOk)
            std::cout << "Inválido. \nO identificador deve começar com uma letra \n\n";
        if(!isalnumOk)
            std::cout << "O identificador deve conter apenas letras ou dígitos \n\n";
        std::cout << "--------------------------------------------\n";
        return false;
    }
    else
        return true;

}


