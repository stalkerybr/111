#include <iostream>		//code by Fortochkin
#include <iomanip>		//stalkerybr@gmail.com
#include <cstdlib>
#include <ctime>

using namespace std;

int enter(int x, int y, int **array1, int **array2, int **array3);
int print(int x, int y, int **array1, int **array2, int **array3);
int summ(int x, int y, int **array1, int **array2, int **array3);
int multipl(int x, int y, int **array1, int **array2, int **array3);

int main(void)
{
	int count(0);
	int v1(0);
	int x(0);
	int y(0);

	cout << "Enter the interval of matrix: " << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	int **array1 = new int *[y];
	for(int c1(0); c1 < y; c1++)
	{
		array1[c1] = new int [x];
	}

	for(int c1(0); c1 < y; c1++)
	{
		for(int c2(0); c2 < x; c2++)
		{
			array1[c1][c2] = 0;
		}
	}

	int **array2 = new int *[y];
	for(int c1(0); c1 < y; c1++)
	{
		array2[c1] = new int [x];
	}

	for(int c1(0); c1 < y; c1++)
	{
		for(int c2(0); c2 < x; c2++)
		{
			array2[c1][c2] = 0;
		}
	}

	int **array3 = new int *[y];
	for(int c1(0); c1 < y; c1++)
	{
		array3[c1] = new int [x];
	}

	for(int c1(0); c1 < y; c1++)
	{
		for(int c2(0); c2 < x; c2++)
		{
			array3[c1][c2] = 0;
		}
	}

	for(int c1(0); c1 > -1; c1++)
	{
		cout << "Enter operation: " << endl;
		cout << "1 - for enter matrix: " << endl;
		cout << "2 - for print matrix: " << endl;
		cout << "3 - for summation matrix: " << endl;
		cout << "4 - for multiplication matrix: " << endl;
		cout << "5 - for exit program: " << endl;
		cin >> count;
		switch(count)
		{
			case 1:
			{
				enter(x, y, array1, array2, array3);
				break;
			}
			case 2:
			{
				print(x, y, array1, array2, array3);
				break;
			}
			case 3:
			{
				summ(x, y, array1, array2, array3);
				break;
			}
			case 4:
			{
				multipl(x, y, array1, array2, array3);
				break;
			}
			case 5:
			{
				v1 = 1;
				break;
			}
			default:
			{
				cout << "Uncorrect enter" << endl;
			}
		}
		if(v1 == 1)
			break;
	}

	for (int c1(0); c1 < y; c1++)
	{
		delete [] array1[c1];
	}

	for (int c1(0); c1 < y; c1++)
	{
		delete [] array2[c1];
	}

	for (int c1(0); c1 < y; c1++)
	{
		delete [] array3[c1];
	}
	
	return 0;
}

int enter(int x, int y, int **array1, int **array2, int **array3)
{
	int m(0);
	int n(0);
	int sel(0);
	int s1(0);
	int s2(0);
	int number(0);

	srand(time(NULL));

	for(int z1(0); z1 > -1; z1++)
	{
		n = 0;
		m = 0;
		cout << "You select enter the matrix" << endl;
		cout << "Select matrix: " << endl;
		cout << "Select 1: " << endl;
		cout << "Select 2: " << endl;
		cout << "Select 3: " << endl;
		cout << "Select 4 for up" << endl;
		cout << "Select 5 for randomize matrix" << endl;
		cin >> sel;

		switch(sel)
		{
			case 1:
			{
				cout << "Select first matrix" << endl;
				cout << "Enter the item of interest: " << endl;
				cout << "Enter x: ";
				cin >> m;
				m--;
				cout << "Enter y: ";
				cin >> n;
				n--;
				cout << "Enter number: ";
				cin >> number;

				array1[n][m] = number;
				break;
			}
			case 2:
			{
				cout << "Select second matrix" << endl;
				cout << "Enter the item of interest: " << endl;
				cout << "Enter x: ";
				cin >> m;
				m--;
				cout << "Enter y: ";
				cin >> n;
				n--;
				cout << "Enter number: ";
				cin >> number;

				array2[n][m] = number;
				break;
			}
			case 3:
			{
				cout << "Select third matrix" << endl;
				cout << "Enter the item of interest: " << endl;
				cout << "Enter x: ";
				cin >> m;
				m--;
				cout << "Enter y: ";
				cin >> n;
				n--;
				cout << "Enter number: ";
				cin >> number;

				array3[n][m] = number;
				break;
			}
			case 4:
			{
				s1 = 1;
				break;
			}
			case 5:
			{
				int sel1(0);
				int sel2(0);
				int sel3(0);
				int sel4(0);
				cout << "You select randomize matrix" << endl;
				cout << "Select number of matrix" << endl;
				cout << "Select 1: " << endl;
				cout << "Select 2: " << endl;
				cout << "Select 3: " << endl;
				cout << "Select 4 for up" << endl;
				cin >> sel1;
				cout << "Select from element" << endl;
				cin >> sel2;
				cout << "Select to element" << endl;
				cin >> sel3;
				sel4 = sel3 - sel2;
				switch(sel1)
				{
					case 1:
					{
						for(int s5(0); s5 < y; s5++)
						{
							for(int s6(0); s6 < x; s6++)
							{
								array1[s5][s6] = rand() % sel4 + sel2 + 1;
							}
						}
						break;
					}
					case 2:
					{
						for(int s5(0); s5 < y; s5++)
						{
							for(int s6(0); s6 < x; s6++)
							{
								array2[s5][s6] = rand() % sel4 + sel2 + 1;
							}
						}
						break;
					}
					case 3:
					{
						for(int s5(0); s5 < y; s5++)
						{
							for(int s6(0); s6 < x; s6++)
							{
								array3[s5][s6] = rand() % sel4 + sel2 + 1;
							}
						}
						break;
					}
					case 4:
					{
						s2 = 1;
						break;
					}
					default:
					{
						cout << "Uncorrect enter" << endl;
					}
					if(s2 == 1)
						break;
				}
				break;
			}
			default:
			{
				cout << "Uncorrect enter" << endl;
			}
		}

		if(s1 == 1)
			break;
	}

	return 0;
}

