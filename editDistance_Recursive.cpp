#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int min3(int x, int y, int z) {
	return min(min(x,y),z);
}

int min(int x, int y) {
	return (x < y)?x:y;
}

int editDist(string str1 , string str2 , int m ,int n) {
	if(m == 0) return n;
	else if(n == 0) return m;
	
	else if(str1[m-1] == str2[n-1])
		return editDist(str1, str2, m-1, n-1);
		
	else
		return 1 + min3(editDist(str1, str2, m, n-1), editDist(str1, str2, m-1, n), editDist(str1, str2, m-1, n-1));
}

int main()
{
    string str1 = "sunday";
    string str2 = "saturday";
 
    cout << editDist( str1 , str2 , str1.length(), str2.length());
 
	getch();
	return 0;
}
