#include <iostream>
using namespace std;
float toan, van, dtb;
void Tinh_TB() {
	dtb = ((toan * 2) + van) / 3;
}
void Nhap() {
	do {
		cout << "\n Nhap Diem Mon Toan: "; cin >> toan;
		cout << "\n Nhap Diem Mon Van: "; cin >> van;
		if (toan < 0 || toan>10 || van < 0 || van>10) {
			cout << "\n Nhap Sai Logic Vui Long Nhap Lai: ";
		}
	} while (toan < 0 || toan>10 || van < 0 || van>10);
}
void Xep_loai() {
	if (dtb >= 5) {
		cout << "Diem Trung Binh Cua Ban La: " << dtb;
		cout << "\n Chuc Mung Da dau ";

	}
	else
	{
		cout << "Diem Trung Binh Cua Ban La: " << dtb;
		cout << "\n Oi! Ban Da Rot. Dung Buon Nhe ^^  ";
	}
}
int main() {
	Nhap();
	Tinh_TB();
	Xep_loai();
	return 0;
}