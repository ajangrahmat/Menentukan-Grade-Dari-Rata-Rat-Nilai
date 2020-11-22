#include<iostream>
#include<string>
using namespace std;
string nama, grade;
float nilai1, nilai2, nilai3, nilai;

int main(){
	cout << "Masukan Nama: ";
	getline(cin, nama);
	cout << "Masukan Nilai1: ";
	cin >> nilai1;
	cout << "Masukan Nilai2: ";
	cin >> nilai2;
	cout << "Masukan Nilai3: ";
	cin >> nilai3;
	nilai = (nilai1 + nilai2 + nilai3) / 3;
	
	if(nilai >= 80){
		grade = "A";
	}
	else if((nilai >= 70) && (nilai < 80)){
		grade = "B";
	}
	else if((nilai >= 60) && (nilai < 70)){
		grade = "C";
	}
	else if((nilai >= 50) && (nilai < 60)){
		grade = "D";
	}
	else if(nilai < 50){
		grade = "E";
	}
	
	cout << "\nNama: " << nama << endl;
	cout << "Rata2 Adalah: " << nilai << endl;
	cout << "Grade: " << grade << endl;
}
