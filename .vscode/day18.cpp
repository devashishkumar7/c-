#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count =i;
    while (i<=n)
    {
        int space =n-i;
        while (space)
        {
            cout <<"  ";
            space=space -1;

        }
        int j=1;
        while (j<=i)
        {
            cout <<count <<" ";
            count =count +1;
            j=j+1;
        }
        i=i+1;
        cout << " "<<endl; 
    }
}