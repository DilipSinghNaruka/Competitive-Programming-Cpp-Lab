#include <iostream>
using namespace std;

int swapNum(int *a, int *b){

    
    int temp = *a;
*a = b;
    b = temp;
}

int main()
{
    cout << "Enter 2 Numbers :- " << endl;
    int a, b;
    cin >> a >> b;
    swapNum(a,b);
    // swap(a, b);
    cout << "This is a :- " << a << endl;
    cout << "This is b :- " << b << endl;
}