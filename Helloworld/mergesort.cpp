#include <iostream>
#include <string>
using namespace std;
const int ARRSIZE = 12;
void MergeSort(int aBuffer[], int arr[], int strIdx, int endIdx)
{
	int bufSize = endIdx - strIdx + 1;
	int center = (endIdx + strIdx) / 2 + 1;
	int Lpos = strIdx;
	int Rpos = center;
	int srtBuf = strIdx;

	if (endIdx != strIdx)
	{
		MergeSort(aBuffer, arr, strIdx, center-1);
		MergeSort(aBuffer, arr, center, endIdx);
	}

	while (Lpos < center && Rpos <= endIdx)
	{
		if (arr[Lpos] <= arr[Rpos])
			aBuffer[srtBuf++] = arr[Lpos++];
		else 
			aBuffer[srtBuf++] = arr[Rpos++];
	}
	for (int i = 0; i < bufSize; i++)
	{
		if (Lpos < center && Rpos <= endIdx)
		{
			if (arr[Lpos] <= arr[Rpos])
				aBuffer[srtBuf++] = arr[Lpos++];
			else
				aBuffer[srtBuf++] = arr[Rpos++];
		}
		if (Lpos >= center)
			aBuffer[srtBuf++] = arr[Rpos++];
		if (Rpos >= center)
			aBuffer[srtBuf++] = arr[Lpos++];
	}

	for (int i = strIdx; i<=endIdx;i++)
		arr[i] = aBuffer[i];
}

int main()
{
	int arr[12] = {26,5,77,1,61,11,59,15,76,24,3,2};
	int * aBuffer = new int[ARRSIZE+1]();

	MergeSort(aBuffer, arr, 0, ARRSIZE-1);

	for (int i = 0; i < ARRSIZE; i++)
	{
		cout << arr[i] << " ";
	}
	

	return 0;
}