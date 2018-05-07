#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a = 0;
	int max = 0;
	char b;
	while (!EOF) {
		cin>>b;
		if (b == '0') a++; else a = 0;
		if (a>max) max = a;
	}
	cout<<max;

	return 0;
}