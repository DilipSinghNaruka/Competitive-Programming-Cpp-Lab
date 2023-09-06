// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     float f;
//     cout<<"Enter an interger: ";
//     cin>>n;
//     f = static_cast<float>(n);
//     cout<<"The floadting point number corresponding to "<<n<<"is"<<f<<endl;
//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int n;
    float f;

    cout << "Enter an integer: ";
    cin >> n;

    f = float(n);

    cout << "The floating point number corresponding to " << n << " is " << f << endl;

    return 0;
}

