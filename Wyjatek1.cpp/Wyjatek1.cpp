//? Napisz funkcjê double divide(double, double)
//? W przypadku dzielenia przez 0 niech funkcja zwróci wyj¹tek typu string
//? Dodaj w main() kod wywo³uj¹cy funkcjê z parametrami podanymi przez u¿ytkownika.
//? Dodaj w main() kod obs³uguj¹cy wyj¹tek

#include <iostream>
double divide(double a, double b) {
    if (a == 0) {
        throw std::string("B³¹d - dzielenie przez 0"); {
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