int print(int x, int y, int **array1, int **array2, int **array3)
{
	int sel(0);
	int s1(0);
	
	for(int z1(0); z1 > -1; z1++)
	{
		cout << "You select print the matrix" << endl;
		cout << "Select matrix: " << endl;
		cout << "Select 1: " << endl;
		cout << "Select 2: " << endl;
		cout << "Select 3: " << endl;
		cout << "Select 4 for up" << endl;
		cin >> sel;

		switch(sel)
		{
			case 1:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						cout << setw(4) << array1[c1][c2];
					}
					cout << endl;
				}
				break;
			}
			case 2:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						cout << setw(4) << array2[c1][c2];
					}
					cout << endl;
				}
				break;
			}
			case 3:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						cout << setw(4) << array3[c1][c2];
					}
					cout << endl;
				}
				break;
			}
			case 4:
			{
				s1 = 1;
				break;
			}
			default:
			{
				cout << "Uncorrect enter" << endl;
			}
		}

		if(s1 == 1)
			break;
	}

	return 0;
}

int summ(int x, int y, int **array1, int **array2, int **array3)
{
	int sel(0);
	int s1(0);

	for(int z1(0); z1 > -1; z1++)
	{
		cout << "You select summation the matrix" << endl;
		cout << "Select 1 for summation 1 and 2, exit in 3: " << endl;
		cout << "Select 2 for summation 2 and 3, exit in 1: " << endl;
		cout << "Select 3 for summation 1 and 3, exit in 2: " << endl;
		cout << "Select 4 for up" << endl;
		cin >> sel;

		switch(sel)
		{
			case 1:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array3[c1][c2] = array1[c1][c2] + array2[c1][c2];
					}
				}
				break;
			}
			case 2:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array1[c1][c2] = array2[c1][c2] + array3[c1][c2];
					}
				}
				break;
			}
			case 3:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array2[c1][c2] = array1[c1][c2] + array3[c1][c2];
					}
				}
				break;
			}
			case 4:
			{
				s1 = 1;
				break;
			}
			default:
			{
				cout << "Uncorrect enter" << endl;
			}
		}

		if(s1 == 1)
			break;
	}

	return 0;
}

int multipl(int x, int y, int **array1, int **array2, int **array3)
{
	int sel(0);
	int s1(0);

	for(int z1(0); z1 > -1; z1++)
	{
		cout << "You select summation the matrix" << endl;
		cout << "Select 1 for multiplication 1 and 2, exit in 3: " << endl;
		cout << "Select 2 for multiplication 2 and 3, exit in 1: " << endl;
		cout << "Select 3 for multiplication 1 and 3, exit in 2: " << endl;
		cout << "Select 4 for up" << endl;
		cin >> sel;

		switch(sel)
		{
			case 1:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array3[c1][c2] = array1[c1][c2] * array2[c1][c2];
					}
				}
				break;
			}
			case 2:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array1[c1][c2] = array2[c1][c2] * array3[c1][c2];
					}
				}
				break;
			}
			case 3:
			{
				for(int c1(0); c1 < y; c1++)
				{
					for(int c2(0); c2 < x; c2++)
					{
						array2[c1][c2] = array1[c1][c2] * array3[c1][c2];
					}
				}
				break;
			}
			case 4:
			{
				s1 = 1;
				break;
			}
			default:
			{
				cout << "Uncorrect enter" << endl;
			}
		}

		if(s1 == 1)
			break;
	}

	return 0;
}