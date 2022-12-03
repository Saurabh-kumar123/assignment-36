#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
     array<int,5> arr{4,6,7,8,2};
     cout<<"value is : "<<arr[2]<<endl;
     //second method is
     cout<<"value is : "<<arr.at(4)<<endl;
     // third method
     cout<<"value is : "<<get<0>(arr)<<endl; // first add header tuple
     return 0;
}
