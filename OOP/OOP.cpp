#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
		cout << "Masukan nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNama : " << nama;
	cout << "\nnilai : " << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK(){
		cout << "\n\nMasukan kode matakuliah : ";
	cin >> kode;
	cout << "Masukan nama matakuliah : ";
	cin >> namaMK;
	cout << "Masukan SKS : ";
	cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nkode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaMK;
		cout << "\nsks : " << sks;
	}
};

