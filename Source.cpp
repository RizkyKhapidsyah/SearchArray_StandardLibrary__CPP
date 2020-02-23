#include <iostream>
#include <array>
#include <algorithm>
#include <conio.h>

const size_t CakupanArray = 16;

void CetakArray(std::array<int, CakupanArray>& Angka) {
	std::cout << "Array : ";
	for (int &A : Angka)
	{
		std::cout << A << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::array<int, CakupanArray> Angka = { 4,6,2,8,7,2,3,1,7,0,4,3,6,5,4,6 };
	CetakArray(Angka);

	int CariAngka;
	bool AngkaDitemukan;

	//Sort Terlebih Dahulu
	//Search => binary_searh

	std::cout << "Mencari Angka Dalam Array Diatas : ";
	std::cin >> CariAngka;
	
	std::sort(Angka.begin(), Angka.end());
	AngkaDitemukan = std::binary_search(Angka.begin(), Angka.end(), CariAngka);

	if (AngkaDitemukan)
	{
		std::cout << "\nAngka " << CariAngka << " Ditemukan!" << std::endl;
	}
	else
	{
		std::cout << "\nAngka " << CariAngka << " Tidak Ditemukan!" << std::endl;
	}

	_getch();
	return 0;
}