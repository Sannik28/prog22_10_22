// prog.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <time.h>
#include <iostream>
#include<Windows.h>
#include "function.h"
#define n 10 //размер массива
#define INTEGER 

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //srand(time(0));
    int arr[n];
    cout << "Создание массива \n";
    init(arr, n);
    show(arr, n);
    cout << endl;
    cout << "Сортировка массива: \n";
    bSort(arr, n);
    show(arr, n);
    cout << endl;
    cout << "Нахождение миинимального элемента массива: \n";
    findMin(arr, n);
    cout << endl;
    cout << "Нахождение максимального элемента массива: \n";
    findMaxInt(arr, n);
    cout << endl;
    cout << "Корректировка элемента массива: \n";
    changeElInt(arr);
#undef INTEGER

#define FLOAT
#include "function.h"
    cout << endl;
    float arr1[n];
    cout << "Создание массива float\n" << endl;
    cout << "Массив:" << endl;
    init(arr1, n);
    show(arr1, n);
    cout << endl << endl;
    cout << "Сортировка массива: " << endl;
    bSort(arr1, n);
    show(arr1, n);
    cout << endl << endl;
    findMin(arr1, n);
    cout << endl;
    findMax(arr1, n);
    cout << endl;
    changeEl(arr1);
#undef FLOAT

#define CHAR
#include "function.h"
    cout << endl;
    char arr2[n];
    cout << "Создание массива char\n" << endl << endl;
    cout << "Array:" << endl;
    init(arr2, n);
    show(arr2, n);
    cout << endl << endl;
    cout << "Сортировка массива char: " << endl;
    bSort(arr2, n);
    show(arr2, n);
    cout << endl << endl;
    findMin(arr2, n);
    cout << endl;
    findMax(arr2, n);
    cout << endl;
    changeEl(arr2);

#undef CHAR
}

