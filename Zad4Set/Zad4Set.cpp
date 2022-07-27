#include <iostream>
#include <set>
#include <string>
//Za pomoc¹ std::set sprawdz czy w podanym ³añcuchu znaków wystêpuj¹ wszystkie litery alfabetu.
bool containsAllAlphabet(std::string str) {
	std::set <char> alphabetCheck;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		if (*it >= 65 && *it <= 90) {
			*it += 32;
		}
		if ((*it >= 65 && *it <= 90) || (*it >= 97 && *it <= 122)) {
			alphabetCheck.insert(*it);
		}
	}
	return alphabetCheck.size() == 24;
}

int main()
{
	std::cout << std::boolalpha << containsAllAlphabet("Ala ma kota a kot ma ale") << std::endl;
	std::cout << containsAllAlphabet("abcdefghijklmnoprstuwxyz");

}
