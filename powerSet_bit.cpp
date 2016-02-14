#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4};
	int n = 0.0;
	for(int i = 1; i < 16;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i&(1<<j))
				printf("%d",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
