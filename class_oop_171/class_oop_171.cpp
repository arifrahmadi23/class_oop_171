#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMk() {

		cout << "\nMasukan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukan Kode MK = ";
		cin >> kode;
		cout << "\nMasukan Nama MK = ";
		cin >> namaMk;
	}

	void tampilMK() {
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk << endl;

	}
};

int main() {
	Mahasiswa mhs;
	MataKuliah Mk;

	cout << "Masukan NIM = ";
	cin >> mhs.nim;
	cout << "Masukan Nama = ";
	cin >> mhs.nama;

	mhs.tampil();
	Mk.tampilMK();
	Mk.inputMk();
};
			 