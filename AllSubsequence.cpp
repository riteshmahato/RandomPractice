#include <iostream>
using namespace std;

void subsets(int i,int arr[],bool jugaad[]);
int main() {
	int arr[] = {1,2,3,4};
	bool jugaad[] = {0,0,0,0};
	
	subsets(0,arr,jugaad);
	return 0;
}

void subsets(int i,int arr[],bool jugaad[])
{
	int n = 4;
	if (i == n) 
	{
    for (int j = 0; j < n; j++)
      if (jugaad[j])
        printf("%d ", arr[j]);
    printf("\n");
  	} 
  	else 
  	{
    	jugaad[i] = 1;
    	subsets(i + 1,arr,jugaad);
    	jugaad[i] = 0;
    	subsets(i + 1,arr,jugaad);
  	}
}
