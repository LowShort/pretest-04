/*
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Single Linked List dengan sorting
* Tgl : 27 03 2019
*/

#include<iostream>
#include<iomanip>

using namespace std;

struct ElemtList {
	char npm[14]; 
	char nama[40];
	float ipk;
	ElemtList* next; 
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First) {
	First = NULL;
}
void createElement(pointer& pBaru) {
	pBaru = new ElemtList; // alokasi
	cout << "Masukkan NPM : ";
	cin.ignore(); cin.get(pBaru->npm, 14);
	cout << "Masukkan nama : "; cin.get(pBaru->nama, 40);
	cout << "Masukkan IPK : "; cin >> pBaru->ipk;
	pBaru->next = NULL; //
}
void insertSortNama(List& First, pointer pBaru) {
	if (First == NULL)
		First = pBaru;
	else {
		pBaru->next = First;
		First = pBaru;
	}
}
void traversal(List First) {
	pointer pBantu;
	if (First == NULL) {
		cout << "List Kosong\n";
	}
	else {
		pBantu = First;
		int i = 1;
		cout << "						Data Mahasiswa						" << endl;
		cout << "===========================================================" << endl;
		cout << setw(4) << "No" << setw(14) << "NPM" << setw(40) << "Nama" << setw(4) << "IPK" << endl;
		cout << "-----------------------------------------------------------" << endl;
		do {
			cout << setw(4) << i << setw(14) << pBantu->npm << setw(40) << pBantu->nama << setw(4) << pBantu->ipk << endl;
			pBantu = pBantu->next;
			i++;
		} while (pBantu != NULL); {
			cout << endl;
		}
	}
}

int main() {
	pointer p;
	List mhs;
	int n;

	createList(mhs);
	cout << "1. Tambah Data" << endl;
	cout << "2. Keluar" << endl;
	cout << "Pilih : "; cin >> n;

	while (n != 0) {
		if (n = 1) {
			createElement(p);
			insertSortNama(mhs, p);
			traversal(mhs);
		}
		else if (n = 2) {
			return 0;
		}
		else {
			cout << "ERROR" << endl;
		}
	}
	
	return 0;
}