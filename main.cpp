
#include <iostream>
#include <vector>

using namespace std;

bool LucasLehmerTest(int p);


int main()
{
	vector<int> primes{ 3,5,7,11,13,17,19,23,29,31 };
	
	for (int x : primes) {
		cout << "2^" << x << " - 1 = " << (1ll << x) - 1 << " is " << (LucasLehmerTest(x) ? "prime\n" : "composite\n");
	}

	return 0;
}

bool LucasLehmerTest(int p)
{
	long long m = (1ll << p) - 1; // Mersenne number
	long long s = 4;              // Last element in the sequence

	for (int a = 0; a < p - 2; a++)
		s = (s * s - 2) % m;

	return s == 0;
}