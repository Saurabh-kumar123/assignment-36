#include<iostream>
#include<array>
using namespace std;
int main()
{
     // only focusing for <int,0> index empty
     array<int,0> arr{};
     array<int,3>ar{};
     array<int,3>a{4,7,9};
     array<int,4>as{2,1,45,3};
     cout<<arr.empty()<<endl;
     cout<<ar.empty()<<endl;
     cout<<a.empty()<<endl;
     cout<<as.empty()<<endl;
     if(arr.empty())
          cout<<"empty"<<endl;
     else
          cout<<"not empty"<<endl;
     if(ar.empty())
          cout<<"empty"<<endl;
     else
          cout<<"not empty"<<endl;
          if(a.empty())
          cout<<"empty"<<endl;
     else
          cout<<"not empty"<<endl;
          if(as.empty())
          cout<<"empty"<<endl;
     else
          cout<<"not empty"<<endl;
     return 0;
}
