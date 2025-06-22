#include"ArrayMath.h"
long int tongMang(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		tong += arr[i];
	return tong;
}
long int tongNguyenDuong(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			tong += arr[i];
	return tong;
}
long int tongNguyenAm(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			tong += arr[i];
	return tong;
}
long int tongNguyenDuongViTriLe(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > 0 && i % 2 != 0)
			tong += arr[i];
	return tong;
}
long int tongNguyenAmViTriChan(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0 && i % 2 == 0)
			tong += arr[i];
	return tong;
}

long int tongBoi2(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] % 2 == 0)
			tong += arr[i];
	return tong;
}
long int tongBoi3Va7(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] % 3 == 0 && arr[i] % 7 == 0)
			tong += arr[i];
	return tong;
}
long int tongNuaDau(int arr[], int length)
{
	long int tong = 0;
	for (int i = 0; i <= length / 2; i++)
		tong += arr[i];
	return tong;
}
long int tongNuaCuoi(int arr[], int length)
{
	long int tong = 0;
	for (int i = length - 1; i >= length / 2; i--)
		tong += arr[i];
	return tong;
}
double trungBinhCong(int arr[], int length)
{
	double tong = 0.0;
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		count++;
		tong += arr[i];
	}
	return tong / count;
}