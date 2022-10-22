#include <iostream>
#include "function.h"

using namespace std;
//��� ���� integer
void initArrayInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100; //���������� ������� ���������� ������� �� 100
}

void showArrayInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "������ ����� ���� int " << arr[i] << " ";
}

void findMinInt(int arr[], int n) {
    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min); //������� ��� ����� �������� ��� ������������� ���������� ����� ������� ����
    cout << "����������� ��������: " << min << endl;
}


void findMaxInt(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "������������ ��������: " << max << endl;
}


void bSortArrayInt(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 1; j < n; j++)
            if (arr[j] > arr[i])
                swap(arr[i], arr[j]); //����!
}


void changeElInt(int arr[]) {
    int k, znach;
    cout << "������� ����� �������� �������� �������� �� ������ �� ��������" << endl;
    cin >> k;
    cout << "������� ����� �������� " << endl;
    cin >> znach;
    arr[k + 1] = znach;

}
//��� ���� float
void initArrayFl(float arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100 + (float)(rand() % 100 / 100);
}

void showArrayFl(float arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "������ ����� ���� float " << arr[i] << " ";
}


void findMinFl(float arr[], int n) {
    float min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min);
    cout << "����������� ��������: " << min << endl;
}


void findMaxFl(float arr[], int n) {
    float max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "������������ ��������: " << max << endl;
}


void bSortArrayFl(float arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 1; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
}


void changeElFl(float arr[]) {
    int k;
    float znach;
    cout << "������� ����� �������� �������� �������� �� ������ �� ��������" << endl;
    cin >> k;
    cout << "������� ����� �������� " << endl;
    cin >> znach;
    arr[k + 1] = znach;
}

// ������ char
void initArrayCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

void showArrayCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << "������ ����� ���� char " << arr[i] << " ";
}

void findMinCh(char arr[], int n) {
    char min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min);
    cout << "����������� ��������: " << min << endl;
}

void findMaxCh(char arr[], int n) {
    char max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "������������ ��������: " << max << endl;
}

void bSortArrayCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);

}

void changeElCh(char arr[]) {
    int k;
    char znach;
    cout << "������� ����� �������� �������� �������� �� ������ �� ��������" << endl;
    cin >> k;
    cout << "������� ����� �������� " << endl;
    cin >> znach;
    arr[k + 1] = znach;

}