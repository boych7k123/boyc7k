#include <iostream>

using namespace std;

int main()
{
	int n = 8 * 8;
	double sum = 1;
	double rez = 1;
	int i = 1;
	for (;;) {
		rez *= 2;
		sum += rez;
		i++;
		if (i == 64) {
			break;
		}
	}

	cout << sum / 10000;

	return 0;
}