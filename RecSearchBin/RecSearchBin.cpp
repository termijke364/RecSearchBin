#include <iostream>

using namespace std;

void CreateMassive(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10 + 1;
}

void PrintMassive(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
}

int BinarySearch(int arr[], int start, int size, int key)
{
	int middle = (start + size) / 2;

	if (start > size)
		return -1;

	if (key == arr[middle])
		return middle;

	else if (key < arr[middle])
		return BinarySearch(arr, start, size - 1, key);

	else
		return BinarySearch(arr, start + 1, size, key);
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int const size = 10;
	int arr[size]{};

	CreateMassive(arr, size);
	PrintMassive(arr, size);

	cout << endl;

	int key;
	cout << "Введите искомое число: " << endl;
	cin >> key;

	cout << "Индекс искомого числа в массиве: " << BinarySearch(arr, 0, size - 1, key) << endl;

	return 0;
}