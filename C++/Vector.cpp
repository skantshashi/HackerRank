#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> vect;
  for(int i=0;i<5;i++)
  {
      int n;
      cin>>n;
  vect.push_back(n);
  }
   for(int x:vect)
   {
       cout<<x<<" ";
   }
    return 0;
}