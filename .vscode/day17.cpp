#include<iostream>
using namespace std;
int main ()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        int space =i-1;
        while (space)
        {
            cout <<" ";
            space =space -1;
            }
        while (j<=n-i+1)
        {
            cout<<i;
            j=j+1;
 
        }
        i=i+1;
        cout<<" "<<endl;
  }
}                                                                                                

