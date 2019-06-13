#include <iostream>
#include <string>
#include <ctime>
using namespace std;
const int MAX_ARR = 100000;
// 먼저 array를 max_heap으로 만든다
// 사실 root와 자식들만 max_heap으로 만든다......OTL
void Heapify(int arr[], int arrSize, int root)
{
	// 처음은 root(0번재 index)를 가리킨다
	int point = root;
	// 왼쪽 자식 위치
	int left = point * 2 + 1;
	// 오른쪽 자식 위치
	int right = point * 2 + 2;

	// 왼쪽 자식 값이 더 크면 왼쪽 자식을 가리키기
	if (left < arrSize && arr[point] < arr[left])
		point = left;
	// 오른쪽 자식 값이 더 크면 오른쪽 자식을 가리키기
	if (right < arrSize && arr[point] < arr[right])
		point = right;

	// 가리킨 노드와 부모(처음엔 root)를 swap
	if (point != root) // point가 root가 아니라면
	{
		swap(arr[point], arr[root]);
		// point를 기준으로 그 자식 노드와 비교를 한다.
		Heapify(arr, arrSize, point);
	}
}

// heap을 정렬한다
void HeapSort(int arr[], int arrSize)
{
	// 마지막 자식 노드부터 heapify
	for (int i = arrSize / 2 - 1; i >= 0; i--)
		Heapify(arr, arrSize, i);
	// root에서 하나씩 빼가면서 index가 0이 될때가지 heapify
	for (int i = arrSize - 1; i >= 0; i--)
	{
		// heapify된 arr[0]는 최대값이므로 마지막으로 보낸다.
		swap(arr[0], arr[i]);
		// swap했으니깐 다시 heapify
		Heapify(arr, i, 0);	// index 0 으로 arr에서 가장 큰 값을 보내라
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