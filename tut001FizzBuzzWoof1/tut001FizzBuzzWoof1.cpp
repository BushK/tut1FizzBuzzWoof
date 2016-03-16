#include <iostream>

using namespace std;
int main()
{
	int x, y, k, z;
	x = 3;
	y = 5;
	z = 7;


	for (k = 1; k <= 50; k = k + 1)
	{
		if (k % x == 0 && k % y == 0)   /*checking k is divisable by x, y and z*/
		{
			if (k % z == 0)
			{
				cout << "Fizz  Buzz Woof" << endl;
			}

		}
		else
		{
			if (k % x == 0 && k % y == 0) /*checking k is divisable by x and y*/
			{
				cout << "Fizz Buzz" << endl;
			}
			else
			{
				if (k % x == 0 && k % z == 0)    /*checking k is divisable by x and y*/
				{
					cout << "Fizz Woof" << endl;
				}
				else
				{
					if (k % y == 0 && k % z == 0)  /*checking if k is divisable by y and z*/
					{
						cout << "Buzz Woof" << endl;
					}
					else                                /*checking if k is divisable by x, y and z individually*/
					{
						if (k % x == 0)
						{
							cout << "Fizz" << endl;
						}
						if (k % y == 0)
						{
							cout << "Buzz" << endl;
						}
						if (k % z == 0)
						{
							cout << "Woof" << endl;
						}
						if (k % x != 0 && k % y != 0 && k%z != 0)
						{
							printf("%d\n", k);
						}
					}

				}

			}

		}


	}
}
