 //C++ program to find the integers which come an odd number of times in an array using C++ STL
#include<iostream>
#include<array>
using namespace std;
int oddinteger(array<int,7> ar)
{
      int result=0;
     cout<<" ";
     for(int i=0;i<ar.size();i++)
          cout<<ar[i]<<" ";
     for(int i=0;i<ar.size();i++)
          result=result^ar[i];
          return result;
}
int main()
{
     int r;
     array<int,7> ar{4,2,5,2,3,5,4};
     r=oddinteger(ar);
          cout<<"\n odd integer is  :  "<<r;
     cout<<endl;
     return 0;
}
