#include<iostream>
#include<math.h>
#include<array>
using namespace std;
int divisor(int a,int b)
{
int sin,y;
     sin=(a<0)^(b<0);
     a=abs(a);
     b=abs(b);
     y=exp(log(a)-log(b))+0.0000001;
      return (sin==0)?y:-y;
}
int main()
{
      int s=5;
     array<int,5> num={-1,2,0,4,0};
     int ar[s],k=1,co,i;
     for(i=0;i<s;i++)
     {
          if(num[i]!=0)
               k=k*num[i];
               else
                    co++;
     }
     for(i=0;i<s;i++)
     {
        if(co>1)
          ar[i]=0;
        else if(co==1)
        {
             if(num[i]!=0)
               ar[i]=0;
             else
               ar[i]=k;
        }
        else if(num[i]!=0)
          ar[i]=divisor(k,num[i]);
     }
     for(i=0;i<s;i++)
          cout<<" "<<ar[i];
     return 0;
}

