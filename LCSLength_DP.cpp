#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int lcs(char X[], char Y[], int m, int n) {
	if((m == 0) || (n == 0))
		return 0;
	if(X[m-1] == Y[n-1])
		return 1 + lcs(X,Y,m-1,n-1);
	else
		return max(lcs(X,Y,m-1,n), lcs(X,Y,m,n-1));
}

int max(int x, int y) {
	return (x > y)? x : y;
}

int main() {
	char X[] = "ABCDEF";
	char Y[] = "DEFIJK";
	
	int m = strlen(X);
	int n = strlen(Y);
	
	cout<<"Length of LCS is "<<lcs(X,Y,m,n);
	getch();
	return 0;
}
