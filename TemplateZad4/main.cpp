#include <iostream>
#include "TemplateZad4.hpp"

int main()
{
    StaticTable<int, 10> table1;

    for (int i = 0; i < 10; ++i){
        table1[i] = i;
    }
    //for (int i = 0; i < 10; ++i){
    //    std::cout << "tab[" << i << "]=" << table1[i] << std::endl;
    //}
    table1.print('-');

    try {
        std::cout << table1[15] << std::endl;
    }
    catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }

    StaticTable<bool, 2> table2;
    table2[0] = true;

    try {
        std::cout << table2[0] << std::endl;
    }
    catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Dla wskaznikow: " << std::endl;
 
    StaticTable<int*, 10> table3;
    for (int i = 0; i < 10; i++) {
        table3[i] = i+5;
        std::cout << table3[i] << " ";
    }

    try {
        std::cout << table3[24] << std::endl;
    }
    catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }
    
    StaticTable<int>table4;
    try {
        std::cout << table4[2] << std::endl;
    }
    catch (std::bad_array_new_length& e) {
        std::cout << e.what() << std::endl;
    }



}