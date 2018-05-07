#include <iostream>
using namespace std;
int main()
{
 
    cout << "Enter number: ";
    int digit;
    cin >> digit;
    cout<< "Vse deliteli:";
    for(int i=2;i<=(digit/2);i++)
        if(digit%i==0)
            cout << i << endl;
    return 0;
