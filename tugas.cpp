#include <iostream>
#include <cmath>

using namespace std;

class Belahketupat;

class LayangLayang {
    private:
    int d1,d2,s1,s2;

public:
void input() {
    cout << "--Input Layang-Layang--"<<endl;
    cout << "Masukan Diagonal 1:"; cin >> d1;
    cout << "Masukan Diagonal 2:"; cin >> d2;
    cout << "Masukan Sisi Miring 1:"; cin >> s1;
    cout << "Masukan Sisi Miring 2:"; cin >> s2;
}
    double hitungkeliling() {
        return 2 * (s1 + s2);
    }
    double hitungluas() {
        return 0.5 * d1 * d2;
    }
void display() {
    cout << "Hasil layang Layang" << endl;
    cout << "Luas:" << hitungluas() << endl;
    cout << "keliling:" << hitungkeliling() << endl;
}
friend class Belahketupat;

class Belahketupat {
    private:
    int d1,d2,s;

public:
void input() {
    cout << "--Input BelahKetupat--"<<endl;
    cout << "Masukan Diagonal 1:"; cin >> d1;
    cout << "Masukan Diagonal 2:"; cin >> d2;
    cout << "Masukan Sisi:"; cin >> s;
}
    double hitungkeliling() {
        return 4 * s;
    }
    double hitungluas() {
        return 0.5 * d1 * d2;
    }
void display() {
    cout << "Hasil Belahketupat" << endl;
    cout << "Luas:" << hitungluas() << endl;
    cout << "keliling:" << hitungkeliling() << endl;
}
};

int main() {
    LayangLayang ll;
    Belahketupat bk;

    ll.input();
    bk.input();

    ll.display();

    
}