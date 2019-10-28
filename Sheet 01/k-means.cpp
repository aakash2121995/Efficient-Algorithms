#include <iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{

	int n;
	cin >> n;

	long long  sum=0;
	for (int i = 0; i < n; ++i) {
		long long x,y;
		cin >> x >> y;
		sum+= x*x + y*y;
	}

	cout<<sum<<".000000000000000000000000000000";
	return 0;
}