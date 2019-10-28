#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{

	int n;
	cin >> n;

	long long ans=0;

	long long x1,y1,x1_,y1_;

	if(n==1){
		cin>>x1>>y1;
		cout<<"0";
	}
	else if(n==2){
		cin>>x1>>y1;
		cin>>x1_>>y1_;
		cout<<"0";
	}
	else{
		cin>>x1>>y1;
		x1_ = x1;
		y1_ = y1;
		for (int i = 1; i < n; ++i) {
			long long x2,y2;
			
			cin >> x2 >> y2;
			
			ans += x1*y2 - y1*x2;
			x1=x2;
			y1=y2;
		}
		ans += x1*y1_ - y1*x1_;
		ans = abs(ans);
		cout<<ans/2;
		if(ans%2 == 1){
			cout<<".5";
		}
	}
	

	return 0;
}