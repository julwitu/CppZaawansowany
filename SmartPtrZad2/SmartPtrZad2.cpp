#include <iostream>
#include <memory>
#include <string>
//Zadanie: Stwórz klasê Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U¿ywaj¹c make_uniqe stwórz i przypisz do
//uniqe_ptr :
//	Obiekt u¿ywaj¹c konstruktora domyœlnego
//	Obiekt u¿ywaj¹c konstruktora z 2 parametrami
//	Tablicê 4 Produktów

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