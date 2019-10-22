//Compute the greatest common denominator.
//Comp375
//Katimu Lissa
#include <iostream>
using namespace std;

int main(int argn, char* argv[]) {
	int dog, cat, cow, answer;
	cout << "Enter two numbers >";
	cin >> dog >> cat;
	_asm {
		mov eax, dog     ;eax holds the current dog
		mov ebx, cat     ;ebx holds the current cat
		mov ecx, cow     ;ecx holds the current cow
whileloop: 
		cmp ebx, 0       ;check the comparison of cat and 0
		je done          ;jump to done if cat == 0
		cdq              ;clear edx for division
		idiv ebx         ;eax = dog / cat
		mov ecx, edx     ;cow = remainder
		mov eax, ebx     ;dog = cat
		mov ebx, ecx     ;cat = cow
		jmp whileloop    ;repeat if condition not met
done :  mov answer, eax  ;answer = dog
	}
	cout << "The gcd is " << answer << endl;
	return 0;
}