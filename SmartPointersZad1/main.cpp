#include <iostream>
#include <memory>

//Zad 3a) Stwórz shared_ptr na Kurczaka na dwa sposoby : za pomoc¹ new i
//make_shared.
class Chicken
{
public:

    Chicken()
    {
        std::cout << "Chicken" << std::endl;
    }

    ~Chicken()
    {
        std::cout << "~Chicken" << std::endl;
    }
};

void fun()
{
    Chicken* rawPtr = new Chicken();

    std::unique_ptr<Chicken> smartPtr(new Chicken());

    delete rawPtr;
}

int main()
{
    fun();
    std::cout << "Hello World!\n";

    std::shared_ptr<Chicken> sharedPtr(new Chicken());
    std::shared_ptr<Chicken> makeShrdPtr = std::make_shared<Chicken>();
}