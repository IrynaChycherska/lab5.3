#include<iostream>
#include<cmath>
using namespace std;
double z(const double x);
int main()
{
	double pp, pk, g;
	int n;
	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;
	double dp = (pk - pp) / n;
	double p = pp;
	while (p<=pk)
	{
		g = z(p * p + 1) - z(p * p - 1) + 2*z(p);
		cout << p << " " << z << endl;

	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a=1;
		S = a;
		do
		{
			k++;
			double R = (2*k * pow(x, k)) / ((k-2)*(k-1)*k);
				a *= R;
			double b = 1 / exp(x * x);
				a *= b;
			S += a;
		} while (k < 6);
		return S;

	}
}