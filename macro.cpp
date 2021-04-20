#include <iostream>
#include <conio.h>
#include "macro.h"

using std::cout; using std::cin;

#define SQR(x) (x*x) //возведение в квадрат
#define MIN(x,y) (x>y) ? y:x //поиск минимума
#define MAX(x,y) (x>y) ? x:y //поиск максимума
#define EVEN(x) (x%2==0)? true:false //проверка на четность
#define ODD(x) (x%2==0)? false:true //проверка на нечетность
#define PWR(x,y) (y==0) ? 1: (exp(y * log(x))) //возведение в степень

using std::cout; using std::cin;


int main()
{
	int r = 0; 
	r = PWR(3,3);
	cout << "3**3=" << r << '\n';
	r = SQR(4);
	cout << "4**2=" << r << '\n';
	r = MIN(4,2);
	cout << "min(4,2)=" << r << '\n';
	r = MAX(4,2);
	cout << "max(4,2)=" << r << '\n';
	r = EVEN(3);
	cout << "even(3)=" << r << '\n';
	r = ODD(3);
	cout << "odd(3)=" << r << '\n';
	_getche();
	return 0;
}
