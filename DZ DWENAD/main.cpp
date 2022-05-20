#include "main.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int d = 0;
	cout << "размер массива дабл: ";
	if (!(cin >> d))
	{
		cout << "ошибка ввода!";
		return 1;
	}
	double* da = new double[d];
	cout << "заполнение массива дабл: ";
	fillArr(da, d);

	int is = 0;
	cout << "размер массива инт: ";
	if (!(cin >> is))
	{
		cout << "ошибка ввода!";
		return 1;
	}
	int* ia = new int[is];
	cout << "заполнение массива инт: ";
	fillArr(ia, is);

	cout << "Неотсортированный массив инт: " << endl;
	printArr(ia, is);
	Sort(ia, is);
	cout << "Отсортированный массив инт: " << endl;
	printArr(ia, is);

	cout << "Неотсортированный массив дабл: " << endl;
	printArr(da, d);
	Sort(da, d);
	cout << "Отсортированный массив дабл: " << endl;
	printArr(da, d);
}

template <typename T>
void Sort(T* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		int key = i;
		double mini = arr[i];
		for (int j = i; j < size; j++)
		{
			if (arr[j] < mini)
			{
				mini = arr[j];
				key = j;
			}
		}
		if (key != i)
		{
			swap(arr[i], arr[key]);
		}
	}
}
template <typename T>
void printArr(T* A, int s) {
	for (int i = 0; i < s; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

template <typename T>
void fillArr(T* A, int s) {
	for (int i = 0; i < s; i++)
	{
		if (!(cin >> A[i]))
		{
			i = i - 1;
			continue;
		}
	}
}