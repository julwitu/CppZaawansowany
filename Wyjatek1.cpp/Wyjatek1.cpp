//? Napisz funkcj� double divide(double, double)
//? W przypadku dzielenia przez 0 niech funkcja zwr�ci wyj�tek typu string
//? Dodaj w main() kod wywo�uj�cy funkcj� z parametrami podanymi przez u�ytkownika.
//? Dodaj w main() kod obs�uguj�cy wyj�tek

#include <iostream>
double divide(double a, double b) {
    if (a == 0) {
        throw std::string("B��d - dzielenie przez 0"); {
        }
    }
    else {
        std::cout << a / b << std::endl;
        return a / b;
    }
}
int main()
{
 
    divide(5, 2);
    std::cout << std::endl;
    divide(0, 5);


}

