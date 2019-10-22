//Computes random numbers where the 10,000th seed should be the value 1043618065 to be correct.
//Comp375
//Katimu Lissa
#include <iostream>
using namespace std;

int main() {
	int seed, i;
	cout << "Enter the random number seed >";
	cin >> seed;

	for (i = 0; i < 10000; i++) {
		_asm { //seed = (16807 * seed) % 2147483647
			mov eax, seed        ;eax contains current seed
			mov ebx, 16807
			mov ecx, 2147483647
			imul ebx             ;(16807 * seed)
			cdq                  ;clear edx for division
			idiv ecx             ;eax = (16807 * seed) / 2147483647
			mov eax, edx         ;move the remainder to eax
			mov seed, eax        ;store result
	}
	}

	cout << "The 10,000th random number is " << seed << endl;
	if (seed != 1043618065) cout << "incorrect";
	else cout << "correct";

	return 0;
}