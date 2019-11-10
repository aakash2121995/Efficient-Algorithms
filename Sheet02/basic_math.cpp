#include <iostream>
#include<cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int u,v,w;
		// cout<<"Enter u,v,w ";
		cin>>u>>v>>w;

		int max_factor = sqrt(w);

		// code for finding factors
		int start = 1,step_size=1;
		vector<int> factors,factors_large;
		int sqrt_root = sqrt(v);
		for (int factor = start; factor <= sqrt_root; factor+=step_size)
		{
			if(v%factor == 0){
				factors.push_back(factor);
				if(v/factor <= max_factor && factor*factor !=v)
					factors_large.push_back(v/factor);
			}
		}

		reverse(factors_large.begin(),factors_large.end());  
		factors.insert(factors.end(), factors_large.begin(),factors_large.end());

		bool found = false;

		for (int k = 0; k < factors.size() - 2; ++k)
		{
			
			for (int j = k+1; j < factors.size() - 1; ++j)
			{
				for (int l = j+1; l < factors.size(); ++l)
				{
					if(factors[k]*factors[j]*factors[l] == v && factors[k]*factors[k] + factors[j]*factors[j] + factors[l]*factors[l] == w){
						if(factors[k]+factors[j]+factors[l] == u){
						found=true;
						cout<<factors[k]<<' '<<factors[j]<<' '<<factors[l]<<endl;
						break;
						}

						if(-factors[k]+factors[j]-factors[l] == u){
						found=true;
						cout<<-factors[l]<<' '<<-factors[k]<<' '<<factors[j]<<endl;
						break;
						}
						if(factors[k]-factors[j]-factors[l] == u){
						found=true;
						cout<<-factors[l]<<' '<<-factors[j]<<' '<<factors[k]<<endl;
						break;
						}
						if(-factors[k]-factors[j]+factors[l] == u){
						found=true;
						cout<<-factors[j]<<' '<<-factors[k]<<' '<<factors[l]<<endl;
						break;
						}
					}
				}
				if(found)
					break;
				
			}
			if(found){
				break;
			}
		}

		if(!found)
			cout<<"empty set\n";
	}

	return 0;
}