#include <iostream>
#include <math.h>
using namespace std;
//yaftan adad aval//
long long int x(int n)
{
	long long int m = 0;
	while (n != 0)
	{
		m += n % 10;
		n /= 10;
	}

	return m;
}
bool pri(int n)
{
	long long  int i = 2 , m=sqrt(n);
	for (i; i <= m; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

}
int main ()
{
	unsigned long long  int n, a, i , j , k;
	cin >> n;
	k = x(n);
	for (i = 0; i < k;)
	{
		n++;
		if (pri(n))
			i++;
	}
	cout << n;




	return 0;
}