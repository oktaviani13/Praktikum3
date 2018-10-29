# praktikum3


## Latihan1: Menampilkan Bilangan Terbesar dari Sejumlah Bilangan

**Alur algoritma**
1. Mendeklarasikan variable int i=0 int max=0 dari int n, a
2. Membaca input cin >> n
3. Membaca input cin >> a lalu mambandingkan a > max proses akan diulang selama kondisi i<n benar
4. Cetak max

**Prgram Flowchart**

![flowchart](https://github.com/oktaviani13/praktikum3/blob/master/flowchart1.png)


**Kode lengkap program**
```
#include<iostream>
using namespace std;

int main(){
    int i=0;
    int max=0;
    int n,a;

    cout << "masukan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++){
        cout << "masukan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;

    }

    cout << "bilangan terbesar adalah: " << max << endl;


}
```

**hasilnya**

![hasilnya](https://github.com/oktaviani13/praktikum3/blob/master/hasil1.PNGG)


## Latihan2 : Mengurutkan bilangan dari yang terkecil ke yang terbesar

**Alur algoritma**
1. Mendeklarasi variable int A,B,C sebagai variable input
2. Membaca input cin >> A >> B >> C
3. Membandingkan nilai variable A dengan variable B jika A lebih kecil dari pada B
4. Membandingkan kembali variable A dengan variable C 
5. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,B,C
6. Jika kondisi *False* bandingkan kembali variable A dengan variable C jika A lebih kecil dari C
7. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,C,B
8. Jika kondisi *False* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,A,B
9. Kemudian jika A lebih kecil dari C
10. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C
11. Jika kondisi *False* bandingkan kembali variable B dengan variable C jika B lebih kecil dari C
12. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C
13. Jika kondisi *False* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,B,A

**Prgram Flowchart**

![flowchart](https://github.com/oktaviani13/praktikum3/blob/master/flowchart2.png)


**Kode lengkap program**
```
#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "masukan bilangan 1: ";
    cin >> a;
    cout << "masukan bilangan 2: ";
    cin >> b;
    cout << "masukan bilangan 3: ";
    cin >> c;

    if (a < b)
        if (b < c)
        cout << "urutkan bilangan: " << a << "," << b << "," << c << endl;
    else
    {   if (a < c)
        cout << "urutkan bilangan: " << a << "," << c << "," << b << endl;
        else
            cout << "urutkan bilangan: " << c << "," << a << "," << b << endl;
    }

    else {
        if (a < c)
            cout << "urutan bilangan: " << b << "," << a << "," << c << endl;
        else {
            if (b < c)
            cout << "urutan bilangan: " << b << "," << c << "," << a << endl;
            else
            cout << "urutan bilangan: " << c << "," << b << "," << a << endl;

        }
    }
}
```
**hasilnya**

![hasilnya](https://github.com/oktaviani13/praktikum3/blob/master/hasil2.PNG)



## Latihan3 : Mengurutkan Bilangan Tengah dari 3 buah Bilangan Bulat

**Alur algoritma**
1. Mendeklarasi variable int A,B,C sebagai variable input
2. Membaca input cin >> A >> B >> C
3. Membandingkan nilai variable A dengan variable B jika A lebih kecil dari pada B
4. Membandingkan kembali variable A dengan variable C 
5. Jika kondisi *True* maka cetaklah bilangan tengah yaitu B
6. Jika kondisi *False* bandingkan kembali variable A dengan variable C jika A lebih kecil dari C
7. Jika kondisi *True* maka cetaklah bilangan tengah yaitu C
8. Jika kondisi *False* maka cetaklah bilangan tengah yaitu A
9. Kemudian jika A lebih kecil dari C
10. Jika kondisi *True* maka cetaklah bilangan tengah yaitu A
11. Jika kondisi *False* bandingkan kembali variable B dengan variable C jika B lebih kecil dari C
12. Jika kondisi *True* maka cetaklah bilangan tengah yaitu C
13. Jika kondisi *False* maka cetaklah bilangan tengah yaitu B

**Prgram Flowchart**

![flowchart](https://github.com/oktaviani13/praktikum3/blob/master/flowchart3.jpg)


**Code lengkap program**
```
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
```

**hasilnya**

![hasilnya](https://github.com/oktaviani13/praktikum3/blob/master/hasil3.PNG)