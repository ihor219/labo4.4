#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, y, R, xp, xk, dx;


	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;


	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = -6 * R * x - 36 * R;
		else
			if (0 < x && x <= R)
				y = sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)

					y = sqrt(x * x + 4 * R * x - 3 * R * R);

				else
					y = R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;


		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
