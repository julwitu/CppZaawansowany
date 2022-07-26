//Korzystaj¹c z std::map napisz funkcjê która zliczy iloœæ wyst¹pieñ danej litery w podanym stringu a nastêpnie wypisz to na konsolê;
//np "Ala ma kota"
//a - 3
//l - 1
//m - 1
//k - 1
//o - 1
//t - 1
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

void lettersCounter( std::map<char, int>& letters,  std::string phrase) {
    remove(phrase.begin(), phrase.end(), ' ');
    for (int i = 0; i < phrase.size(); i++) {
        letters.at(phrase[i])++;
    }
}

void printMap(std::map<char, int>& letters) {
    for (const auto & pair : letters) {
       if (pair.second > 0) {
            std::cout << pair.first << " - " << pair.second << std::endl;
       }
    }
}

int main()
{
    std::map<char, int> letters;
    letters.insert({ { 'a', 0 }, { 'b', 0 }, { 'c', 0 }, { 'd', 0 }, { 'e', 0 }, { 'f', 0 }, { 'g', 0 }, { 'h', 0 }, { 'i', 0 }, { 'j', 0 }, { 'k', 0 }, { 'l', 0 }, { 'm', 0 }, { 'n', 0 }, { 'o', 0 }, { 'p', 0 }, { 'r', 0 }, { 's', 0 }, { 't', 0 }, { 'u', 0 }, { 'w', 0 }, { 'x', 0 }, { 'y', 0 }, { 'z', 0 } });

    lettersCounter(letters, "ala ma kota a kot ma ale");
    printMap(letters);
}


