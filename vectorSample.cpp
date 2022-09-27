#include <iostream>

// Incluimos nuestra clase de vector
#include <uvector> 

// Definimos la dimensión de los vectores con los que vamos a trabajar.
#define VECTOR_SIZE 5

// Definimos la cantidad de vectores que tendremos en nuestra matriz dinámica.
#define MATRIX_DIM 2

int main() {
    // Podemos inicializar los vectores a través del contenido de arrays...
    double aRaw[VECTOR_SIZE] = { 0,  1,  2,  3, 4};
    double bRaw[VECTOR_SIZE] = {-4, -3, -2, -1, 0};

    // Declaramos (y en el caso de `a` y `b` inicializamos) los vectores.
    uvector<double> a(aRaw, VECTOR_SIZE), b(bRaw, VECTOR_SIZE), c(VECTOR_SIZE), d(VECTOR_SIZE), p(MATRIX_DIM);

    // ... o de manera directa.
    for (int i = 0; i < VECTOR_SIZE; i++)
        c[i] = i * i;

    // Podemos superponer los tres vectores...
    d = a + b + c;

    // ... e imprimir el resultado por pantalla.
    std::cout << "d = " << d << std::endl;

    // Y también podemos usar bucles más tradicionales
    std::cout << "a = (";
    for (int i = 0; i < VECTOR_SIZE; i++)
        std::cout << a[i] << ", ";
    std::cout << "\b\b)\n";

    // Podemos calcular productos escalares
    std::cout << "a * b = " << a * b << std::endl;

    // Otra operación común es obtener la norma o módulo del vector
    std::cout << "||c = " << (c || 2) << std::endl;

    // Podemos mezclar estos conceptos con arrays dinámicos también:
    uvector<double>* mtx = new uvector<double> [MATRIX_DIM];

    // Inicializamos la matriz ...
    mtx[0] = a;
    mtx[1] = b;

    /*
     * Y aquí tendréis que implementar el producto matricial `c` = `a` * `b` O_o
     */

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
