#include<iostream>
using namespace std;
int main()
{
	double X = 0, Y = 1,Y0=1;
	const double Incre = 0.000001;
	for (X = 0; X <= 1; X+=Incre)
	{
		Y=Y0*Incre;
		Y0 += Y;
	}
	cout << Y0 << endl;
	return 0;
}