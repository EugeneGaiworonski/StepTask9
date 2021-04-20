#include <iostream>
#include "function.h"

using std::cin; using std::cout;

/* INT */
void intFillArray(int* iArray, int iLength)
{
	for (int i = 0; i < iLength; i++) iArray[i] = rand() % 10;
}

void intPrintArray(int* iArray, int iLength)
{
	for (int i = 0; i < iLength; i++) cout << iArray[i] << SPACE;
}

int intGetMinArray(int* iArray, int iLength)
{
	int iMin = iArray[0];
        for (int i = 0; i < iLength; i++)
                if (iArray[i] < iMin) iMin = iArray[i];
        return iMin;
}

int intGetMaxArray(int* iArray, int iLength)
{
	int iMax = iArray[0];
        for (int i = 0; i < iLength; i++)
                if (iArray[i] > iMax) iMax = iArray[i];
        return iMax;
}

void intSortArray(int* iArray, int iLength, int iDir)
{
	int iBuf = 0;
	switch (iDir) {
	case 0:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (iArray[j] > iArray[i]) {
						iBuf = iArray[i];
						iArray[i] = iArray[j];
						iArray[j] = iBuf;
					}
		break;
	case 1:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (iArray[j] < iArray[i]) {
						iBuf = iArray[i];
						iArray[i] = iArray[j];
						iArray[j] = iBuf;
					}
	}
}

void intEditArray(int* iArray, int iPos, int iValue)
{
	iArray[iPos] = iValue;
}

/* CHAR */
void charFillArray(char* chArray, int iLength)
{
	for (int i = 0; i < iLength; i++) chArray[i] = rand() % 0xFF;
}

void charPrintArray(char* chArray, int iLength)
{
	for (int i = 0; i < iLength; i++) cout << chArray[i] << SPACE;
}

char charGetMinArray(char* chArray, int iLength)
{
	char chMin = chArray[0];
        for (int i = 0; i < iLength; i++)
                if (chArray[i] < chMin) chMin = chArray[i];
        return chMin;
}

char charGetMaxArray(char* chArray, int iLength)
{
	char chMax = chArray[0];
        for (int i = 0; i < iLength; i++)
                if (chArray[i] > chMax) chMax = chArray[i];
        return chMax;
}

void charSortArray(char* chArray, int iLength, int iDir)
{
	char chBuf = 0x0;
	switch (iDir) {
	case 0:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (chArray[j] > chArray[i]) {
						chBuf = chArray[i];
						chArray[i] = chArray[j];
						chArray[j] = chBuf;
					}
	break;
	case 1:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (chArray[j] < chArray[i]) {
						chBuf = chArray[i];
						chArray[i] = chArray[j];
						chArray[j] = chBuf;
					}
	}
}

void charEditArray(char* chArray, int iPos, char chValue)
{
	chArray[iPos] = chValue;
}

/* FLOAT */
void floatFillArray(float* fArray, int iLength)
{
	for (int i = 0; i < iLength; i++) fArray[i] = (float)(rand() % 10 + (rand()%10)*.1);
}

void floatPrintArray(float* fArray, int iLength)
{
	for (int i = 0; i < iLength; i++) cout << fArray[i] << SPACE;
}

float floatGetMinArray(float* fArray, int iLength)
{
	float fMin = fArray[0];
        for (int i = 0; i < iLength; i++)
                if (fArray[i] < fMin) fMin = fArray[i];
        return fMin;
}

float floatGetMaxArray(float* fArray, int iLength)
{
	float fMax = fArray[0];
        for (int i = 0; i < iLength; i++)
                if (fArray[i] > fMax) fMax = fArray[i];
        return fMax;
}

void floatSortArray(float* fArray, int iLength, int iDir)
{
	float fBuf = 0;
	switch (iDir) {
	case 0:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (fArray[j] > fArray[i]) {
						fBuf = fArray[i];
						fArray[i] = fArray[j];
						fArray[j] = fBuf;
					}
	break;
	case 1:
		for (int i = 0; i < iLength; i++)
			for (int j = 0; j < iLength; j++)
				if (fArray[j] < fArray[i]) {
						fBuf = fArray[i];
						fArray[i] = fArray[j];
						fArray[j] = fBuf;
					}
	}
}

void floatEditArray(float* fArray, int iPos, float fValue)
{
	fArray[iPos] = fValue;
}