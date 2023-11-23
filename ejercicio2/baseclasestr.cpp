//
// Created by usuario on 23/11/2023.
//
#include <iostream>
#include <string>

int main() {
    std::string sentence = "OpenAI is a leading AI research lab.";
    std::cout << "Tamaño de la cadena: " << sentence.size() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;
    return 0;
}