/* Локальные и глобальные переменные */
#include <iostream>
using namespace std;

int a = 100, b = 20;                                     // Глобальные переменные a и b

void f1(int a)                                           // Локальная переменная a
{
	a += 10;					 // 1
	cout << "f1:\t" << a << "\t" << ::a << endl;	 // 2
}
 
void f2(int b)                                           // Локальная переменная b
{
	b *= 2;						 // 3
	cout << "f2:\t" << b << "\t" << a << endl;	 // 4
}

int main()
{
	cout << "main:\t" << a << "\t" << b << endl;	 // 5
	f1(a); f2(b);                             	 // 6
	cout << "main:\t" << a << "\t" << b << endl;	 // 7
	return 0;
}
