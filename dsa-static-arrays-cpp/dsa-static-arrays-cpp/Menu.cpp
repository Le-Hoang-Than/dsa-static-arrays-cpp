void showMenu()
{
	cout << "\n=========================================================";
	cout << "\n01. Tinh tong, hieu, tich, thuong cua mang";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n=========================================================";
}
void menu()
{
	const short maxLength = 10;
	int array[maxLength] = {5,7,3,-8,1,0,4,2,8,9};
	cout << "\nKhai bao mang 'array' voi 10 phan tu va khoi tao gia tri ban dau: ";
	cout << "\narray={5,7,3,-8,1,0,4,2,8,9}.";
	short option = {};
	do
	{
		system("cls");
		showMenu();
		cout << "\nNhap 2025 de thoat chuong trinh.";
		cout << "\nChon muc luc/>_";
		cin >> option;
		switch (option)
		{
		case 1:
			//tinhTongHieu(array, maxLength);
			break;
		default:
			break;
		}
	} while (option != 2025);
}