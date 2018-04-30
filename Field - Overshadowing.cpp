#include<iostream>
using namespace std;

class classA
{
public:
	int b;
	classA(int _b)
{
	b = _b;
}
};
class classB
{
public:
	int b;
	classB(int _b)
{
	b = _b;
}

};

class derived :
	public classA, public classB
{
public:
	derived(int num1, int num2):classA(num1), classB(num2)
{
}

void print_variable()
{
	// the problem lies in the following line while we try to access 'b'

	cout << "The value for variable 'b' is: " << b << endl;
}
};
int main()
{
	derived ob(5, 10);
	ob.print_variable(); // error
	return 0;
}
