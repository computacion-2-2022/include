#include <iostream>

#include "include/frac"

#define ARR_LEN 4

int main() {
	uam::frac defFrac, initFrac(1, 2);

	std::cout << "defFrac  = " << defFrac << "\ninitFrac = " << initFrac << \
	"\ndefFrac + initFrac = " << defFrac + initFrac << std::endl;

	/*
	 * Instanciad una fracción cualquiera e imprimid la superposición (i.e. la suma)
	 * de las dos fracciones ya definidas junto con la nueva.
	 */

	/*
	 * Definid una matriz dinámica de fracciones para luego obtener el acumulado
	 * total. Os proporcionamos el tamaño a través de la constante `ARR_LEN`.
	 * ¡No os olvidéis de liberar la memoria!
	 */

	return 0;
}
