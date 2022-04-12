#include<iostream>
using namespace std;


class PTGT{
	private:
		char mapt[10], hangsx[15];
		string day;
		float gia;
	public:
		PTGT();
		~PTGT();
		void nhap(int n);
		void xuat(int n);
};


PTGT :: PTGT(){
	cout << "Ham khoi tao voi cac tham so co gia tri ngam dinh duoc goi toi!\n";
}

PTGT :: ~PTGT(){
	cout << "Ham huy duoc goi toi!\n";
}

 void PTGT :: nhap(int n){
 	for(int i=0; i<n; i++){
	cout << "Nhap du lieu cho phuong tien:\n";
	fflush(stdin);
	cout << "Nhap ma phuong tien: ";
	cin.getline(mapt, 10);
	cout << "Nhap hang: ";
	cin.getline(hangsx, 15);
	cout << "Nhap ngay xuat xuong: ";
	cin >> day;
	cout << "Nhap gia chua thue: ";
	cin >> gia;
}
}

void PTGT :: xuat(int n){
	for(int i=0; i<n; i++){
	cout << "\nMa phuong tien: " << this->mapt << endl;
	cout << "Nhap hang: " << this->hangsx << endl;
	cout << "Ngay xuat xuong: " << this->day << endl;
	cout << "Gia chua thue: " << this->gia << endl;
}
}


class MAYBAY : public PTGT{
	private:
		int db, so;
		string noidky;
	public:
		MAYBAY();
		~MAYBAY();
		void nhap(int n);
};

MAYBAY :: MAYBAY(){
	
}

MAYBAY :: ~MAYBAY(){

}

void MAYBAY :: nhap(int n){
	MAYBAY :: nhap(n);
	cout << "Nhap duong bay: "; cin >> db;
	cout << "Nhap so chuyen bay: "; cin >> so;
	fflush(stdin);
	cout << "Nhap noi dang ky: "; getline(cin, noidky);
}



int main(){
	PTGT ptgt;
	int n;
	cout << "Nhap so phuong tien: "; cin >> n;
	ptgt.nhap(n);
	ptgt.xuat(n);
	MAYBAY mb;
	mb.nhap(n);
	return 0;
}
