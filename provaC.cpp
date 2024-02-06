#include <iostream>

int somma(int a, int b){
    return a+b;
}

int main() {
    int a=somma(1,2);
    std::cout << "Valore della somma: "<< a << std::endl;
    return 0;
}
