// Zad3SetV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <set>
#include <iostream>
#include <algorithm>
bool containsAllLetters3(const std::string& text)
{
    std::set<char> alphabetChecker;

    auto magicLambda = [&alphabetChecker](unsigned char c)
    {
        //tutaj napisz kod 
    };

    std::for_each(text.begin(), text.end(), magicLambda);

    return alphabetChecker.size() == 26;
}

int main()
{
    std::cout << "Hello World!\n";
}

