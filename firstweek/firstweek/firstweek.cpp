#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


/*int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}*/


/*int main() {
	vector<string> v;
	string a, b, c;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	cout << v[0] << endl;
	return 0;
}*/


/*int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0)
	{
		if (b != 0)
		{
			if (c == 0)
				cout << c;
			else
				cout << -c / b;
		}
	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
				cout << c;
			else
				if (-c / a >= 0)
					cout << sqrt(-c / a) << ' ' << -sqrt(-c / a);
		}
		else
		{
			if (c == 0)
				cout << c << ' ' << -b / a;
			else
				if (b * b - 4 * a * c >= 0)
				{
					if (b * b - 4 * a * c > 0)
						cout << (-b + sqrt(b * b - 4 * a * c)) / 2 / a << ' ' << (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
					else
						cout << (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
				}
		}
	}
	return 0;
}*/


/*int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		cout << "Impossible";
	else
		cout << a / b;
	return 0;
}*/


/*int main()
{
	double n, a, b, x, y;
	cin >> n >> a >> b >> x >> y;
	if (n > a && n <= b) {
		cout << n * (100 - x) / 100;
	}
	else if (n > b)	{
		cout << n * (100 - y) / 100;
	}
	else cout << n;
	return 0;
}*/


/*int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		if (i % 2 == 0)
			cout << i << ' ';
	return 0;
}*/


/*int main()
{
	string s;
	cin >> s;
	int amount = 0;
	int i;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == 'f' && amount < 2)
			amount += 1;
		if (amount == 2)
			break;
	}	
	if (amount == 0)
		cout << "-2";
	else {
		if (amount == 1)
			cout << "-1";
		else
			cout << i;
	}
	return 0;
}*/


/*int main()
{
	int a, b;
	cin >> a >> b;
	while (a > 0 && b > 0)
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	cout << a + b;
	return 0;
}*/


/*int main()
{
	int n;
	vector<int> v;
	cin >> n;
	if (n == 0)
		cout << "0";
	while (n != 0)
	{
		v.push_back(n - 2 * (n / 2));
		n = n / 2;
	}
	for (int i = v.size() - 1; i > -1; i--)
	{
		cout << v[i];
	}	
	return 0;
}*/
