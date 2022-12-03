#include<iostream>
#include<array>
using namespace std;
int main()
{
     array<int,5> values{10,20,30,40,50};
     array<char,10> val{'s','a','u','r','a','b','h'};
     // get all values
     cout<<"1 index : "<<values[0]<<endl;
     cout<<"2 index : "<<values[1]<<endl;
     cout<<"3 index : "<<values[2]<<endl;
     cout<<"4 index : "<<values[3]<<endl;
     cout<<"5 index : "<<values[4]<<endl;
     // set & change some values
     values[0]=100;
     values[4]=200;
     // print all values
     cout<<endl;
     for(int i : values)
          cout<<i<<" ";
          cout<<endl;
          for(char i : val)
               cout<<i;
          cout<<endl;
     return 0;
}
