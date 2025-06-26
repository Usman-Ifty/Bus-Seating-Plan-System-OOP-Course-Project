#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<windows.h>
#include<iomanip>
using namespace std;
void ROUTE_1() 
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("Route 1.txt", ios::in);
	int Bus_Seat[19][6];
	int col = 6;
	int row = 19;
	for (int i = 0; i < row; i++)
	{
		
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}

		}
		cout << "* ";
		cout << endl;
	}
	


}
void ROUTE_2()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 2.txt", ios::in);
	int Bus_Seat[13][6];
	char sada;
	int col = 6;
	int row = 13;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_3()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 3.txt", ios::in);
	int Bus_Seat[14][6];
	char sada;
	int col = 6;
	int row = 14;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1) 
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_4()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 4.txt", ios::in);
	int Bus_Seat[12][6];
	char sada;
	int col = 6;
	int row = 12;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_5()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 5.txt", ios::in);
	int Bus_Seat[13][6];
	char sada;
	int col = 6;
	int row = 13;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout<<setw(4)<< "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_6()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 6.txt", ios::in);
	int Bus_Seat[12][6];
	char sada;
	int col = 6;
	int row = 12;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_7()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 7.txt", ios::in);
	int Bus_Seat[15][6];
	char sada;
	int col = 6;
	int row = 15;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_8()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 8.txt", ios::in);
	int Bus_Seat[12][6];
	char sada;
	int col = 6;
	int row = 12;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_9()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 9.txt", ios::in);
	int Bus_Seat[12][6];
	char sada;
	int col = 6;
	int row = 12;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_10()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 10.txt", ios::in);
	int Bus_Seat[14][6];
	char sada;
	int col = 6;
	int row = 14;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
void ROUTE_11()
{
	fstream Read_Bus_Mapping;
	Read_Bus_Mapping.open("route 11.txt", ios::in);
	int Bus_Seat[13][6];
	char sada;
	int col = 6;
	int row = 13;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Read_Bus_Mapping >> Bus_Seat[i][j];
		}

	}
	Read_Bus_Mapping.close();

	for (int i = 0; i < row; i++)
	{
		cout << "* ";
		for (int j = 0; j < col; j++)
		{
			if (Bus_Seat[i][j] == 69)
			{
				cout << setw(4) << "Chacha";
			}
			else if (Bus_Seat[i][j] == -1)
			{
				cout << setw(4) << "|" << setw(4);
			}
			else if (Bus_Seat[i][j] == 0)
			{
				cout << setw(4) << "_" << setw(4);
			}
			else
			{
				cout << setw(4) << Bus_Seat[i][j] << setw(4);
			}
		}
		cout << "* ";
		cout << endl;
	}

}
int main()
{

ENTER_INPUT_AGAIN:
	cout << "\t\t\t FAST NUCES BUS ROUTE MAPPING:" << endl;
	int choice;

	cout << "ENTER YOUR ROUTE NUMBER:";
	cin >> choice;

	cout << "Chacha=DRIVER" << endl << "|=ENTRANCE GATE OF BUS" << endl << "_ =EMPTY SPACE IN BUS " << "\n\n";
	for (int i = 0; i < 30; i++)
	{
		cout << "*";
	}
	cout << endl;
	switch (choice)
	{
	case 1:
		ROUTE_1();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;

	case 2:
		ROUTE_2();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 3:
		ROUTE_3();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 4:
		ROUTE_4();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 5:
		ROUTE_5();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 6:
		ROUTE_6();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 7:
		ROUTE_7();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 8:
		ROUTE_8();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 9:
		ROUTE_9();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 10:
		ROUTE_10();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	case 11:
		ROUTE_11();
		for (int i = 0; i < 30; i++)
		{
			cout << "*";
		}
		break;
	default:
		cout << "WRONG INPUT ;(" << endl;
		cout << "Screen Is Going To Refresh In 5 sec:";
		Sleep(2000);
		for (int i = 1; i <= 5; i++)
		{

			cout << i;
			Sleep(1000);
			cout << "\b";

		}
		system("cls"); 
		goto ENTER_INPUT_AGAIN;
		break;
	}
	
	cout << endl << endl;
	system("pause");
	return 0;
}