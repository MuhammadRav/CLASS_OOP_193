#include <iostream>
using namespace std;

class Mahasiswa 
{
public:
	int NIM;
	string nama;
	void tampil()
	{
		cout << "\nNIM = " << NIM;
		cout << "\nNama = " << nama;
		cout << "\n";
	}
};

class Matakuliah
{
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMk()
	{
		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukkan Kode MK = ";
		cin >> kode;
		cout << "\nMasukkan Nama MK = ";
		cin >> namaMk;
	}

	void tampilMk()
	{
		cout << "\nJumlah SKS = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk << endl;

	}
};

int main()
{
	Mahasiswa mhs;
	Matakuliah Mk;

	cout << "\nMasukkan NIM = ";
	cin >> mhs.NIM;
	cout << "\nMasukkan Nama = ";
	cin >> mhs.nama;
	
	mhs.tampil();
	Mk.inputMk();
	Mk.tampilMk();
	
}
