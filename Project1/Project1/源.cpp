#include<iostream>
using namespace std;

/// <summary>
/// 将p进制x转换为10进制
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
/// 将10进制X转换为Q进制数存到数组中
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
/// 获得A+B的D进制数
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