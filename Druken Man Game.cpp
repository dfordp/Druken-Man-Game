#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	const int size=50;
	cout << "Enter A Char to start:" << endl;
	char x;
	cin >> x;
	int pos = size / 2;
	while (true)
	{
		cout << "|START|";
		for (int i = 0; i < size; i++)
		{
			if (i == pos)
				cout << x;
			else
				cout << " ";
		}
		cout << "|FINISH|" << endl;
		int move = rand() % 3 - 1;
		pos += move;
		if (pos < 1)
		{
			cout << "\nOOF! YOU COULDN'T FINISH THE RACE\nDRINK NO MORE FROM NOW ON LOL";
			break;
		}
		else if (pos > size - 1)
		{
			cout << "\nWOW!CONGO ON FINISHING THE RACE\nSTILL DRINKING IS INJURIOUS TO HEALTH";
			break;
		}
	}
	return 0;
}
