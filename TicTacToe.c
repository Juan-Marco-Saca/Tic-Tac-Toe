/* C program by Juan Marco Saca for CS1310 26.10.2023
	tictactoe.c
	allows two users to play tic tac toe
                          ________I___
         __,-------------'       (]) /
      ,-' __/     |   |       _ _,--'
     / ,-'____   _|    __,---'
    |_| ,',--,`,      /
    |  _|([//])|--,__/----,___
  ,'--'__\// '/,__            `-,__
 /______==()=====__________________\
*/
#include<stdio.h>
char ttt [3][3]; /*board*/

	

/*prints either the key or the board*/	
void PrintBoard(char board[3][3]){
	
	printf( " %c  |  %c | %c \n", board[0][0], board[0][1], board[0][2]);
	printf( "____|____|____\n" );
	printf( "  %c |  %c | %c \n", board[1][0], board[1][1], board[1][2]);
	printf( "____|____|____\n"); 
	printf( "  %c | %c  | %c \n", board[2][0], board[2][1], board[2][2]);
	printf( "    |    |    \n");


	printf("\n\n\n");
	
}



/*Gets the move from the user*/
char GetInput (void){
	
	char input;
	
	printf("Please type a value form the key where you would like to move: ");
	scanf("%c", &input);
	getchar();
	
	printf("You typed: %c \n", input);
	
	return input;
	
}



/*checks if the move is valid*/
int CheckIfMoveIsValid(char move){
	
	int valid; /*variable to return the value we get on this method*/
	
	/*it checks if the value in move is bigger than A and smaller than I or 
	  bigger than a and smaller than i*/
	if(move >= 'A' && move <= 'I' || move >= 'a' && move <= 'i'){
		valid = 1;
	}else{
		valid = 0;
	}

	return valid;	
}



