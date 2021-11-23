#include <iostream>
#include <vector>
using namespace std;

int main()
{   
	int n,a;
	cin>>n;
vector<int> d;
for(int i=0;i<n;i++)
{
  cin>>a;
  d.push_back(a);
}
	for (int i = 0; i < d.size(); i++)
	{
	  cout << d[i]<< " ";
		
	}
    return 0;
}
