//Computes the interger for bits 11 through 15 of an integer.
//Comp375
//Katimu Lissa
#include <iostream>
using namespace std;

int main() {
	int stuff, good;
	cout << "Enter a number greater than 2048 >";
	cin >> stuff;

	_asm {
		mov eax, stuff  ;put the given number into eax
		shr eax, 11     ;shift bits to the 11th element
		and eax, 15     ;move other bits to the 15th
		mov good, eax   ;save results
	}

	cout << "bits 11 - 15 are " << good << endl;
	return 0;
}