/*marks the move on the board*/
int MarkMove(char move, char player, int valid){
	
	/*switch to see what is the users selection*/
	switch(move){
		/*capital case */
		case 'A':
			if(ttt[0][0] == ' ')
				ttt[0][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'B':
			if(ttt[0][1] == ' ')
				ttt[0][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'C':
			if(ttt[0][2] == ' ')
				ttt[0][2] = player;
			else{
				valid = 0;
			}
			break;
		case 'D':
			if(ttt[1][0] == ' ')
				ttt[1][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'E':
			if(ttt[1][1] == ' ')
				ttt[1][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'F':
			if(ttt[1][2] == ' ')
				ttt[1][2] = player;
			else{
				valid = 0;
			}
			break;
		case 'G':
			if(ttt[2][0] == ' ')
				ttt[2][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'H':
			if(ttt[2][1] == ' ')
				ttt[2][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'I':
			if(ttt[2][2] == ' ')
				ttt[2][2] = player;
			else{
				valid = 0;
			}
			break;
		/*lower case*/
		case 'a':
			if(ttt[0][0] == ' ')
				ttt[0][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'b':
			if(ttt[0][1] == ' ')
				ttt[0][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'c':
			if(ttt[0][2] == ' ')
				ttt[0][2] = player;
			else{
				valid = 0;
			}
			break;
		case 'd':
			if(ttt[1][0] == ' ')
				ttt[1][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'e':
			if(ttt[1][1] == ' ')
				ttt[1][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'f':
			if(ttt[1][2] == ' ')
				ttt[1][2] = player;
			else{
				valid = 0;
			}
			break;
		case 'g':
			if(ttt[2][0] == ' ')
				ttt[2][0] = player;
			else{
				valid = 0;
			}
			break;
		case 'h':
			if(ttt[2][1] == ' ')
				ttt[2][1] = player;
			else{
				valid = 0;
			}
			break;
		case 'i':
			if(ttt[2][2] == ' ')
				ttt[2][2] = player;
			else{
				valid = 0;
			}
			break;
		default:
			printf("There is a problem");
	}

	return valid;	
}



/*checks if there are any three in a row from the player taht just played when against another human*/
int CheckForWin(char player){

	int flag = 0; /*the flag*/
	if(ttt[0][0] == player && ttt[0][1] == player && ttt [0][2] == player ||
	   ttt[1][0] == player && ttt[1][1] == player && ttt [1][2] == player ||
	   ttt[2][0] == player && ttt[2][1] == player && ttt [2][2] == player ||
	   ttt[0][0] == player && ttt[1][0] == player && ttt [2][0] == player ||
	   ttt[0][1] == player && ttt[1][1] == player && ttt [2][1] == player ||
	   ttt[0][2] == player && ttt[1][2] == player && ttt [2][2] == player ||
	   ttt[0][0] == player && ttt[1][1] == player && ttt [2][2] == player ||
	   ttt[2][0] == player && ttt[1][1] == player && ttt [0][2] == player){
	   	
	   	printf("Player: %c, has won the game. Congratulations! \n"), player;
	   	flag = 1;
	}else{
		flag = 0;
	}
	return flag;
}



/*checks if there are any three in a row from the player taht just played when against the computer*/
int CheckForWinVSComputer(char player){

	int flag = 0; /*the flag*/
	if(ttt[0][0] == player && ttt[0][1] == player && ttt [0][2] == player ||
	   ttt[1][0] == player && ttt[1][1] == player && ttt [1][2] == player ||
	   ttt[2][0] == player && ttt[2][1] == player && ttt [2][2] == player ||
	   ttt[0][0] == player && ttt[1][0] == player && ttt [2][0] == player ||
	   ttt[0][1] == player && ttt[1][1] == player && ttt [2][1] == player ||
	   ttt[0][2] == player && ttt[1][2] == player && ttt [2][2] == player ||
	   ttt[0][0] == player && ttt[1][1] == player && ttt [2][2] == player ||
	   ttt[2][0] == player && ttt[1][1] == player && ttt [0][2] == player){
	   	
	   	if(player == 'X')
	   		printf("You have won the game. Congratulations! \n");
	   	else
	   		printf("The computer won the game. \n");
	   	flag = 1;
	}else{
		flag = 0;
	}
	return flag;
}



/*changes for the next player to play*/
char ChangePlayer(char player){
	
	if(player == 'X')
		player = 'O';
	else
		player = 'X';
	
	return player;
}



/*Function to play against a human*/
void HumanVSHuman(void){
	char key [3][3] = {
	{'a','b','c'},
	{'d','e','f'},
	{'g','h','i'}
	}; /*key for the users*/
	
	int i, j; /*counting variables for the loops*/
	
	int move_count = 0; /*keeps count of the amount of moves*/
	
	char player = 'X'; /*player moving*/
	char move; /*player selection*/
	
	int valid_move = 0; /*to see if the move is valud*/
	int flag = 0; /*to see if there is a tie or someon won */

	
	printf("Welcome to tic tac toe, if you do not know how to play"
			"please visit this website https://www.wikihow.com/Play-Tic-Tac-Toe \n\n");
			
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			ttt[i][j] = ' ';
		}
	}			
	
	do{/*loop to go until there is a draw or a player wins*/			
			
		PrintBoard(key);
		PrintBoard(ttt);
			
		do{
			move = GetInput();
			valid_move = CheckIfMoveIsValid(move);
			valid_move = MarkMove(move, player, valid_move);
			if(valid_move == 0)
				printf("Please type a value from the key \n\n");
		}while(valid_move == 0);
			
		flag = CheckForWin(player);
		player = ChangePlayer(player);
		if(flag == 0)
			move_count++;
		if(move_count == 9)
			printf("It's a tie \n");
		if(flag == 1 || move_count == 9)
			PrintBoard(ttt);
	}while(flag == 0 && move_count < 9);
	
	move_count = 0;
	flag = 0;
	
}



/*checks if the board is empty*/
int EmptyBoardScenario(void){

	int i, j; /*counter for for loop*/
	int flag = 0; /*flag for empty board*/
	int empty = 0; /*counter for empty spaces*/
	for(i=0;i<3; i++){
		for(j=0;j<3;j++){
			if(ttt[i][j] == ' '){
				empty++;
			}
		}
	}
	if(empty == 9){
		ttt[0][0] = 'O';
		flag = 1;

	}

	return flag;
}



/*checks if the computer can win and moves accordingly*/
int PossibleWinOrLossScenario(char player){
	
	int moved = 1; /*flag to see if the computer did something here*/
	
	if(ttt[0][0] == player && ttt[0][1] == player && ttt[0][2] == ' '){ 
		ttt[0][2] = 'O';
	} else if(ttt[0][0] == ' ' && ttt[0][1] == player && ttt[0][2] == player){ 
		ttt[0][0] = 'O';
	} else if(ttt[0][0] == player && ttt[0][1] == ' ' && ttt[0][2] == player){ 
		ttt[0][1] = 'O';
	}else if(ttt[1][0] == player && ttt[1][1] == player && ttt[1][2] == ' '){ 
		ttt[1][2] = 'O';
	} else if(ttt[1][0] == ' ' && ttt[1][1] == player && ttt[1][2] == player){
		ttt[1][0] = 'O';
	} else if(ttt[1][0] == player && ttt[1][1] == ' ' && ttt[1][2] == player){
		ttt[1][1] = 'O';
	}else if(ttt[2][0] == player && ttt[2][1] == player && ttt[2][2] == ' '){ 
		ttt[2][2] = 'O';
	} else if(ttt[2][0] == ' ' && ttt[2][1] == player && ttt[2][2] == player){
		ttt[2][0] = 'O';
	} else if(ttt[2][0] == player && ttt[2][1] == ' ' && ttt[2][2] == player){
		ttt[2][1] = 'O';
	}else if(ttt[0][0] == player && ttt[1][0] == player && ttt[2][0] == ' '){
		ttt[2][0] = 'O';
	}else if(ttt[0][0] == ' ' && ttt[1][0] == player && ttt[2][0] == player){
		ttt[0][0] = 'O';
	}else if(ttt[0][0] == player && ttt[1][0] == ' ' && ttt[2][0] == player){
		ttt[1][0] = 'O';
	}else if(ttt[0][1] == player && ttt[1][1] == player && ttt[2][1] == ' '){
		ttt[2][1] = 'O';
	}else if(ttt[0][1] == ' ' && ttt[1][1] == player && ttt[2][1] == player){
		ttt[0][1] = 'O';
	}else if(ttt[0][1] == player && ttt[1][1] == ' ' && ttt[2][1] == player){
		ttt[1][1] = 'O';
	}else if(ttt[0][2] == player && ttt[1][2] == player && ttt[2][2] == ' '){
		ttt[2][2] = 'O';
	}else if(ttt[0][2] == ' ' && ttt[1][2] == player && ttt[2][2] == player){
		ttt[0][2] = 'O';
	}else if(ttt[0][2] == player && ttt[1][2] == ' ' && ttt[2][2] == player){
		ttt[1][2] = 'O';
	}else if(ttt[0][0] == player && ttt[1][1] == player && ttt[2][2] == ' '){
		ttt[2][2] = 'O';
	}else if(ttt[0][0] == ' ' && ttt[1][1] == player && ttt[2][2] == player){
		ttt[0][0] = 'O';
	}else if(ttt[0][0] == player && ttt[1][1] == ' ' && ttt[2][2] == player){
		ttt[1][1] = 'O';
	}else if(ttt[0][2] == player && ttt[1][1] == player && ttt[2][0] == ' '){
		ttt[2][0]= 'O';
	}else if(ttt[0][2] == ' ' && ttt[1][1] == player && ttt[2][0] == player){
		ttt[0][2] = 'O';
	}else if(ttt[0][2] == player && ttt[1][1] == ' ' && ttt[2][0] == player){
		ttt[1][1] = 'O';
	}else{
		moved = 0;
	}
	
	return moved;
}



/*it searches for the first empty corner*/
void GoForCorner(void){
	
	if(ttt[0][0] == ' ')
		ttt[0][0] = 'O';
	else if(ttt[0][2] == ' ')
		ttt[0][2] = 'O';
	else if(ttt[2][2] == ' ')
		ttt[2][2] = 'O';
	else if(ttt[2][0] == ' ')
		ttt[2][0] = 'O';
	
}



/*it goes for the middle column and looks for teh first empty space*/
int GoForCenterColumn(void){
	
	int moved = 0; /*flag to see if the computer moved*/
	
	if(ttt[0][1] == ' '){
		ttt[0][1] = 'O';
		moved = 1;
	}else if(ttt[2][1] == ' '){
		ttt[2][1] = 'O';
		moved = 1;
	}	
	
	return moved;
}



/*it goes fro the first empty space on the middle row*/
void GoForCenterRow(void){
		
	if(ttt[1][0] == ' ')
		ttt[1][0] = 'O';
	else if(ttt[1][2] == ' ')
		ttt[1][2] = 'O';
}



void ComputerVSHuman(void){
	
	char key [3][3] = {
	{'a','b','c'},
	{'d','e','f'},
	{'g','h','i'}
	}; /*key for the users*/
	
	int move_count = 0;/*to see how many moves have been done for a tie*/
	
	int i, j; /*counters for the for loops*/
	
	char player = 'X'; /*player moving*/
	char move; /*player selection*/
	
	char start_player; /*to knwo which player starst playing*/
	
	int valid_move = 0; /*to see if the move is valud*/
	int flag = 0; /*to see if there is a tie or someon won */
	int moved; /*flag to see if the computer has already moved*/
	
	/*fills the board with spaces*/
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			ttt[i][j] = ' ';
		}
	}			
	
	/*to keep going until there is a win or a tie*/
	while(flag == 0 && move_count <= 9){
		
		/*saves the first player to move*/
		if(move_count == 0)
			start_player = player;
		
		/*If the player is human ask for input*/
		if(player == 'X'){
			PrintBoard(key);
			PrintBoard(ttt);
			do{
				move = GetInput();
				valid_move = CheckIfMoveIsValid(move);
				valid_move = MarkMove(move, player, valid_move);
				if(valid_move == 0)
					printf("Please type a value from the key or an unused value. \n\n");
			}while(valid_move == 0);
			
		}else{ /*if the computer moves this is the strategy*/
			moved = 0;
			moved = EmptyBoardScenario();
			if(moved == 0){
				moved = PossibleWinOrLossScenario('O');
				if(moved == 0)
					moved = PossibleWinOrLossScenario('X');
			}
			if(moved == 0){
				if(ttt[1][1] == ' '){
					ttt[1][1] = 'O';
					moved =1;
				}else if(start_player == ' '){
					GoForCorner();
					moved = 1;
				}else{
					moved = GoForCenterColumn();
					if(moved == 0){
						GoForCenterRow();
						moved = 1;
					}
				}

			}
		}
		/*this is done when either one plays*/
		flag = CheckForWinVSComputer(player);
		player = ChangePlayer(player);
		/*adds one to the move count if there is no win*/
		if(flag == 0)
			move_count++;
		/*checks if there is a tie*/
		if(move_count == 9)
			printf("It's a tie \n");
		/*ends the game*/
		if(flag == 1 || move_count == 9)
			PrintBoard(ttt);
				
	}
}



void main(void){
	
	char choice; /*to store if the user wants to play a human or a computer*/
	char rerun = 'y'; /*to keep reruning*/
	
	while(rerun == 'y' || rerun == 'Y'){ /*loop to rerun if players want to keep playing*/
		
		/*ask the user if he wants to play against the computer or anothe human*/
		do{
			printf("Would you like to play against a human or the computer? (H/C) ");
			scanf("%c", &choice);
			
			getchar();
			
			if(choice != 'h' && choice != 'H' && choice != 'C' && choice != 'c')
				printf("Please type a valid answer (H/C) \n");
			
		}while(choice != 'h' && choice != 'H' && choice != 'C' &&choice != 'c');
		
		/*checks if it is against a human or the computer*/
		if(choice == 'H' || choice == 'h')
			HumanVSHuman();
		else if(choice == 'C' || 'c')
			ComputerVSHuman();
			
		/*asks the user if they would like to play again*/
		do{
			printf("Would you like to rerun? (y/n) ");
			scanf("%c", &rerun);
		}while(rerun != 'y' && rerun != 'n');
		
		if(rerun == 'y' || rerun == 'Y')
			printf("Greate choice lets play again: \n");
		else
			printf("See you later");

		getchar();
	}
	
} 
