
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    int i=1;
     
    while (i<=n)
    { int j=1;
    while (j<=n)
    {
       char sh ='A'+i+j-2;
        cout <<sh;
        cout<<"  ";
        j=j+1;
    }
i=i+1;
cout<<endl;
    }
}
