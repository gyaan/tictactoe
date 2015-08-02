#include<iostream>
using namespace std;

class TicTakToe
{

private:
	int totalTry;
	char matrix[3][3];
	char currentPlayer;

	void toggleUser() {

		if (this->currentPlayer == 'X')
			this->currentPlayer = 'O';
		else
			this->currentPlayer = 'X';
	}

	void takeUserInput() {
		int userInput;

		cout << "Mr. " << this->currentPlayer << " Please Enter Field Number"<<endl;
		cin >> userInput;

		//placed user input to specific place

		if (userInput == 1) {
			if (this->matrix[0][0] == '1') {
				this->matrix[0][0] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 2) {
			if (this->matrix[0][1] == '2') {
				this->matrix[0][1] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 3) {

			if (this->matrix[0][2] == '3') {
				this->matrix[0][2] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 4) {
			if (this->matrix[1][0] == '4') {
				this->matrix[1][0] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 5) {
			if (this->matrix[1][1] == '5') {
				this->matrix[1][1] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 6) {
			if (this->matrix[1][2] == '6') {
				this->matrix[1][2] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 7) {
			if (this->matrix[2][0] == '7') {
				this->matrix[2][0] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 8) {
			if (this->matrix[2][1] == '8') {
				this->matrix[2][1] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
		if (userInput == 9) {
			if (this->matrix[2][2] == '9') {
				this->matrix[2][2] = this->currentPlayer;
				this->totalTry++;
				this->toggleUser();
			}
			else {
				cout << "Value is already occupied choose other field"<<endl;
				this->takeUserInput();
			}
		}
	}

	char checkForWin() {

		//for user X

		if (this->matrix[0][0] == 'X' && this->matrix[0][1] == 'X' && this->matrix[0][2] == 'X')
			return 'X';
		if (this->matrix[1][0] == 'X' && this->matrix[1][1] == 'X' && this->matrix[1][2] == 'X')
			return 'X';
		if (this->matrix[2][0] == 'X' && this->matrix[2][1] == 'X' && this->matrix[2][2] == 'X')
			return 'X';
		if (this->matrix[0][0] == 'X' && this->matrix[1][0] == 'X' && this->matrix[2][0] == 'X')
			return 'X';
		if (this->matrix[0][1] == 'X' && this->matrix[1][1] == 'X' && this->matrix[2][1] == 'X')
			return 'X';
		if (this->matrix[0][2] == 'X' && this->matrix[1][2] == 'X' && this->matrix[2][2] == 'X')
			return 'X';


		//if any daigonal completed

		if (this->matrix[0][0] == 'X' && this->matrix[1][1] == 'X' && this->matrix[2][2] == 'X')
			return 'X';
		if (this->matrix[0][2] == 'X' && this->matrix[1][1] == 'X' && this->matrix[2][0] == 'X')
			return 'X';


		//for user O
		if (this->matrix[0][0] == 'O' && this->matrix[0][1] == 'O' && this->matrix[0][2] == 'O')
			return 'O';
		if (this->matrix[1][0] == 'O' && this->matrix[1][1] == 'O' && this->matrix[1][2] == 'O')
			return 'O';
		if (this->matrix[2][0] == 'O' && this->matrix[2][1] == 'O' && this->matrix[2][2] == 'O')
			return 'O';
		if (this->matrix[0][0] == 'O' && this->matrix[1][0] == 'O' && this->matrix[2][0] == 'O')
			return 'O';
		if (this->matrix[0][1] == 'O' && this->matrix[1][1] == 'O' && this->matrix[2][1] == 'O')
			return 'O';
		if (this->matrix[0][2] == 'O' && this->matrix[1][2] == 'O' && this->matrix[2][2] == 'O')
			return 'O';

		//if any daigonal completed
		if (this->matrix[0][0] == 'O' && this->matrix[1][1] == 'O' && this->matrix[2][2] == 'O')
			return 'O';
		if (this->matrix[0][2] == 'O' && this->matrix[1][1] == 'O' && this->matrix[2][0] == 'O')
			return 'O';

		return 'N';
	}


	void drawMatrix() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << this->matrix[i][j] << "  ";
			}
			cout << endl;
		}
	}

	void createIntialMatrix() {
		this->matrix[0][0] = '1';
		this->matrix[0][1] = '2';
		this->matrix[0][2] = '3';
		this->matrix[1][0] = '4';
		this->matrix[1][1] = '5';
		this->matrix[1][2] = '6';
		this->matrix[2][0] = '7';
		this->matrix[2][1] = '8';
		this->matrix[2][2] = '9';
	}


public:
	TicTakToe() {
		this->totalTry = 0;
		this->currentPlayer = 'X';
		this->createIntialMatrix();
	}

	void playGame() {
		char check;
		this->drawMatrix();
		while (1) {
			//draw current position
			this->takeUserInput();
			check = this->checkForWin();
			this->drawMatrix();
			if (check != 'N') {
				cout << "Game Over " << check << " Won!!"<<endl;
				break;
			}
			else if (this->totalTry == 9 && check == 'N') {
				cout << "Game Over with Draw!!"<<endl;
				break;
			}
			
		}
	}
	~TicTakToe();
};


int main() {
	TicTakToe *t;
	t = new TicTakToe();
	t->playGame();
	return 0;
}