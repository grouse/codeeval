#include <iostream>

#define MAX_SIEVE (100000)
#define MAX_PRIME (1000)

int main(int argc, char* argv[]) {
	int sieve[MAX_SIEVE];
	sieve[0] = 0;
	sieve[1] = 0;

	for (int i = 2; i < MAX_SIEVE; ++i)
		sieve[i] = 1;

	int sum = 0, count = 0;
	for (int prime = 2; prime <= MAX_SIEVE && count < MAX_PRIME; ++prime) {
		if (sieve[prime] == 1) {
			sum += prime;
			count++;
			
			for (int i = prime*2; i <= MAX_SIEVE; i += prime) 
				sieve[i] = 0;
		}
	}

	std::cout << sum << std::endl;

	return 0;
}
