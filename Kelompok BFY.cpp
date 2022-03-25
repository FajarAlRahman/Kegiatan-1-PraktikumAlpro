#include <iostream>

using namespace std;



void top(int ayamb,int ayamg){
	cout << "==========STRUCK HARGA==========" << endl;
		cout << "Ayam goreng 	"<<ayamg<<"x"<<"	= "<<ayamg*17000<<endl;
		cout << "Ayam bakar 	"<<ayamb<<"x"<<"	= "<<ayamb*21000<< endl;
};

void struck(int total, int ayamg, int ayamb){
	int totala;
	if(total>=45000){
		totala=total*0.9; // DISKON = 100%-10%
		cout << endl;
		top(ayamb,ayamg);
		cout << "TOTAL HARGA DISKON 10%	= "<<totala<< endl;
	}
	else{
		totala=total;
		cout << endl;
		top(ayamb,ayamg);

		cout << "TOTAL HARGA 		= "<<totala<< endl;
	}
};

int rumus(int ayamg, int ayamb){
	int total,totala;
	total=ayamg*17000+ayamb*21000;
	struck(total,ayamg,ayamb);
};

int main(){
	int ayamg,ayamb;
	cout<<"pilih menu : \n";
	cout<<"1.ayam goreng = 17.000\n";
	cout<<"2.ayam bakar = 21.000\n";
	cout<<"jumlah ayam goreng yang ingin dipesan : ";
	cin>>ayamg;
	cout<<"jumlah ayam bakar yang ingin dipesan :";
	cin>>ayamb;
	rumus(ayamg, ayamb);	
}
