#include <cmath>

double dMaxVec(double* v, int n) {
    double currMax = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > currMax)
            currMax = v[i];
    return currMax;
}


//La clase mivector incluye las operaciones usuales
//con vectores numericos de dimension n 

template <class T>
class uvector {
    protected:
        T  *v;
        int n;
    public:
        uvector();
        uvector(int);  //Declaracion con dimension del vector
        uvector(T*, int);
        T& operator[](int); //Asignacion de valor a un elemento
                            //Devuelve el valor de un elemento
        uvector<T> operator*(T); //Multiplicacion de un vector por un numero
        uvector<T> operator+(uvector<T>); //Suma de dos vectores
        uvector<T> operator-(uvector<T>); //Resta de dos vectores
        T operator*(uvector<T>); //Producto escalar de dos vectores
        T operator||(int); //Norma de un vector
        T norma(int);       //Norma de un vector
        int dimension(){return n;}; //Devuelve la dimension o numero de elementos
                                    //de los vectores
};

template <class T>
uvector<T>::uvector(){}

template <class T>
uvector<T>::uvector(int m) {
    v = new T[m];
    n = m;
}

template <class T>
uvector<T>::uvector(T* u,int m) {
    v = new T[m];
    n = m;
    for (int i = 0; i < m; i++)
        v[i] = u[i];
}

template <class T>
T uvector<T>::norma(int type) {
    T sum, aux = -1;
    switch (type) {
    case 2:
        sum = 0;
        for (int i = 0; i < n; i++)
            sum += v[i] * v[i];
        aux = std::sqrt(sum);
        break;
    case 0:
        T* u = new T[n];
        for (int i = 0; i < n; i++)
            u[i] = std::abs(v[i]);
        T amax = dMaxVec(u, n);
        aux = amax;
        delete[] u;
        break;
    }
  return aux;
}


template <class T>
T uvector<T>::operator||(int type) {
    T sum, aux;
    switch (type) {
    case 2:
        sum = 0;
        for (int i = 0; i < n; i++)
            sum += v[i] * v[i];
        aux = std::sqrt(sum);
        break;
    case 0:
        T* u = new T[n];
        for (int i = 0; i < n; i++)
            u[i] = std::abs(v[i]);
        T amax = dMaxVec(u, n);
        aux = amax;
        delete[] u;
        break;
    }
    return aux;
}

template <class T>
T uvector<T>::operator*(uvector<T> u) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i] * u[i];
    return sum;
}


template <class T>
T& uvector<T>::operator[](int j) {
    return v[j];
}


template <class T>
uvector<T> uvector<T>::operator+(uvector<T> w){
    uvector<T> aux(n);
    for (int i = 0; i < n; i++)
        aux.v[i] = v[i] + w.v[i];
    return aux;
}

template <class T>
uvector<T> uvector<T>::operator-(uvector<T> w) {
    uvector<T> aux(n);
    for (int i = 0; i < n; i++)
        aux.v[i] = v[i ]- w.v[i];
    return aux;
}

template <class T>
uvector<T>  uvector<T>::operator*(T a){
    uvector<T> aux(n);
    for (int i = 0; i < n; i++)
        aux.v[i] = v[i] * a;
    return aux;
}

template <class T, int sz>
class uvectors : public uvector<T> {
    public:
        uvectors() : uvector<T>(sz){};
};

template <class T>
uvector<T> operator*(T a, uvector<T> u) {
    return u * a;
}

template <class T>
std::ostream & operator<<(std::ostream & s, uvector<T> z) {
    int n = z.dimension();
    s << "(";
    for(int i = 0; i < n - 1; i++)
        s << z[i] << ",";

    s << z[n-1] << ")";
    return s;
}
