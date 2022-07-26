#include <iostream>
#include <set>
#include <string>
//Za pomoc¹ std::set sprawdz czy w podanym ³añcuchu znaków wystêpuj¹ wszystkie litery alfabetu.
bool containsAllAlphabet(std::set<std::string>& expression) {
	std::string alphabet = "abcdefghijklmnoprstuwxyz";
	if (expression.find(alphabet) != expression.end()) {
		return true;
	}
	return false;
}

int main()
{
	std::set<std::string> exp1 = { "alphabet" };
	std::set<std::string> exp2 = { "abcdefghijklmnoprstuwxyz" };
	std::set<std::string> exp3 = { "abcdefghijklmnoprstuwzxy" };

	std::cout << "Set 1: " << std::boolalpha << containsAllAlphabet(exp1) << std::endl;
	std::cout << "Set 2: " << std::boolalpha << containsAllAlphabet(exp2) << std::endl;
	std::cout << "Set 3: " << std::boolalpha << containsAllAlphabet(exp3) << std::endl;

}
