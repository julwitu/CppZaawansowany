// Zad4MapV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <algorithm>
void lettersCounter(std::map <char, int>& letters, std::string text)
{
    auto removeNonLetters = [](unsigned char c)
    {
        return !((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
    };

    text.erase(std::remove_if(text.begin(), text.end(), removeNonLetters), text.end()); 

    std::transform(text.begin(), text.end(), text.begin(), 
        [](unsigned char c) { return std::tolower(c); });

    auto addToMap = [&letters, text](unsigned char c) {
            if (letters.find(c) != letters.end()) {
                letters.at(c)++;
            }
            else {
                letters.insert({ c, 1 });
            }
    };

    std::for_each(text.begin(), text.end(),  
       addToMap);
}

void printMap(std::map <char, int>& letters) {
    for (auto it = letters.begin(); it != letters.end(); ++it) {
        std::cout << it->first << " - " << it->second << std::endl;
    }
}

int main()
{
    std::map<char, int> letters;
    lettersCounter(letters, "Kaczki kurki swinki");
    printMap(letters);
    letters.clear();
    std::cout << std::endl << std::endl;
    lettersCounter(letters, "Julia");
    printMap(letters);
}

