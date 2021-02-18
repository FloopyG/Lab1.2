#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time t;

	t.Read();
	t.Display();
	t.template1();
	t.template2();

	cin.get();
	system("pause");
	return 0;
}