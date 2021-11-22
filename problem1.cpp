#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0,i=n-1;j<n;j++,i--)
    {
        temp[j]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}