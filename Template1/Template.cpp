// Template1. napisz implementacje dla double 

#include <iostream>
#include <iomanip>
template<typename T>
void print(T s) {
    std::cout << s << std::endl;
}

void print(double s) {
    std::cout << s << std::endl;
}


template<>
void print(double s) {
    std::cout << std::setprecision(2)<< s << std::endl;
}

template <>
void print(bool value) {
    if (value) {
        std::cout << "Prawda" << std::endl;
    }
    else {
        std::cout << "Falsz" << std::endl;
    }

}

int main()
{
    int i = 10;
    double d = 2.55585;
    bool b = true;

    print(i);
    print(d);
    print(b);
}

