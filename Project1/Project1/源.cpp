#include<iostream>
using namespace std;

/// <summary>
/// ��p����xת��Ϊ10����
/// </summary>
/// <param name="x"></param>
/// <param name="p"></param>
int tran(int x, int p)
{
	int y = 0, pr = 1;
	while (x != 0)
	{
		y = y + (x % 10)*pr;
		x = x / 10;
		pr = pr * p;
	}
	return y;
}

int a[20];
/// <summary>
/// ��10����Xת��ΪQ�������浽������
/// </summary>
/// <param name="x"></param>
/// <param name="q"></param>
void getit(int x,int q)
{
	int num = 0;
	do {
		a[num++] = x % q;
		x = x / q;
	} while (x != 0);
}
/// <summary>
/// ���A+B��D������
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <param name="q"></param>
void  abd(int x, int y, int q)
{
	int sum;
	sum = x+y;
	int num = 0;
	do {
		a[num++] = sum % q;
		sum = sum / q;
	} while (sum != 0);

	
	while (num > 0)
	{
		num--;
		cout << a[num];
	}
		
}
int main() {
	int x, y,q;
	cin >> x>> y>>q;
	 abd(x, y,q);
	 cout << "this is test";
	
}