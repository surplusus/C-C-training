#include <iostream>
#include <string>
#include <ctime>
using namespace std;
const int MAX_ARR = 100000;
// ���� array�� max_heap���� �����
// ��� root�� �ڽĵ鸸 max_heap���� �����......OTL
void Heapify(int arr[], int arrSize, int root)
{
	// ó���� root(0���� index)�� ����Ų��
	int point = root;
	// ���� �ڽ� ��ġ
	int left = point * 2 + 1;
	// ������ �ڽ� ��ġ
	int right = point * 2 + 2;

	// ���� �ڽ� ���� �� ũ�� ���� �ڽ��� ����Ű��
	if (left < arrSize && arr[point] < arr[left])
		point = left;
	// ������ �ڽ� ���� �� ũ�� ������ �ڽ��� ����Ű��
	if (right < arrSize && arr[point] < arr[right])
		point = right;

	// ����Ų ���� �θ�(ó���� root)�� swap
	if (point != root) // point�� root�� �ƴ϶��
	{
		swap(arr[point], arr[root]);
		// point�� �������� �� �ڽ� ���� �񱳸� �Ѵ�.
		Heapify(arr, arrSize, point);
	}
}

// heap�� �����Ѵ�
void HeapSort(int arr[], int arrSize)
{
	// ������ �ڽ� ������ heapify
	for (int i = arrSize / 2 - 1; i >= 0; i--)
		Heapify(arr, arrSize, i);
	// root���� �ϳ��� �����鼭 index�� 0�� �ɶ����� heapify
	for (int i = arrSize - 1; i >= 0; i--)
	{
		// heapify�� arr[0]�� �ִ밪�̹Ƿ� ���������� ������.
		swap(arr[0], arr[i]);
		// swap�����ϱ� �ٽ� heapify
		Heapify(arr, i, 0);	// index 0 ���� arr���� ���� ū ���� ������
	}

}

void MakeRandArr(int arr[], int arrSize)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		int cnt = i;
		arr[i] = rand() % arrSize;
		while (cnt--)
			if (arr[i] == arr[cnt])
				i--;
	}
}

int main()
{
	int arr[MAX_ARR] = { 0,};
	MakeRandArr(arr, MAX_ARR);
	for (int i = 0; i < MAX_ARR; i++)
		cout << arr[i] << " ";
	cout << endl << endl;
	HeapSort(arr, MAX_ARR);
	//Heapify(arr, 5, 0);
	for (int i = 0; i < MAX_ARR; i++)
		cout << arr[i] << " ";
	return 0;
}