#include <iostream>

// Incluimos nuestra clase de vector
#include "mivectort.h"

// Definimos la dimensión de los vectores con los que vamos a trabajar.
#define VECTOR_SIZE 5

// Definimos la cantidad de vectores que tendremos en nuestra matriz dinámica.
#define MATRIX_DIM 2

int main() {
    // Podemos inicializar los vectores a través del contenido de arrays...
    double aRaw[VECTOR_SIZE] = {0, 1, 2, 3};

    // Declaramos (y en el caso de `a` y `b` inicializamos) los vectores.
    mivector<double>
        a(aRaw, VECTOR_SIZE - 1),
        b({-4, -3, -2, -1, 0}),
        c(VECTOR_SIZE),
        d(VECTOR_SIZE),
        p(MATRIX_DIM);

    a.append(4);

    // ... o de manera directa.
    for (int i = 0; i < VECTOR_SIZE; i++)
        c[i] = i * i;

    // Mostramos todos los vectores definidos
    std::cout << "Vectores predefinidos:\n\ta = " << a << "\n\tb = " << b \
        << "\n\tc = " << c << std::endl;

    // Podemos superponer los tres vectores...
    d = a + b + c;

    // ... e imprimir el resultado por pantalla.
    std::cout << "d = a + b + c = " << d << std::endl;

    // Y también podemos usar bucles más tradicionales
    std::cout << "d = a + b + c = (";
    for (int i = 0; i < VECTOR_SIZE; i++)
        std::cout << d[i] << ", ";
    std::cout << "\b\b)\n";

    // Podemos calcular productos escalares
    std::cout << "a * b = " << a * b << std::endl;

    // Otra operación común es obtener la norma o módulo del vector
    std::cout << "||c = " << (c || 2) << std::endl;

    // También lo podemos obtener así:
    std::cout << "~c  = " << ~c << std::endl;

    // Podemos mezclar estos conceptos con arrays dinámicos también:
    mivector<double>* mtx = new mivector<double> [MATRIX_DIM];

    // Inicializamos la matriz ...
    mtx[0] = a;
    mtx[1] = b;

    // Implementación del producto matricial
    for (int i = 0; i < MATRIX_DIM; i++)
        p[i] = mtx[i] * c;

    std::cout << "mtx =\n";
    for (int i = 0; i < MATRIX_DIM; i++)
        std::cout << "\t" << p[i] << std::endl;

    delete[]mtx;

    /*
     * Aquí tenéis que obtener el ángulo formado por `a` y `b`.
     */

    /*
     * Aquí tenéis que declarar e inicializar un vector bBig tal que
     * defina un ángulo de 0 radianes con `b`. Además... ¡hay que
     * hacerlo en una sola línea!
     */

    return 0;
}
