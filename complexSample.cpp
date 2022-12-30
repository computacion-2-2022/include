#include <iostream>
#include "include/complex"

int main() {
	uam::complex<float> faa = 5;
	uam::complex<float> fee;
	std::cout << "faa = " << faa << "\nfee = " << fee << std::endl;

	faa = {1, 1};
	std::cout << "faa = " << faa << std::endl;

	uam::complex<float> fii = {2, 2};
	std::cout << "fii = " << fii << std::endl;

	uam::complex<float> fuu(fii);
	std::cout << "fuu = " << fuu << std::endl;
	std::cout << "\tRe{fuu} = " << fuu.real() << "\n\tIm{fuu} = " << fuu.imag() << std::endl;
	std::cout << "\n\t3 * fuu = " << 3 * fuu << "\n\tfuu * 2 = " << fuu * 2.0 << std::endl;

	fuu.real(10);
	fuu.imag(15);
	std::cout << "fii = " << fii << "\nfuu = " << fuu << std::endl;

	return 0;
}
