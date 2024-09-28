#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while (i<=n)
    {
        int number= n-i+1;
         int count=1;
        while(number)
        {
           
            cout << count<<" ";
            number=number-1;
            count =count+1;
        }
        int j=1;
        while(j<=i-1)
        {
            cout <<"*"<<" "; 
            j=j+1;
        }
        int star =i-1;
        while (star)
        {
            cout<<"*"<<" ";
            star=star-1;
        
        }
        int num =n-i+1;
        while (num)
        {
            cout << j<<" ";
            num=num-1;
            j=j+1;
        }
         i=i+1;
        cout<<" "<<endl;
    }
}