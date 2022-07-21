#pragma once
template<typename T, unsigned int N>
class StaticTable
{
public:
	T& operator[](const unsigned int i)
	{
		//TODO: wyj?tek out_of_range, gdy i >= N; https://en.cppreference.com/w/cpp/error/out_of_range
		if (i >= N) {
			throw std::out_of_range("Poza zakresem tablicy");
		}
		return tab[i];
	}

	template<typename T2>
	void print(T2 separator)
	{
		//wypisuje ca?a tablice u?ywaja? zmiennej T2 separator jako znaku rozdzielaj?cego warto?ci
		for (int i = 0; i < N; i++) {
			std::cout << tab[i] << separator;
		}
		std::cout << std::endl;
	}

private:
	T tab[N];
};

//specjalizacja szablonu klasy
template<unsigned int N>
class StaticTable<bool, N>
{
public:
	bool& operator[](const unsigned int i)
	{
		//TODO: wyj?tek out_of_range, gdy i >= N; https://en.cppreference.com/w/cpp/error/out_of_range
		if (i >= N) {
			throw std::out_of_range("Poza zakresem tablicy");
		}
		return tab[i];
	}

private:
	bool tab[N];
};

template<typename T, unsigned int N>
class StaticTable<T*, N> {
public:
	T& operator[](const unsigned int i)
	{
		//TODO: wyj?tek out_of_range, gdy i >= N; https://en.cppreference.com/w/cpp/error/out_of_range
		if (i >= N) {
			throw std::out_of_range("Poza zakresem tablicy");
		}
		return tab[i];
	}
private:
	T* tab = new T[N];
};

template<typename T, unsigned int N = 0>
class StaticTable{
public:
	void operator[](const unsigned int i)
	{
			throw std::bad_array_new_length("Tablica nie istnieje");
	}
};


//template<typename T, unsigned int N>
//T& StaticTable::operator[](const unsigned int i)
//{
//	//TODO: wyj?tek out_of_range, gdy i >= N; https://en.cppreference.com/w/cpp/error/out_of_range
//	return tab[i]; 
//}

//Napisz specjalizacjê dla wskaŸników.
//Napisz specjalizacjê dla N = 0