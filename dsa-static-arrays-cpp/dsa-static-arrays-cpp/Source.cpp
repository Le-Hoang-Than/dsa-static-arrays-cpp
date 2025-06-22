#include"Header.h"
void showSubMenu1()
{
	cout << endl;

	cout << "\n[==========================================================================]";
	cout << "\n |                           CAC PHEP TOAN CO BAN                         |";
	cout << "\n[==========================================================================]";
	cout << "\n |1. Tong cac phan tu co trong mang                                       |";
	cout << "\n |2. Tong cac phan tu la so nguyen duong co trong mang                    |";
	cout << "\n |3. Tong cac phan tu la so nguyen am co trong mang                       |";
	cout << "\n |4. Tong cac phan tu la so nguyen duong o vi tri le co trong mang        |";
	cout << "\n |5. Tong cac phan tu la so nguyen am o vi tri chan co trong mang         |";
	cout << "\n |6. Tong cac phan tu la boi cua 2                                        |";
	cout << "\n |7. Tong cac phan tu la boi cua 3 va 7                                   |";
	cout << "\n |8. Tong cac phan tu o nua dau cua mang                                  |";
	cout << "\n |9. Tong cac phan tu o nua cuoi cua mang                                 |";
	cout << "\n |10. Trung binh cong cac phan tu co trong mang                           |";
	cout << "\n |444. Quay lai Menu                                                      |";
	cout << "\n |999. Dung Chuong Trinh                                                  |";
	cout << "\n |________________________________________________________________________|";

	cout << endl;
}
void SubMenu1()
{
	int option = {};
	const int len = 10;
	int arr[len] = { 12, -5, 0, 8, 3, 7, -2, 10, 6, -9 };

	do
	{
		system("cls");
		showSubMenu1();
		cout << "\nMang khoi tao ban dau la:";
		cout << "\narr = {12, -5, 0, 8, 3, 7, -2, 10, 6, -9}";

		cout << endl;

		cout << "\n| length | 10                                              |";
		cout << "\n|--------|-------------------------------------------------|";
		cout << "\n| index  | 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |";
		cout << "\n|--------|----|----|----|----|----|----|----|----|----|----|";
		cout << "\n| value  | 12 | -5 | 0  | 8  | 3  | 7  | -2 | 10 | 6  | -9 |";

		cout << endl;

		cout << "\nNhap lua chon\\>_";
		cin >> option;
		switch (option)
		{
		case 999:
			cout << "\n\nDung Chuong Trinh\n\n";
			exit(0);
			break;

		case 1:
			cout << "\nTong cac phan tu co trong mang la: " << tongMang(arr, len);
			break;

		case 2:
			cout << "\nTong cac phan tu la so nguyen duong co trong mang la: " << tongNguyenDuong(arr, len);
			break;

		case 3:
			cout << "\nTong cac phan tu la so nguyen am co trong mang la: " << tongNguyenAm(arr, len);
			break;

		case 4:
			cout << "\nTong cac phan tu la so nguyen duong o vi tri le co trong mang la: ";
			cout << tongNguyenDuongViTriLe(arr, len);
			break;

		case 5:
			cout << "\nTong cac phan tu la so nguyen am o vi tri chan co trong mang la: ";
			cout << tongNguyenAmViTriChan(arr, len);
			break;

		case 6:
			cout << "\nTong cac phan tu la boi cua 2 la: ";
			cout << tongBoi2(arr, len);
			break;

		case 7:
			cout << "\nTong cac phan tu la boi cua 3 va 7 la: ";
			cout << tongBoi3Va7(arr, len);
			break;

		case 8:
			cout << "\nTong cac phan tu o nua dau cua mang la: ";
			cout << tongNuaDau(arr, len);
			break;

		case 9:
			cout << "\nTong cac phan tu o nua cuoi cua mang la: ";
			cout << tongNuaCuoi(arr, len);
			break;

		case 10:
			cout << "\nTrung binh cong cac phan tu co trong mang la: ";
			cout << trungBinhCong(arr, len);
			break;
		}
		
		cout << endl;

		system("pause");
	} while (option != 444);
}
void showMainMenu()
{
	cout << endl;
	cout << "\n[==============================================]";
	cout << "\n |               STATIC ARRAYS                |";
	cout << "\n[==============================================]";
	cout << "\n |1. Cac phep toan co ban                     |";
	cout << "\n |2. Cac phep toan voi So Nguyen To           |";
	cout << "\n |3. Cac phep toan voi So Chinh Phuong        |";
	cout << "\n |4. Cac phep toan voi So Hoan Hao            |";
	cout << "\n |5. Kiem tra tinh chat                       |";
	cout << "\n |6. Tim kiem                                 |";
	cout << "\n |7. Sap xep                                  |";
	cout << "\n |999. Dung Chuong Trinh                      |";
	cout << "\n |____________________________________________|";
	cout << endl;
}
void mainMenu()
{
	int option = {};
	do
	{
		system("cls");
		showMainMenu();
		cout << "\nNhap 0 de dung chuong trinh";
		cout << "\nNhap lua chon\\>_";
		cin >> option;
		switch (option)
		{
		case 999:
			cout << "\n\nDung Chuong Trinh\n\n";
			break;
		case 1:
			SubMenu1();
			break;
		}
	} while (option != 999);
}