#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void daireHesaplama() {
	double yariCap;
	cout << "Yaricapi Giriniz: ";
	cin >> yariCap;
	double alan = M_PI * yariCap * yariCap;
	double cevre = 2 * M_PI * yariCap;
	cout << "Dairenin Alani: " << alan << endl;
	cout << "Dairenin Cevresi: " << cevre << endl;
}

void dikdortgenHesaplama() {
	double uzunluk, genislik;
	cout << "Uzunlugu Giriniz: ";
	cin >> uzunluk;
	cout << "Genisligi Giriniz: ";
	cin >> genislik;
	double alan = uzunluk * genislik;
	double cevre = 2 + (uzunluk + genislik);
	cout << "Dikdortgenin Alani: " << alan << endl;
	cout << "Dikdortgenin Cevresi: " << cevre << endl;
}

void ucgenHesaplama() {
	double taban, yukseklik;
	cout << "Tabani Giriniz: ";
	cin >> taban;
	cout << "Yuksekligi Giriniz: ";
	cin >> yukseklik;
	double alan = (taban * yukseklik) / 2;
	cout << "Ucgenin Alani: " << alan << endl;
}

void küreHesapla() {
	double yaricap;
	cout << "Yaricapi giriniz: ";
	cin >> yaricap;
	double yuzeyAlani = 4 * M_PI * yaricap * yaricap;
	double hacim = (4.0 / 3.0) * M_PI * pow(yaricap, 3);
	cout << "Kurenin Yuzey Alani: " << yuzeyAlani << endl;
	cout << "Kurenin Hacmi: " << hacim << endl;
}

void dPrizmaHesapla() {
	double uzunluk, genislik, yukseklik;
	cout << "Uzunlugu giriniz: ";
	cin >> uzunluk;
	cout << "Genisligi Giriniz: ";
	cin >> genislik;
	cout << "Yuksekligi Giriniz: ";
	cin >> yukseklik;
	double yuzeyAlani = 2 * (uzunluk * genislik + uzunluk * yukseklik + genislik * yukseklik);
	double hacim = uzunluk * genislik * yukseklik;
	cout << "Dikdortgenler Prizmansinin Yuzey Alani: " << yuzeyAlani << endl;
	cout << "Dikdortgenler Prizmansinin Hacmi: " << hacim << endl;
}


int main() {

	int choice;

	cout << endl;
	cout << "--------Geomteri Hesap Makinesi--------" << endl;
	cout << "1. Dairenin Alani ve Cevresi" << endl;
	cout << "2. Dikdortgenin Alani ve Cevresi" << endl;
	cout << "3. Ucgenin Alani" << endl;
	cout << "4. Kurenin Yuzey Alani ve Cevresi" << endl;
	cout << "5. Dikdortgenler Prizmasinin Yuzey Alani ve Hacmi" << endl;
	cout << "0. Cikis" << endl;
	cout << "Bir secenek Giriniz: ";
	cin >> choice;

	switch (choice) {
	case 1:
		daireHesaplama();
		break;
	case 2:
		dikdortgenHesaplama();
		break;
	case 3:
		ucgenHesaplama();
		break;
	case 4:
		küreHesapla();
		break;
	case 5:
		dPrizmaHesapla();
		break;
	case 0:
		cout << "Cikis yapiliyor..." << endl;
		break;

	default:
		cout << "Gecersiz secenek! Lütfen tekrar deneyin." << endl;
		break;
	}
	while (choice != 0);

	return 0;
}