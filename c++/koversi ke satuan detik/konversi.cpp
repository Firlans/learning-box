#include <iostream>

using namespace std;
int jam_ke_detik(int jam, int menit, int detik){
	return (3600*jam)+(60*menit)+detik;
}
void dashboard(int &jam, int &menit, int &detik){
	system("cls");
	cout << "jam   : ";
	cin >> jam;
	cout << "menit : ";
	cin >> menit;
	cout << "detik : ";
	cin >> detik;
	cout << endl;
}
int main(){
	int jam, menit, detik, djam = 3600, dmenit = 60, jumlah;
	char lanjut;
	bool ulang=false;
	do{		
		dashboard(jam, menit, detik);
		jumlah = jam_ke_detik(jam, menit, detik);

		cout << "jumlah detik dalam " << jam << " jam, " << menit << " menit, " << detik << " detik adalah = " << endl;
		cout << jumlah << " detik" << endl;
		cout << "mau lanjut?";
		cin >> lanjut;
		if(lanjut!='y'){
			ulang=false;
		}else{
			ulang=true;
		}
	}while(ulang);

	return 0;
}