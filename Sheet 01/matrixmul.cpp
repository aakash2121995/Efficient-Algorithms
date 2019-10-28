#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{

	int n;
	cin >> n;

	int m;
	cin >>m ;

	vector<int> index_i,index_j,values;
	
	index_i.reserve(m);
	index_j.reserve(m);
	values.reserve(m);

	for (int i = 0; i < m; ++i) {
		int index1,index2,value;
		cin>>index1>>index2>>value;

		index_i[i] = index1;
		index_j[i] = index2;
		values[i]  = value;
	}

	int b;

	cin>>b;

	std::vector<int> v(n);

	for(int i=0;i<b;i++){
		int index,value;

		cin>>index>>value;

		v[index] = value;

	}

	int row_ind = index_i[0];
	int col_ind = index_j[0];

	int element_sum = values[0]*v[col_ind];
	for(int i=1; i<m; i++){
		col_ind = index_j[i];
		if(row_ind == index_i[i]){
			element_sum += values[i]*v[col_ind];
		}
		else{
			if(element_sum != 0){
				cout<<row_ind<<' '<<element_sum<<endl;
			}
			row_ind = index_i[i];
			element_sum = values[i]*v[col_ind];
		}
	}
	if(element_sum != 0){
		cout<<row_ind<<' '<<element_sum<<endl;
	}


	return 0;
}