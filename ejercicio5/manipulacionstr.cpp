//
// Created by usuario on 23/11/2023.
//
#include <iostream>
#include <string>

int main() {
    std::string str = "Inteligencia Artificial";
    std::string sub_str = str.substr(13, 9); // "Artificial"

    std::string new_str = str.insert(0, "La "); // "La Inteligencia Artificial"

    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;
    return 0;
}