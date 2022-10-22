#ifndef INTEGER
void initArrayInt(int arr[], int n);
void showArrayInt(int arr[], int n);
void findMinInt(int arr[], int n);
void findMaxInt(int arr[], int n);
void bSortArrayInt(int arr[], int n);
void changeElInt(int arr[]);
#define init initArrayInt;
#define show showArrayInt;
#define findMin findMinInt;
#define findMax findMaxInt;
#define bSort bSortArrayInt;
#define changeEl changeElInt;

#elif FLOAT
void initArrayFl(float arr[], int n);
void showArrayFl(float arr[], int n);
void findMinFl(float arr[], int n);
void findMaxFl(float arr[], int n);
void bSortArrayFl(float arr[], int n);
void changeElFl(float arr[]);
#define init initArrayFl;
#define show showArrayFl;
#define findMin findMinFl;
#define findMax findMaxFl;
#define bSort bSortArrayFl;
#define changeEl changeElFl;

#elif CHAR
void initArrayCh(char arr[], int n);
void showArrayCh(char arr[], int n);
void findMinCh(char arr[], int n);
void findMaxCh(char arr[], int n);
void bSortArrayCh(char arr[], int n);
void changeElCh(char arr[]);
#define init initArrayCh;
#define show showArrayCh;
#define findMin findMinCh;
#define findMax findMaxCh;
#define bSort bSortArrayCh;
#define changeEl changeElCh;

#endif
#pragma once
