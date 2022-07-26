#include <iostream>
#include <memory>
#include <string>
//Zadanie: Stw�rz klas� Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U�ywaj�c make_uniqe stw�rz i przypisz do
//uniqe_ptr :
//	Obiekt u�ywaj�c konstruktora domy�lnego
//	Obiekt u�ywaj�c konstruktora z 2 parametrami
//	Tablic� 4 Produkt�w

class Product {
	float _price;
	std::string _name;
public:
	Product() {};
	Product(float price, std::string name) : _price(price), _name(name) {}
};

int main() {
	std::unique_ptr<Product> ptrDefault = std::make_unique<Product>(new Product());
	std::unique_ptr<Product> ptrParam = std::make_unique<Product>(new Product(5.44f, "prod"));
}