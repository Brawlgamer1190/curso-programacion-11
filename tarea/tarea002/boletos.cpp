#include <iostream>
#include <string>

int main() {
    int edad = 0;
    std::string boleto = "";

    std::cout << "Por favor ingrese su edad:" << std::endl;
    std::cin >> edad;

    std::cout << "Elija un tipo de boleto entre:\n\n    (N) Normal\n    (E) Estudiante (descuento del 50%)\n    (S) Senior (descuento del 30% para mayores de 60 anos)\n\n Favor de colocar las letras en mayuscula:" << std::endl;
    std::cin >> boleto;

    if (edad < 5) {
        std::cout << "El boleto es gratis." << std::endl;
    } 
    else if (edad >= 60 && boleto == "S") {
        std::cout << "El boleto cuesta $70." << std::endl;
    } 
    else if (boleto == "E") {
        std::cout << "El boleto cuesta $50." << std::endl;
    } 
    else {
        std::cout << "El boleto cuesta $100." << std::endl;
    }

    return 0;
}
