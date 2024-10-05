#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the sp & cp"<<endl;
    int sp;
    int cp;
    cin >>sp>>cp;
    int profit = sp - cp;
    if (profit >0)
    {
        cout <<"profit"<<endl;
    }
    else {
        cout <<"loss"<<endl;
    }
}
