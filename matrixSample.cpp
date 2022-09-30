#include <iostream>

#include <matrix>

#define MAT_A_ROWS 3
#define MAT_A_COLS 3

#define MAT_B_ROWS 3
#define MAT_B_COLS 1

#define MAT_C_ROWS MAT_A_ROWS
#define MAT_C_COLS MAT_B_COLS

int main() {
    // Instanciamos una matriz (`matA`) 3x3...
    math::matrix<double> matA(MAT_A_ROWS, MAT_A_COLS);

    // ... y la inicializamos como la matriz unitaria I.
    matA.Unit();

    std::cout << "matA (i.e. Unit Matrix) =\n" << matA << std::endl;

    // También podemos asignar los elementos «manualmente»
    matA(0, 0) =  9;
    matA(0, 1) =  1;
    matA(0, 2) =  1;
    matA(1, 0) =  2;
    matA(1, 1) = 10;
    matA(1, 2) =  3;
    matA(2, 0) =  3;
    matA(2, 1) =  4;
    matA(2, 2) = 11;

    std::cout << "matA (i.e. Manually initialised matrix) =\n" << matA << std::endl;

    /*
     * Definimos otra matriz para poder llevar a cabo un producto.
     * Es importante ver cómo las dimensiones son coherentes para
     * la multiplicación.
     */
    math::matrix<double> matB(MAT_B_ROWS, MAT_B_COLS);

    // Inicializamos `matB`...
    matB(0, 0) = 1;
    matB(1, 0) = 0;
    matB(2, 0) = 0;

    /*
     * Y llevamos a cabo el producto. Tened en cuenta que debemos definir
     * una matriz adicional (i.e. `matC`) para recoger el resultado. Atentos
     * al orden de los factores: ¡al trabajar con matrices es crucial!
     */
    math::matrix<double> matC(MAT_C_ROWS, MAT_C_COLS);
    matC = matA * matB;
    std::cout << "matC = matA * matB =\n" << matC << std::endl;

    // También podemos inicializar las matrices directamente.
    math::matrix<double> matD({
        {9,  1,  1},
        {2, 10,  3},
        {3,  4, 11}
    });

    // Comprobamos que el producto es, efectivamente, el mismo
    matC = matD * matB;
    std::cout << "matC (again) = matA * matB =\n" << matC << std::endl;

    /*
     * El operador `!` nos devuelve la matriz inversa. Por tanto,
     * podemos usarlo para resolver la ecuación `Ax = b`.
     */
    matC(0, 0) = 10;
    matC(1, 0) = 19;
    matC(2, 0) =  0;
    matB = !matA * matC;
    std::cout << "Solution `matB` for matA * matB = matC:\n" << matB << std::endl;

    /*
     * Declarad una nueva matrix `matE` e imprimidla por la pantalla después
     * de almacenar en ella la suma de `matA` y `matD`.
     */

    /*
     * Ahora, almacenad en `matD` la matriz `matA` escalada por un valor escalar.
     * Para ello podéis usar el operador `*` también. Después, imprimidlo por
     * pantalla.
     */

    /*
     * Almacenad en `matD` el producto de la matriz transpuesta de `matB` con
     * `matA` con todos sus elementos elevados al cuadrado. Para calcular la
     * transpuesta de una matriz podéis usar el operador unario `~` y para elevar
     * todos los elementos de una matriz a un exponente podéis emplear el operador
     * `^` seguido del exponente en cuestión.Prestad atención a las dimensiones
     * de las matrices así como a la preferencia de operadores de C++. Después,
     * imprimid el resultado por pantalla.
     */

    /*
     * Sabiendo que el determinante de `matA` se puede calcular con
     * `matA.Det()` determinad si los vectores que la componen son
     * linealmente independientes e imprimid la respuesta por pantalla.
     */

    /*
     * Suma el determinante de `matA` y su norma cuadrática (que se calcula)
     * como `matA.Norm()` para después imprimirlo por pantalla.
     */

    /*
     * Inicializa a cero todos los elementos de `matA` para después imprimirla
     * por pantalla. Para ello, puedes usar el método `Null()`.
     */

    /*
     * Llegados a este punto, definid las mismas matrices que en `vectorSample.cpp` y obtened
     * el resultado de dicha multiplicación aprovechando las características de la clase
     * `matrix`.
     */

    return 0;
}
