/* Локальные и глобальные переменные */
#include <iostream>
using namespace std;

int a = 100, b = 20;                                     // Глобальные переменные a и b

void f1(int a)                                           // Локальная переменная a
{
	a += 10;
	cout << "f1:\t" << a << "\t" << ::a << endl;
}
 
void f2(int b)                                           // Локальная переменная b
{
	b *= 2;
	cout << "f2:\t" << b << "\t" << a << endl;
}

int main()
{
	cout << "main:\t" << a << "\t" << b << endl;
	f1(a); f2(b);
	cout << "main:\t" << a << "\t" << b << endl;
	return 0;
}
