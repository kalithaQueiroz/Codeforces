#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
    // Palavras definidas
    std::string palavras[5] = {"4", "word", "localization", "internationalization", "pneumonoultramicroscopicsilicovolcanoconiosis"};

    for (int i = 0; i < 5; ++i) {
        std::string linha = palavras[i];

        linha.erase(std::remove_if(linha.begin(), linha.end(), ::isspace), linha.end());

        if (!linha.empty() && std::all_of(linha.begin(), linha.end(), ::isalpha)) {

            char primeiraLetra = linha[0];

            char ultimaLetra = linha[linha.length() - 1];

            int quantidadeLetrasMeio = linha.length() - 2;

            if (linha.length() <= 10) {
                std::cout << linha << std::endl;
            } else {
                std::cout << primeiraLetra << quantidadeLetrasMeio << ultimaLetra << std::endl;
            }
        }
    }

    return 0;
}