//#pragma once

#define SPACE ' '
#define ASC 0
#define DESC 1

#ifdef  INTEGER
   void intFillArray(int* iArray, int iLength);
   void intPrintArray(int* iArray, int iLength);
    int intGetMinArray(int* iArray, int iLength);
    int intGetMaxArray(int* iArray, int iLength);
   void intSortArray(int* iArray, int iLength, int iDir);
   void intEditArray(int* iArray, int iPos, int iValue);
#define FillArray intFillArray
#define PrintArray intPrintArray
#define GetMinArray intGetMinArray
#define GetMaxArray intGetMaxArray
#define SortArray intSortArray
#define EditArray intEditArray
#endif

#ifdef   FLOAT
   void floatFillArray(float* fArray, int iLength);
   void floatPrintArray(float* fArray, int iLength);
  float floatGetMinArray(float* fArray, int iLength);
  float floatGetMaxArray(float* fArray, int iLength);
   void floatSortArray(float* fArray, int iLength, int iDir);
   void floatEditArray(float* fArray, int iPos, float fValue);
#define FillArray floatFillArray
#define PrintArray floatPrintArray
#define GetMinArray floatGetMinArray
#define GetMaxArray floatGetMaxArray
#define SortArray floatSortArray
#define EditArray floatEditArray
#endif

#ifdef CHAR
   void charFillArray(char* chArray, int iLength);
   void charPrintArray(char* chArray, int iLength);
   char charGetMinArray(char* chArray, int iLength);
   char charGetMaxArray(char* chArray, int iLength);
   void charSortArray(char* chArray, int iLength, int iDir);
   void charEditArray(char* chArray, int iPos, char chValue);
#define FillArray charFillArray
#define PrintArray charPrintArray
#define GetMinArray charGetMinArray
#define GetMaxArray charGetMaxArray
#define SortArray charSortArray
#define EditArray charEditArray
#endif