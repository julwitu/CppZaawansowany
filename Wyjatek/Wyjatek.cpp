//? Napisz funkcjê double divide(double, double)
//? W przypadku dzielenia przez 0 niech funkcja zwróci wyj¹tek typu string
//? Dodaj w main() kod wywo³uj¹cy funkcjê z parametrami podanymi przez u¿ytkownika.
//? Dodaj w main() kod obs³uguj¹cy wyj¹tek
#include <iostream>
#include <string>

double divide(double a, double b) {
	if (b == 0) {
		throw std::string("Error! Nie dziel przez 0");
	}
	return a / b;
}

int main() {
	double a = 0;
	double b = 0;

	while (true) {
		std::cout << "Podaj liczby a i b: " << std::endl;
		std::cin >> a;
		std::cin >> b;

		try {
			double result = divide(a, b);
			std::cout << result << std::endl;
		}
		catch (std::string error) {
			std::cout << error << std::endl;
		}
	}
}