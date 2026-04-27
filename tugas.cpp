#include <iostream>
#include <cmath>

using namespace std;

class Belahketupat;

class LayangLayang {
    private:
    int d1,d2,s1,s2;

public:
void inputDataL() {
    cout << "--Input Layang-Layang--"<<endl;
    cout << "Masukan Diagonal 1:"; cin >> d1;
    cout << "Masukan Diagonal 2:"; cin >> d2;
    cout << "Masukan Sisi Miring 1:"; cin >> s1;
    cout << "Masukan Sisi Miring 2:"; cin >> s2;
}
    
    double hitungluas() {
        return 0.5 * d1 * d2;
    }
void tampilkankeliling() {
    double hitung = 2 * (s1 + s2);
    cout << "keliling Layang Layang" << hitung << endl;
}

friend class Belahketupat;
};
class Belahketupat {
    private:
    int d1,d2,s;

public:
void inputData() {
    cout << "Masukan Diagonal 1:"; cin >> d1;
    cout << "Masukan Diagonal 2:"; cin >> d2;
    cout << "Masukan Sisi:"; cin >> s;
}
    double hitungluas() {
        return 0.5 * d1 * d2;
    }
void tampilkankeliling() {
  double keliling = 4 * s;
    cout << "keliling Belah Ketupat:" << keliling << endl;
}
};

int main() {
    LayangLayang objectlayang;
    Belahketupat objectBelah;

    cout << "--Input data belah ketupat--" << endl;
    objectBelah.inputData();

    cout << "--Hasil Perhitungan--" << endl;
    cout << "Luas Belah Ketupat:" << objectBelah.hitungluas() << endl;
    objectBelah.tampilkankeliling();

    cout << "--Input data LayangLayang--" << endl;
    objectlayang.inputDataL();

    cout << "--Hasil Perhitungan--" << endl;
    cout << "Luas Layang Layang:" << objectlayang.hitungluas() << endl;
    objectlayang.tampilkankeliling();
   

    return 0;
}