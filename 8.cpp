#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
     int arr[]={6,8,2,1,4};
          int size=sizeof(arr)/sizeof(int);
          for(int i=0;i<size;i++)
               cout<<arr[i]<<" ";
               cout<<endl;
          sort(arr,arr+5,greater<>());
          cout<<"desending order"<<endl;
          for(int i=0;i<size;i++)
               cout<<arr[i]<<" ";
     cout<<endl;
     return 0;
}
