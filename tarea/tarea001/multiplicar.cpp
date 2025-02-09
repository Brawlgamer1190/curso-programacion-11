#include <iostream>

int main() {
    int numero1, numero2;
    std::cout << "A continuacion se le solicitaran dos numeros, estos numeros seran utilizados para realizar tanto una suma como una resta y el resultado sera impreso en la terminal." << std::endl;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero ";
    std::cin >> numero2;
    std::cout << "Al multiplicar los dos numeros indicados el resultado sera: " << numero1 * numero2 << std::endl;
    std::cout << "Y al sumarlos el resultado sera:  " << numero1 + numero2 << std::endl;
    return 0;
}
