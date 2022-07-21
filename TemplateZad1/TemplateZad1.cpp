// TemplateZad1 Zadanie 1.
//Utwórz szablon funkcji max(a, b) która porówna i zwróci wiêkszy element.
//Co ze wskaŸnikami ? ?

#include <iostream>
#include <string.h>
// Zad 1 
template<typename T>
T max(T s1, T s2) {
    return s1 > s2 ? s1 : s2;
}


template<typename T>
T* max(T* a, T* b) {
    return *a > *b ? a : b;
}

//Zad 2 Przeci¹¿ ten szablon, tak ¿e bêdzie zwraca³ najwiêszy element w tablicy
template<typename T>
T max(T* data, const unsigned int size) {
    T max = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

//Zad 3 //Dodaj specjalizacjê szablonu funkcji max() dla typu char* (i const char*) (³añcuchy znaków).
//Do porównywanie ³añichów znaków slu¿y strcmp

template<>
char* max(char * c1, char* c2) {
    if (strcmp(c1, c2) == 0) {
        std::cout << "Lancuchy sa rowne" << std::endl;
        return c1;
    }
    else if (strcmp(c1, c2) > 0) {
        std::cout << "Pierwszy lancuch jest dluzszy" << std::endl;
        return c1;
    }
    else {
        std::cout << "Drugi jest najdluzszy" << std::endl;
        return c2;
    }
}

int main()
{
    std::cout << max(5, 8) << std::endl;
    std::cout << max(2.33, 1.8) << std::endl;
    int num1 = 100;
    int num2 = 10;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << max(ptr1, ptr2);

    char c[] = "La la la al alana";
    char c1[] = "La la ";
    std::cout << max(c, c1) << std::endl;

    const unsigned int size = 10;
    int tab[size] = { 0, 23, 2422, 4, 242, 6, 73, 133, 52, 34 };

    std::cout << "Najwiekszy element w tablicy: " << max(tab, size);
}


