#include <iostream>
using namespace std;
void render(int arr[3][3]);
void update(int arr[3][3], int row, int col, int value);
bool winner(int arr[3][3]);

int main()
{
	int ttt[3][3] = { { 0, 0, 0 },{ 0, 0, 0 },{ 0, 0, 0 } };   //Firts Value in the brackets is the ROW; Second Value is the COLUMN
	int a = 0;
	int b = 0;
	int c = 0;
	do
	{
		cout << "Choose a row: 0= TOP, 1= MIDDLE, 2=BOTTOM" << endl;
		cout << endl;
		cout << "Your choice is: ";
		cin >> a;
		cout << "Choose a column: 0=LEFT, 1=MIDDLE, 2=RIGHT" << endl;
		cout << endl;
		cout << "Your choice is: ";
		cin >> b;
		cout << "Get Ready to Play! Choose 1 or 2" << endl;
		cout << endl;
		cout << "Your choice is: ";
		cin >> c;
		cout << endl;
		update(ttt, a, b, c);
		render(ttt);
		if (winner(ttt)==true)
			cout << "Congrats!! You Won" << endl;
		else
			cout << "No Winner Yet" << endl;
	} while (winner(ttt) == false);

}

void render(int arr[3][3])
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
			cout << arr[row][col] << " ";
		cout << endl;
	}
}

void update(int arr[3][3], int row, int col, int value)
{
	arr[row][col] = value;
}

bool winner(int arr[3][3])
{

	if (((arr[0][0] == 2) && (arr[0][1] == 2) && (arr[0][2] == 2))  || 
		((arr[0][0] == 2) && (arr[1][1] == 2) && (arr[2][2] == 2)) ||
		((arr[0][0] == 2) && (arr[1][0] == 2) && (arr[2][0] == 2)) ||
		((arr[1][0] == 2) && (arr[1][1] == 2) && (arr[1][2] == 2)) ||
		((arr[0][1] == 2) && (arr[1][1] == 2) && (arr[2][1] == 2)) ||
		((arr[0][2] == 2) && (arr[1][1] == 2) && (arr[0][2] == 2)) ||
		((arr[0][2] == 2) && (arr[1][2] == 2) && (arr[2][2] == 2)) ||
		((arr[2][0] == 2) && (arr[2][1] == 2) && (arr[2][2] == 2)) ||

		((arr[0][0] == 1) && (arr[0][1] == 1) && (arr[0][2] == 1)) || 
		((arr[0][0] == 1) && (arr[1][1] == 1) && (arr[2][2] == 1)) ||
		((arr[0][0] == 1) && (arr[1][0] == 1) && (arr[2][0] == 1)) ||
		((arr[1][0] == 1) && (arr[1][1] == 1) && (arr[1][2] == 1)) ||
		((arr[0][1] == 1) && (arr[1][1] == 1) && (arr[2][1] == 1)) ||
		((arr[0][2] == 1) && (arr[1][1] == 1) && (arr[0][2] == 1)) ||
		((arr[0][2] == 1) && (arr[1][2] == 1) && (arr[2][2] == 1)) ||
		((arr[2][0] == 1) && (arr[2][1] == 1) && (arr[2][2] == 1)))
		return true;
	else
		return false;
}
