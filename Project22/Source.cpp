# include <iostream>
using namespace std;
void power(int, long);
void power(char);
void power( float);

int main()
{
	int num;
	char ch;
	long st;
	float res;
	
	cout << "Please! Enter number? y/n";
	cin >> ch;
	if (ch == 'y')
	{
		cout << "Please! Enter number: ";
		cin >> num;
		cout << "Please! Enter the power of: ";
		cin >> st;
		power(num, st);
	};

	cout << "Please! Enter letter y/n";
	cin >> ch;
	if (ch == 'y')
	{
		cout << "Please! Enter letter: ";
		cin >> ch;
		power(ch);

	};
	cout << "Please! Enter long number y/n ";
	cin >> ch;
	if (ch == 'y')
	{
		cout << "Please! Enter float number: ";
		cin >> res;
		power(res);
	}
	system("pause");
	return 0;

}
void power(int a, long b)
{
	cout << a * b << "Umnoj" << endl;
}
void power(char d)
{
	cout << "Letter: " << d << endl;
}
void power(float s)
{
	cout << "Number: " << s << endl;
}
