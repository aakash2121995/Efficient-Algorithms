#include <iostream>
#include <vector>
#include<cmath>
#include<string>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	long double grid_size;
	long long n;
	long long grid_l,grid_r;
	cin >> n;
    scanf("%lld.%lld",&grid_l,&grid_r);
    long long grid_size_int = 100*grid_l + grid_r;
    char line[200];
    // cout<<"grid size "<<grid_size_int<<endl;
	for (int i = 0; i < n; ++i) {

		long long x_l,x_r,y_l,y_r;
		cin>>line;
		char*x1 = 


		if(x_l < 0)
			x_r = x_r*-1;
		if(y_l < 0)
			y_r = y_r*-1;
			
		long long x_int = 100*x_l + x_r;
		long long y_int = 100*y_l + y_r;

		long long x_coord,y_coord;
		// cout<<"x int "<<x_int<<endl;
		// cout<<"x  "<<x<<endl;

		printf("x = %lld y= %lld\n",x_int,y_int );


		if (x_int%grid_size_int ==0 || x_int >=0)
			x_coord = x_int/grid_size_int;
		else
			x_coord = x_int/grid_size_int - 1;

		if (y_int%grid_size_int ==0 || y_int >=0)
			y_coord = y_int/grid_size_int;
		else
			y_coord = y_int/grid_size_int - 1;
		

		long long x_normal = labs(grid_size_int*x_coord/100);
		long long x_frac = labs(grid_size_int*x_coord %100);

		long long y_normal = labs(grid_size_int*y_coord/100);
		long long y_frac = labs(grid_size_int*y_coord%100);

		string zero_y = "";

		if(y_frac <10){
			zero_y = "0";
		}

		string zero_x = "";
		if(x_frac <10){
			zero_x = "0";
		}

		if(x_coord < 0){
			printf("-");
		}
		cout<<x_normal<<'.'<<zero_x<<x_frac<<' ';
		// printf("%d.%s%d ", x_normal,zero_x,x_frac);

		if(y_coord < 0){
			printf("-");
		}
		cout<<y_normal<<'.'<<zero_y<<y_frac<<endl;
		// printf("%d.%s%d\n",y_normal,zero_y,y_frac );
		// printf("%d.%d %d.%d\n",x_normal,x_frac,y_normal,y_frac );
	}
	
	return 0;
}