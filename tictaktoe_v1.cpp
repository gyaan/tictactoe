#include<iostream>
using namespace std;

//declare functions
void togglePlayer();
char checkForWin();

//define a matrix to hold all positions
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

//define current user
char currentPlayer = 'X';

//total number of input taken to check for draw
int totalTry = 0;

//display the tictaktoe game current situations
void draw() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

//take the input and place it to proper place
void input() {

	int inputValue;
	bool toggelUser = false;
	cout << "Mr. " << currentPlayer << " Enter the field value:  ";
	cin >> inputValue;

	if (inputValue == 1) {
		if (matrix[0][0] == '1') {
			matrix[0][0] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}

	if (inputValue == 2) {
		if (matrix[0][1] == '2') {
			matrix[0][1] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 3) {
		if (matrix[0][2] == '3') {
			matrix[0][2] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 4) {
		if (matrix[1][0] == '4') {
			matrix[1][0] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 5) {
		if (matrix[1][1] == '5') {
			matrix[1][1] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 6) {
		if (matrix[1][2] == '6') {
			matrix[1][2] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;

	}
	if (inputValue == 7) {
		if (matrix[2][0] == '7') {
			matrix[2][0] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 8) {
		if (matrix[2][1] == '8') {
			matrix[2][1] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	if (inputValue == 9) {
		if (matrix[2][2] == '9') {
			matrix[2][2] = currentPlayer;
			toggelUser = true;
		}
		else
			cout << "Value alread entered try for other fields" << endl;
	}
	//after each input toggle player
	if (toggelUser)
		togglePlayer();
	else { //call input again to choose proper field
		totalTry--;
		input();
	}

}
void togglePlayer() {

	if (currentPlayer == 'X')
		currentPlayer = 'O';
	else
		currentPlayer = 'X';

}

char checkForWin() {

	//for user X

	//if any row completed
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';

	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	//if any column completed
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';

	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';

	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	//if any daigonal completed

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
		return 'X';

	//for user O

	//if any row completed
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';

	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	//if any column completed
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';

	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';

	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	//if any daigonal completed

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
		return 'O';

	return 'N';
}

int main() {
	char isWon;
	draw();

	//keep playing
	while (1) {
		totalTry++;
		input();
		draw();
		isWon = checkForWin();
		if (isWon != 'N') {
			cout << isWon << " Won!!!!" << endl;;
			break;
		}
		else if (totalTry == 9 && isWon == 'N') {
			cout << "It's Draw !!!" << endl;
			break;
		}
	}
	return 0;
}
