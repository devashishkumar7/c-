
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    int i=1;
     char count='A';
    while (i<=n)
    { int j=1;
    while (j<=n)
    {
        cout <<count;
        cout<<"  ";
        count =count +1;
        j=j+1;
    }
i=i+1;
cout<<endl;
    }
}
