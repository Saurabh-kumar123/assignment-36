#include<iostream>
#include<array>
using namespace std;
int main()
{
     array<int,4> arr{5,6,3,2};
     int c;
     for(auto i=arr.begin();i!=arr.end();i++)// iterator  begin & end
          c++;
     cout<<"element is : "<<c<<endl;
     return 0;
}
