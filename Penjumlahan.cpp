#include <iostream>
#include <conio.h>

using namespace std;

class Hitung
{
	friend ostream& operator << (ostream&, const Hitung&);
	friend istream& operator >> (istream&, Hitung&);
public :
	Hitung();
	void hitung_jumlahnya(){jumlah=(a+b+c);}
private :
	int a,b,c;
	int jumlah;
};

Hitung::Hitung()
{
	cout << "Program menghitung jumlah3 integer\n";
	cout << "Selamat berkarya\n";
}

istream& operator >> (istream& in, Hitung& masukkan)
{
	cout << "Masukkan nilai a : ";
	in >> masukkan.a;
	cout << "Masukkan nilai b : ";
	in >> masukkan.b;
	cout << "Masukkan nilai c : ";
	in >> masukkan.c;
	return in;
}

ostream& operator << (ostream& out, const Hitung& keluaran)
{
	out << "Nilai a : " << keluaran.a << endl;
	out << "Nilai b : " << keluaran.b << endl;
	out << "Nilai c : " << keluaran.c << endl;
	out << "Jumlah 3 integer di atas : " << keluaran.jumlah << endl;
	return out;
}

main()
{
	Hitung x;
	cin >> x;
	x.hitung_jumlahnya();
	cout << x;
	getch();
	return 0;
}