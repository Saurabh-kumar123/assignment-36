#include<iostream>
#include<array>
using namespace std;
int main()
{
     array<int,5> arr{6,3,1,2,98};
     cout<<"first value : "<<arr[0]<<endl;
     cout<<"last value : "<<arr[4]<<endl;
     // using front & back function
     cout<<"first value : "<<arr.front()<<endl; //  front & back value base work perform
     cout<<"last value : "<<arr.back()<<endl;
     return 0;
}
