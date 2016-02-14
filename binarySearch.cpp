#include <iostream>
using namespace std;

int findLeftPos(int arr[],int left,int right,int key);
int findRightPos(int arr[],int left,int right,int key);

int main() {
	int arr[] = {1,2,2,2,3,4,6,8,11,23};
	int left = findLeftPos(arr,0,9,2);
	int right = findRightPos(arr,0,9,2);
	cout<<(right-left)-1;
	return 0;
}

int findLeftPos(int arr[],int left,int right,int key)
{
	int middle;
	while(right-left > 1)
	{
		middle = left + (right - left)/2;
		if(arr[middle] >= key)
			right = middle;
		else
			left = middle;
	}
	return left;
}
int findRightPos(int arr[],int left,int right,int key)
{
	int middle;
	while(right-left > 1)
	{
		middle = left + (right - left)/2;
		if(arr[middle] <= key)
			left = middle;
		else
			right = middle;
	}
	return right;
}
