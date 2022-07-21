#include <iostream>
#include "Wyjatek2.hpp"

//Zadanie 2
//? Stwórz klase positiveNumber(przechowuj¹ca double) i zaimplementuj :
//*geter i setter(przyjmuj¹cy inta, float i double)
//* operatory wewnatrz klasy : +-(/ *dla chêtnych)
//* Zaimplementuj te¿ operator + -przyjmuj¹cy double
//? Dodaj w main() kod wywo³uj¹cy funkcjê z parametrami podanymi przez u¿ytkownika w pêtli.
//? Dodaj w main() kod obs³uguj¹cy wyj¹tek

int main()
{
    //PositiveNumber num1(100);
    //double num = 10;
    //PositiveNumber num2 = num1 - num;

    //PositiveNumber num2 = num - num1;
    int numInt = 0;
    double numDouble = 0.0;
    float numFloat = 0.f;

    double toAdd = 0;
    double toAdd2 = 0;
    double toSubstract = 0;

    while (true) {
        try {
            //Tworzenie obiektow
            std::cout << "Podaj liczbe calkowita(int): " << std::endl;
            std::cin >> numInt;
            PositiveNumber n1(numInt);

            std::cout << "Podaj liczbe niecalkowita(double): " << std::endl;
            std::cin >> numDouble;
            PositiveNumber n2(numDouble);

            std::cout << "Podaj liczbe niecalkowita(float): " << std::endl;
            std::cin >> numFloat;
            PositiveNumber n3(numFloat);

            std::cout << "Wartosc n1: " << n1.getValue() << std::endl;
            std::cout << "Wartosc n2: " << n2.getValue() << std::endl;
            std::cout << "Wartosc n3: " << n3.getValue() << std::endl;

            //Dodawanie i odejmowanie od utworzonych
            std::cout << "Dodawanie do n1. Podaj liczbe: " << std::endl;
            std::cin >> toAdd;
            n1.add(toAdd);
            std::cout << "Wynik dodawania(metoda add): " << n1.getValue() << std::endl;

            std::cout << "Dodawanie do n2. Podaj liczbe: " << std::endl;
            std::cin >> toAdd2;
            n2 + toAdd2;
            std::cout << "Wynik dodawania(operator +): " << n2.getValue() << std::endl;

            std::cout << "Odejmowanie od n3. Podaj liczbe: " << std::endl;
            std::cin >> toSubstract;
            n3 - toSubstract;
            std::cout << "Wynik odejmowania(operator -): " << n3.getValue() << std::endl;

        }
        catch (std::string& error) {
            std::cout << error << std::endl;
        }
    }


}