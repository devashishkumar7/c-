#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
char count = 'a';

    for (int i=1;i<n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}