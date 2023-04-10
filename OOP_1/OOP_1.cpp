#include <iostream>
using namespace std;

class Mahasiswa 
{
public:				// Akses Modifier
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
private:			// Akses Modifier
	int sks;
	string kode;
	string namaMk;
public:				// Akses modifier
	void inputMk()			//Prosedur / Metode / Fungsi => bagian dari Member
	{
		cout << "========================\n";
		cout << "\nMasukkan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukkan Kode MK = ";
		cin >> kode;
		cout << "\nMasukkan Nama MK = ";
		cin >> namaMk;
	}

	void tampilMk()			//Prosedur / Metode / Fungsi => bagian dari Member
	{
		cout << "========================\n";
		cout << "\nJumlah SKS = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk << endl;

	}
};

int main()
{
	Mahasiswa mhs;		// Objek
	Matakuliah Mk;		// Objek

	cout << "\nMasukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.nama;
	
	mhs.tampil();
	Mk.inputMk();
	Mk.tampilMk();
	
}

// Bagian dari Member:
// 1. Konstanta
// 2. Variable
// 3. Fungsi/Procedur (Metode)