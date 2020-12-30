#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
//    cout<<"Comparing "<<a<<" "<<b<<endl;
    // return a<b; //ascending
    return a>b; //descending
}


void sort(int i,int n,bool (*compare)(int,int))
{
	int a,b;
  if(compare(i+1,i)) swap(a,b);
}
  


int main()
{
    
    sort(1,10,compare);
}

