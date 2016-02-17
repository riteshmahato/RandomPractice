#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int lcs(char X[], char Y[], int m, int n) {
	int LCS[m+1][n+1];
	for(int i = 0; i <= m; i++) {
		for(int j = 0; j <= n; j++) {
			if((i == 0) || (j == 0)) 
				LCS[i][j] = 0;
				
			else if(X[i-1] == Y[j-1])
				LCS[i][j] = LCS[i-1][j-1] + 1;
				
			else
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
		}
	}
	return LCS[m][n];
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
