#include <iostream>
#include "include/ucomplex"

int main() {
    std::ucomplex<float> faa = 5;
    std::ucomplex<float> fee;
    std::cout << "faa = " << faa << "\nfee = " << fee << std::endl;

    faa = {1, 1};
    std::cout << "faa = " << faa << std::endl;

    std::ucomplex<float> fii = {2, 2};
    std::cout << "fii = " << fii << std::endl;

    std::ucomplex<float> fuu(fii);
    std::cout << "fuu = " << fuu << std::endl;
    std::cout << "\tRe{fuu} = " << fuu.real() << "\n\tIm{fuu} = " << fuu.imag() << std::endl;
    std::cout << "\n\t3 * fuu = " << 3 * fuu << "\n\tfuu * 2 = " << fuu * 2.0 << std::endl;

    fuu.real(10);
    fuu.imag(15);
    std::cout << "fii = " << fii << "\nfuu = " << fuu << std::endl;

    return 0;
}
