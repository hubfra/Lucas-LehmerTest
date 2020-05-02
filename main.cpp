
#include <iostream>


bool LucasLehmerTest(int p);

int main()
{
	int primes[]{ 3,5,7,11,13,17,19,23,29,31,34 };
	
	for (int x : primes) {
		std::cout << "2^" << x << " - 1 = " << (1ll << x) - 1ll << " is " << (LucasLehmerTest(x) ? "prime\n" : "composite\n");
	}

	return 0;
}

bool LucasLehmerTest(int p)
{
	long long m = (1ll << p) - 1ll;
	long long s = 4ll;

	for (int a = 0; a < p - 2; a++) {
		s = (s * s - 2) % m;
	}

	return s == 0;
}
