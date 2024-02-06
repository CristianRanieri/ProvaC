#include <iostream>

int somma(int a, int b){
    return a+b;
}

int main() {
    int a=somma(4,7);
    std::cout << "\nValore della somma: "<< a << "\n" << std::endl;
    return 0;
}
