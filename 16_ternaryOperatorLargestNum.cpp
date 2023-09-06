#include <iostream>
using namespace std;

int main()
{

    int n1, n2, max;
    cout<<"Take input A and B : ";
    cin>>n1>>n2;
    max = (n1 > n2) ? n1 : n2;

    cout << "Largest number between "
         << n1 << " and " << n2
         << " is " << max << ".";

    return 0;
}

