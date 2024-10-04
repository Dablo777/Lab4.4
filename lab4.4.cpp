#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, dx, R, x, y;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < -6 - R)
			y = 0;
		else
			if (-6 - R <= x && x <= -6)
				y = -sqrt(pow(R, 2) - pow((x + 6), 2));
			else
				if (-6 < x && x <= -R)
					y = R * ((x + 6) / 6 - R) - R;
				else
					if (-R < x && x <= 0)
						y = sqrt(pow(R - x, 2));
					else
						if (0 <= x && x <= 3)
							y = -R * (x / 3) + R;
						else
							y = R * ((x - 3) / 6);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
