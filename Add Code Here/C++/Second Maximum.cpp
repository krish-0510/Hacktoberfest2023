#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n=3;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   sort(a,a+n);
	   cout<<a[1]<<endl;
	}
	return 0;
}
