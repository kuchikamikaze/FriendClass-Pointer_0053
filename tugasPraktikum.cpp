#include <iostream>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    float d1, d2, a, b;

public:
    void input() {
        cout << "=== Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi a: ";
        cin >> a;
        cout << "Masukkan sisi b: ";
        cin >> b;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (a + b);
    }

    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
    }

    // friend function untuk akses ke keliling
    friend float kelilingLayang(LayangLayang l);
};

float kelilingLayang(LayangLayang l) {
    return l.keliling();
}

class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " << keliling() << endl;
    }

    // menggunakan friend function dari Layang-Layang
    void tampilKelilingLayang(LayangLayang l) {
        cout << "\n[Friend Access]" << endl;
        cout << "Keliling Layang-Layang (diakses dari Belah Ketupat): "<< kelilingLayang(l) << endl;
    }
};

int main() {
    LayangLayang l;
    BelahKetupat b;

    l.input();
    l.output();

    b.input();
    b.output();

    // akses friend
    b.tampilKelilingLayang(l);

    return 0;
}