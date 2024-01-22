#include <iostream>
#include "factorial.h"
#include "producto.h"

int main() {
    int n= 5;
    int m= 3;
    std::cout << "El factorial de " << n << " es " << factorial(n) << std::endl;
    std::cout << "El producto de " << n << " y " << m << " es " << producto(n,m) << std::endl;
    return 0;
}
