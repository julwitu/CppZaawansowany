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

void lettersToLower(std::string& str) {
    for (auto it = str.begin(); it != str.end(); ++it) {
        if (*it >= 65 && *it <= 90) {
            *it += 32;
        }
    }
}

void lettersCounter(std::map <char, int>& letters, std::string phrase) {
    for (auto it = phrase.begin(); it != phrase.end(); ++it) {
        lettersToLower(phrase);
        if ((*it >= 65 && *it <= 90) || (*it >= 97 && *it <= 122)) {
            if (letters.find(*it) != letters.end()) {
                letters.at(*it)++;
            }
            else {
                letters.insert({ *it, 1 });
            }
        }
    }
}

    void printMap(std::map <char, int>&letters) {
        for (auto it = letters.begin(); it != letters.end(); ++it) {
            std::cout << it->first << " - " << it->second << std::endl;
        }
    }

int main()
{
    std::map<char, int> letters;

    lettersCounter(letters, "ala ma kota a kot ma ale");
    printMap(letters);
}


