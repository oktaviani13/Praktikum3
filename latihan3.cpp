#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"Masukan bilangan 1: ";
    cin>> A;
    cout<<"Masukan bilangan 2: ";
    cin>> B;
    cout<<"Masukan bilangan 3: ";
    cin>> C;

    if (A<B){
      if (B<C)
            cout<< "Bilangan Tengah Adalah:"  << B << endl;
    else
        if (A<C)
            cout << "Bilangan Tengah Adalah: " << C << endl;
        else cout << " Bilangan Tengah Adalah: " << A << endl;
    }else {
    if (A<C)
        cout << " Bilangan Tengah Adalah: " << A <<  endl;
    else
        if (B<C)

        cout<< "Bilangan Tengah Adalah: " << C << endl;
    else
        cout << " Bilangan Tengah Adalah: " << B <<  endl;
    }


}
