class ufrac {
    private:
        int num, den;
    public:
        ufrac() {
            this->num = 0;
            this->den = 1;
        };
        ufrac(int, int);
        ufrac operator+(ufrac);
        friend std::ostream& operator<<(std::ostream & s, ufrac h);
};

ufrac::ufrac(int n, int d) {}

ufrac ufrac::operator+(ufrac h) {}

std::ostream & operator<<(std::ostream & s, ufrac h) {}
