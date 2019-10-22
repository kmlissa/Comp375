//Asks for two numbers then computes the first number to the power of the second number.
//Comp375
//Katimu Lissa
#include <iostream>
using namespace std;

int main() {
	int dog, cat, answer;
	cout << "Enter two numbers, x and n >";
	cin >> dog >> cat;

	_asm { //sets answer to dog ^(cat)
		mov ebx, 0       ;ebx holds current i
		mov eax, answer  ;eax holds current answer
		mov eax, 1       ;make answer start at 1
forloop:
		cmp ebx, cat     ;check if end of loop
		jge done         ;go to done if i is greater or equal to cat
		imul dog         ;eax = answer * dog
		inc ebx          ;i++
		jmp forloop      ;loop
done:   mov answer, eax  ;save answer
	}
	
	cout << "X to the n is " << answer << endl;
	return 0;
}