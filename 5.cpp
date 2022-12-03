#include<iostream>
#include<array>
using namespace std;
int main()
{
     array<int,5> arr{7,2,1,9,3};
     array<string,3> str{"saurabh","kumar","pal"};
     for(int i : arr)
          cout<<i<<" ";
     cout<<endl;
     for(auto i=arr.rbegin();i!=arr.rend();i++)
          cout<<*i<<" ";
          cout<<endl;
          for(auto i=str.rbegin();i!=str.rend();i++)
          cout<<*i<<" ";
                    cout<<endl;
          for(auto i=arr.rend()-1;i!=arr.rbegin()-1;i--)
          cout<<*i<<" ";
     return 0;
}
