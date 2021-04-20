#include <conio.h>
#include <iostream>
#include "function.h"

using std::cin; using std::cout;


int main()
{
	const int iSize = 10;	
	#define INTEGER
	#include "function.h"
	int iDim[iSize];
	FillArray(iDim, iSize);
	cout << '\n';
	PrintArray(iDim,iSize);
	cout << '\n' << GetMinArray(iDim, iSize);
	cout << '\n' << GetMaxArray(iDim,iSize);
	SortArray(iDim,iSize,ASC);
	cout << '\n';
	PrintArray(iDim,iSize);
	SortArray(iDim,iSize,DESC);
	cout << '\n';
	PrintArray(iDim,iSize);
	EditArray(iDim,2,rand()%10);
	cout << '\n';
	PrintArray(iDim,iSize);
	_getche();
	#undef INTEGER

	#define FLOAT
	#include "function.h"
	float fDim[iSize];
	FillArray(fDim, iSize);
	cout << '\n';
	PrintArray(fDim,iSize);
	cout << '\n' << GetMinArray(fDim, iSize);
	cout << '\n' << GetMaxArray(fDim,iSize);
	SortArray(fDim,iSize,ASC);
	cout << '\n';
	PrintArray(fDim,iSize);
	SortArray(fDim,iSize,DESC);
	cout << '\n';
	PrintArray(fDim,iSize);
	EditArray(fDim,4,6.3);
	cout << '\n';
	PrintArray(fDim,iSize);
	_getche();
	#undef FLOAT

	#define CHAR
	#include "function.h"
	char chDim[iSize];
	FillArray(chDim, iSize);
	cout << '\n';
	PrintArray(chDim,iSize);
	cout << '\n' << GetMinArray(chDim, iSize);
	cout << '\n' << GetMaxArray(chDim,iSize);
	SortArray(chDim,iSize,ASC);
	cout << '\n';
	PrintArray(chDim,iSize);
	SortArray(chDim,iSize,DESC);
	cout << '\n';
	PrintArray(chDim,iSize);
	EditArray(chDim,4,'A');
	cout << '\n';
	PrintArray(chDim,iSize);
	_getche();
	#undef CHAR
	return 0;
}