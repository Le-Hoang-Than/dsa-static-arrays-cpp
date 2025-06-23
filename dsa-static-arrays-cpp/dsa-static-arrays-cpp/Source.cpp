#include"Header.h"

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

void showSubMenu1()
{
	cout << endl;

	cout << "\n[==============================================================================================]";
	cout << "\n |                              CAC PHEP TOAN CO BAN VOI MANG SO NGUYEN                       |";
	cout << "\n[==============================================================================================]";

	// NHÓM 1: THỐNG KÊ CƠ BẢN
	cout << "\n |1. Tong cac phan tu co trong mang                                                           |";
	cout << "\n |2. Tong cac phan tu la so nguyen duong co trong mang                                        |";
	cout << "\n |3. Tong cac phan tu la so nguyen am co trong mang                                           |";
	cout << "\n |4. Tong cac phan tu la so nguyen duong o vi tri le co trong mang                            |";
	cout << "\n |5. Tong cac phan tu la so nguyen am o vi tri chan co trong mang                             |";
	cout << "\n |6. Tong cac phan tu la boi cua 2                                                            |";
	cout << "\n |7. Tong cac phan tu la boi cua 3 va 7                                                       |";
	cout << "\n |8. Tong cac phan tu o nua dau cua mang                                                      |";
	cout << "\n |9. Tong cac phan tu o nua cuoi cua mang                                                     |";
	cout << "\n |10. Trung binh cong cac phan tu co trong mang                                               |";
	cout << "\n |11. Dem so luong phan tu trong mang                                                         |";
	cout << "\n |12. Dem so lan xuat hien cua tung phan tu trong mang                                        |";
	cout << "\n |13. Tim vi tri phan tu lon nhat va nho nhat trong mang                                      |";
	cout << "\n |14. Kiem tra mang co phan tu lap lai hay khong                                              |";
	cout << "\n |15. Dao nguoc mang                                                                          |";
	cout << "\n |16. Sap xep mang tang dan                                                                   |";
	cout << "\n |17. Sap xep mang giam dan                                                                   |";
	cout << "\n |18. In ra cac phan tu la so nguyen to                                                       |";
	cout << "\n |19. Liet ke vi tri cac phan tu la so nguyen to                                              |";
	cout << "\n |20. Tim so nguyen to dau tien va cuoi cung trong mang                                       |";

	//TÌM KIẾM, LỌC, XÓA, THÊM PHẦN TỬ
	cout << "\n |21. Tim so nguyen to lon thu 2 trong mang                                                   |";
	cout << "\n |22. Tim `k` so nguyen to nho nhat co trong mang                                             |";
	cout << "\n |23. Tim `k` so nguyen to lon nhat co trong mang                                             |";
	cout << "\n |24. Dem so nguyen to trong khoang [a, b] nhap tu ban phim                                   |";
	cout << "\n |25. Tinh tong cac so nguyen to khac nhau (loai bo trung)                                    |";
	cout << "\n |26. Kiem tra mang co toan so nguyen to hay khong                                            |";
	cout << "\n |27. Sap xep cac so nguyen to trong mang tang dan (giu nguyen vi tri cac so khac)            |";
	cout << "\n |28. Tim day con dai nhat gom toan so nguyen to                                              |";
	cout << "\n |29. Liet ke cap so nguyen to co tong bang mot so `T`                                        |";
	cout << "\n |30. Xoa tat ca so nguyen khoi mang                                                          |";
	cout << "\n |31. Xoa phan tu theo gia tri nhap vao                                                       |";
	cout << "\n |32. Chen phan tu vao vi tri nhap vao                                                        |";
	cout << "\n |37. Kiem tra mang co phai la day tang dan hay khong                                         |";
	cout << "\n |38. Kiem tra mang co phai la day giam dan hay khong                                         |";
	cout << "\n |39. Tim trung vi (median) cua mang                                                          |";
	cout << "\n |444. Quay lai Menu                                                                          |";
	cout << "\n |999. Dung Chuong Trinh                                                                      |";
	cout << "\n |____________________________________________________________________________________________|";

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

void showSubMenu2()
{
	cout << endl;

	cout << "\n[=====================================================================================================]";
	cout << "\n |                                 CAC PHEP TOAN VOI SO NGUYEN TO                                    |";
	cout << "\n[=====================================================================================================]";

	// NHÓM 1: THỐNG KÊ CƠ BẢN
	cout << "\n | 01. Dem so luong so nguyen to trong mang                                                          |";
	cout << "\n | 02. Tong cac phan tu la so nguyen to co trong mang                                                |";
	cout << "\n | 03. Trung binh cong cac phan tu la so nguyen to                                                   |";
	cout << "\n | 04. Tinh tong cac so nguyen to khac nhau (loai bo trung)                                          |";
	cout << "\n | 05. Dem so lan xuat hien cua tung so nguyen to                                                    |";

	// NHÓM 2: VỊ TRÍ & PHÂN ĐOẠN
	cout << "\n | 06. Tong so nguyen to o vi tri chan                                                               |";
	cout << "\n | 07. Tong so nguyen to o vi tri le                                                                 |";
	cout << "\n | 08. Tong so nguyen to o nua dau cua mang                                                          |";
	cout << "\n | 09. Tong so nguyen to o nua cuoi cua mang                                                         |";
	cout << "\n | 10. Liet ke vi tri cac phan tu la so nguyen to                                                    |";
	cout << "\n | 11. Kiem tra mang co chua it nhat 1 so nguyen to khong                                            |";

	// NHÓM 3: TÌM KIẾM & PHÂN LOẠI
	cout << "\n | 12. In ra cac phan tu la so nguyen to                                                             |";
	cout << "\n | 13. Tim so nguyen to dau tien va cuoi cung trong mang                                             |";
	cout << "\n | 14. Tim so nguyen to lon thu 2 trong mang                                                         |";
	cout << "\n | 15. Tim `k` so nguyen to nho nhat co trong mang                                                   |";
	cout << "\n | 16. Tim `k` so nguyen to lon nhat co trong mang                                                   |";
	cout << "\n | 17. Dem so nguyen to trong khoang [a, b] nhap tu ban phim                                         |";
	cout << "\n | 18. Kiem tra mang co toan so nguyen to hay khong                                                  |";
	cout << "\n | 19. Liet ke cac so nguyen to khac nhau (khong trung lap)                                          |";
	cout << "\n | 20. Liet ke cac cap (i, j) la cap vi tri co a[i] va a[j] deu la so nguyen to                      |";

	// NHÓM 4: XỬ LÝ ĐẶC BIỆT
	cout << "\n | 21. Tong cac phan tu la so nguyen to va la boi cua 3 va 7                                         |";
	cout << "\n | 22. Sap xep cac so nguyen to trong mang tang dan (giu nguyen vi tri cac so khac)                  |";
	cout << "\n | 23. Tim day con dai nhat gom toan so nguyen to                                                    |";
	cout << "\n | 24. Liet ke cap so nguyen to co tong bang mot so `T`                                              |";
	cout << "\n | 25. Xoa tat ca so nguyen khoi mang                                                                |";

	// NHÓM 5: MỞ RỘNG & NÂNG CAO
	cout << "\n | 26. Tim phan tu la so nguyen to gan nhat voi mot so `x`                                           |";
	cout << "\n | 27. Tinh trung vi (median) cua cac so nguyen to trong mang                                        |";
	cout << "\n | 28. Dao nguoc thu tu cac so nguyen to trong mang                                                  |";
	cout << "\n | 29. Tach rieng mang chi chua cac so nguyen to (tao mang con)                                      |";

	// ĐIỀU HƯỚNG MENU
	cout << "\n | 444. Quay lai Menu                                                                                |";
	cout << "\n | 999. Dung Chuong Trinh                                                                            |";
	cout << "\n[=====================================================================================================]";

	cout << endl;
}


void showSubMenu3()
{
	cout << endl;

	cout << "\n[=====================================================================================================]";
	cout << "\n |                               CAC PHEP TOAN VOI SO CHINH PHUONG                                   |";
	cout << "\n[=====================================================================================================]";

	// NHÓM 1: THỐNG KÊ CƠ BẢN
	cout << "\n | 01. Dem so luong so chinh phuong trong mang                                                       |";
	cout << "\n | 02. Tong cac phan tu la so chinh phuong co trong mang                                             |";
	cout << "\n | 03. Trung binh cong cac phan tu la so chinh phuong                                                |";
	cout << "\n | 04. Tinh tong cac so chinh phuong khac nhau (loai bo trung)                                       |";
	cout << "\n | 05. Dem so lan xuat hien cua tung so chinh phuong                                                 |";

	// NHÓM 2: VỊ TRÍ & PHÂN ĐOẠN
	cout << "\n | 06. Tong so chinh phuong o vi tri chan                                                            |";
	cout << "\n | 07. Tong so chinh phuong o vi tri le                                                              |";
	cout << "\n | 08. Tong so chinh phuong o nua dau cua mang                                                       |";
	cout << "\n | 09. Tong so chinh phuong o nua cuoi cua mang                                                      |";
	cout << "\n | 10. Liet ke vi tri cac phan tu la so chinh phuong                                                 |";
	cout << "\n | 11. Kiem tra mang co chua it nhat 1 so chinh phuong khong                                         |";

	// NHÓM 3: TÌM KIẾM & PHÂN LOẠI
	cout << "\n | 12. In ra cac phan tu la so chinh phuong                                                          |";
	cout << "\n | 13. Tim so chinh phuong dau tien va cuoi cung trong mang                                          |";
	cout << "\n | 14. Tim so chinh phuong lon thu 2 trong mang                                                      |";
	cout << "\n | 15. Tim `k` so chinh phuong nho nhat co trong mang                                                |";
	cout << "\n | 16. Tim `k` so chinh phuong lon nhat co trong mang                                                |";
	cout << "\n | 17. Dem so chinh phuong trong khoang [a, b] nhap tu ban phim                                      |";
	cout << "\n | 18. Kiem tra mang co toan so chinh phuong hay khong                                               |";
	cout << "\n | 19. Liet ke cac so chinh phuong khac nhau (khong trung lap)                                       |";
	cout << "\n | 20. Liet ke cac cap (i, j) la cap vi tri co a[i] va a[j] deu la so chinh phuong                   |";

	// NHÓM 4: XỬ LÝ ĐẶC BIỆT
	cout << "\n | 21. Tong cac phan tu la so chinh phuong va la boi cua 3 va 7                                      |";
	cout << "\n | 22. Sap xep cac so chinh phuong trong mang tang dan (giu nguyen vi tri cac so khac)               |";
	cout << "\n | 23. Tim day con dai nhat gom toan so chinh phuong                                                 |";
	cout << "\n | 24. Liet ke cap so chinh phuong co tong bang mot so `T`                                           |";
	cout << "\n | 25. Xoa tat ca so nguyen khoi mang                                                                |";

	// NHÓM 5: MỞ RỘNG & NÂNG CAO
	cout << "\n | 26. Tim phan tu la so chinh phuong gan nhat voi mot so `x`                                        |";
	cout << "\n | 27. Tinh trung vi (median) cua cac so chinh phuong trong mang                                     |";
	cout << "\n | 28. Dao nguoc thu tu cac so chinh phuong trong mang                                               |";
	cout << "\n | 29. Tach rieng mang chi chua cac so chinh phuong (tao mang con)                                   |";

	// ĐIỀU HƯỚNG MENU
	cout << "\n | 444. Quay lai Menu                                                                                |";
	cout << "\n | 999. Dung Chuong Trinh                                                                            |";
	cout << "\n[=====================================================================================================]";

	cout << endl;
}


void showSubMenu4()
{
	cout << endl;

	cout << "\n[=====================================================================================================]";
	cout << "\n |                                 CAC PHEP TOAN VOI SO HOAN HAO                                     |";
	cout << "\n[=====================================================================================================]";

	// NHÓM 1: THỐNG KÊ CƠ BẢN
	cout << "\n | 01. Dem so luong so hoan hao trong mang                                                           |";
	cout << "\n | 02. Tong cac phan tu la so hoan hao co trong mang                                                 |";
	cout << "\n | 03. Trung binh cong cac phan tu la so hoan hao                                                    |";
	cout << "\n | 04. Tinh tong cac so hoan hao khac nhau (loai bo trung)                                           |";
	cout << "\n | 05. Dem so lan xuat hien cua tung so hoan hao                                                     |";
																												    
	// NHÓM 2: VỊ TRÍ & PHÂN ĐOẠN																				    
	cout << "\n | 06. Tong so hoan hao o vi tri chan                                                                |";
	cout << "\n | 07. Tong so hoan hao o vi tri le                                                                  |";
	cout << "\n | 08. Tong so hoan hao o nua dau cua mang                                                           |";
	cout << "\n | 09. Tong so hoan hao o nua cuoi cua mang                                                          |";
	cout << "\n | 10. Liet ke vi tri cac phan tu la so hoan hao                                                     |";
	cout << "\n | 11. Kiem tra mang co chua it nhat 1 so hoan hao khong                                             |";
																												    
	// NHÓM 3: TÌM KIẾM & PHÂN LOẠI																				    
	cout << "\n | 12. In ra cac phan tu la so hoan hao                                                              |";
	cout << "\n | 13. Tim so hoan hao dau tien va cuoi cung trong mang                                              |";
	cout << "\n | 14. Tim so hoan hao lon thu 2 trong mang                                                          |";
	cout << "\n | 15. Tim `k` so hoan hao nho nhat co trong mang                                                    |";
	cout << "\n | 16. Tim `k` so hoan hao lon nhat co trong mang                                                    |";
	cout << "\n | 17. Dem so hoan hao trong khoang [a, b] nhap tu ban phim                                          |";
	cout << "\n | 18. Kiem tra mang co toan so hoan hao hay khong                                                   |";
	cout << "\n | 19. Liet ke cac so hoan hao khac nhau (khong trung lap)                                           |";
	cout << "\n | 20. Liet ke cac cap (i, j) la cap vi tri co a[i] va a[j] deu la so hoan hao                       |";
																												    
	// NHÓM 4: XỬ LÝ ĐẶC BIỆT																					    
	cout << "\n | 21. Tong cac phan tu la so hoan hao va la boi cua 3 va 7                                          |";
	cout << "\n | 22. Sap xep cac so hoan hao trong mang tang dan (giu nguyen vi tri cac so khac)                   |";
	cout << "\n | 23. Tim day con dai nhat gom toan so hoan hao                                                     |";
	cout << "\n | 24. Liet ke cap so hoan hao co tong bang mot so `T`                                               |";
	cout << "\n | 25. Xoa tat ca so nguyen khoi mang                                                                |";

	// NHÓM 5: MỞ RỘNG & NÂNG CAO
	cout << "\n | 26. Tim phan tu la so hoan hao gan nhat voi mot so `x`                                            |";
	cout << "\n | 27. Tinh trung vi (median) cua cac so hoan hao trong mang                                         |";
	cout << "\n | 28. Dao nguoc thu tu cac so hoan hao trong mang                                                   |";
	cout << "\n | 29. Tach rieng mang chi chua cac so hoan hao (tao mang con)                                       |";

	// ĐIỀU HƯỚNG MENU
	cout << "\n | 444. Quay lai Menu                                                                                |";
	cout << "\n | 999. Dung Chuong Trinh                                                                            |";
	cout << "\n[=====================================================================================================]";

	cout << endl;
}
