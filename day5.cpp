#include<iostream>
using namespace std;
int main(){
    char ch;
    cout  <<"enter the value "<<endl;
    cin >> ch;
if (ch>='A' && ch<='Z')
{
    cout << ch <<" is upper case " <<endl;
}
 else if (ch>='a' && ch<='z')
{
    cout << ch <<" is lower case "<<endl;

}
else if (ch>='0' && ch<='9')
{
    cout <<ch <<" is a digit" <<endl;
}
return 0;
}
