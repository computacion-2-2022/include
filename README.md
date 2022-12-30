# Definición de clases para la asignatura
Este repositorio contiene la implementación de varias clases para poder
estudiar su funcionamiento en C++. Además, las clases `mivector<T>` y
`matrix` verán mucho uso durante el curso para implementar gran
cantidad de algoritmos y métodos numéricos.

La implementación de todas las clases se encuentra en el directorio
[`include/`](include/). Dentro encontraréis:

1. [`frac`](include/frac): Esta clase implementa la clase `frac` dentro
   del espacio de nombres (*namespace*) `uam`. La implementación es muy
   sencilla, con lo que os animamos a implementar un nuevo método que
   intente reducir la fracción a través del
   [*Algoritmo de Euclides*](https://en.wikipedia.org/wiki/Euclidean_algorithm).
   En [`fracSample.cpp`](fracSample.cpp) veréis un pequeño programa que hace
   uso de esta clase.

2. [`complex`](include/complex): Esta clase extiende la clase estándar para
   números complejos [`std::complex`](https://en.cppreference.com/w/cpp/numeric/complex)
   de manera que se puedan multiplicar estos complejos por enteros además de
   valores reales. Para evitar colisiones, esta extensión se incluye dentro del
   *namespace* `uam`. En [`complexSample.cpp`](complexSample.cpp) podéis ver un
   programa que hace uso de esta clase.

3. [`mivectort`](include/mivectort): Esta clase implementa un vector unidimensional
   que puede contener cualquier tipo de dato. Se pueden incluso instanciar vectores
   de vectores para implementar matrices n-dimensionales :scream:. En
   [`vectorSample.cpp`](vectorSample.cpp) hay un ejemplo que hace uso de esta clase.

4. [`matrix`](include/matrix): Esta clase ha sido adaptada por nosotros para poder
   emplear matrices bidimensionales en varios de los métodos numéricos que
   implementaremos. Tened en cuenta que la clase definida por esta cabecera pertenece
   al *namespace* `math`. En [`matrixSample.cpp`](matrixSample.cpp) tenéis un ejemplo de
   cómo puede emplearse. Dado que haremos uso intensivo de esta clase, os recomendamos
   dedicar un tiempo a familiarizaros con ella.

## Compilando los ejemplos
Los ejemplos pueden compilarse con una invocación común de `g++`:

    g++ -std=c++11 -Wall -Wextra -Wpedantic archivi.cpp

Tened en cuenta que **es imprescindible** especificar que el estándar de C++ con el que
trabajamos es C++11 (i.e. `-std=c++11`): de lo contrario la clase `matrix` genera muchísimos
fallos y problemas.

Los dos primeros ejemplos se pueden compilar sin problema. Para los dos últimos tendréis
que dar un paso adicional: instalar las implementaciones de `mivector` y `matrix` en
vuestro sistema.

## Instalando las clases
Para evitar que tengáis que estar copiando las clases `mivector` y `matrix` una y otra
vez vamos a instalarlas en nuestro sistema. Con ello, podremos incluirlas **sin especificar**
la ruta relativa o absoluta con `#include "/path/to/header"` y podremos hacer uso de
`#include <header>` como con las cabeceras del sistema.

La instalación pasa por simplemente copiar los archivos pertinentes a `/usr/local/include`. Esto
es válido tanto para sistemas basados en Linux como para macOS.

Así, la instalación se resume en descargar las cabeceras actualizadas y copiarlas a dicho
directorio. Una vez hecho, solo queda compilar los dos últimos ejemplos para verificar
que las cabeceras se han colocado en el sitio apropiado.

Todo esto se puede hacer desde una terminal. Así, abrimos una sesión de la terminal y ejecutamos
lo siguiente. Tened en cuenta que el comando es todo aquello a la derecha de `$`.

    # Descargamos la implementación de la clase mivector. Para ello usamos curl(1).
        # La opción -o escribe el resultado al directorio apropiado. Podéis encontrar más
        # información en: https://man7.org/linux/man-pages/man1/curl.1.html
    sudo curl \
        -o /usr/local/include/mivectort \
        https://raw.githubusercontent.com/computacion-2-2022/include/main/include/mivectort

    # Configuramos el usuario apropiado
    sudo chown root:root /usr/local/include/mivectort

    # Configuramos los permisos correctamente
    sudo chmod 0644 /usr/local/include/mivectort

    # Ahora queda hacer lo propio con la clase matrix
    sudo curl \
        -o /usr/local/include/matrix \
        https://raw.githubusercontent.com/computacion-2-2022/include/main/include/matrix

    # Configuramos el usuario y los permisos pertinentes
    sudo chown root:root /usr/local/include/matrix
    sudo chmod 0644 /usr/local/include/matrix

Con esto ya deberías poder compilar y ejecutar los ejemplos que hacen uso de estas dos clases.
Así, cada vez que queráis actualizar las clases basta con repetir este proceso.

Esperamos que estas clases os sean útiles durante la asignatura :smirk_cat:.
