#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// Inisialisasi fungsi random
	srand(time(NULL));

	// Generate angka acak antara 0 dan 100
	int angka_acak = rand() % 102;

	cout << "Angka acak: " << angka_acak << endl;
	std::cin.get();
	return 0;
}
