/*  
Description: using user defined functions to print out char
by user input. A triangle printing upside down to right side
up.     
Input: prompted to input in a valid number and character 
Output: output a upside down tringle & a right side up 
triangle using the char up to the user input number. 
*/
#include <iostream> 
#include <cmath>
using namespace std; 
//function to prompt user inlcuding the min & max
int getIntegerInput (string, int, int); 
//function to print/ask for char to print 
char getCharacterInput (string); 
//function to decreament the char input 
void writeUpsideDownTriangle(int, char); 
//function to increament the char input 
void writeRightsideUpTriangle(int, char);

int main() {
	// Minimums/maximums
	const int MIN = 2;
	const int MAX = 20;
	// Prompt for integer input
	string prompt1 = "Enter a count between " +
		to_string(MIN) + " and " +
		to_string(MAX) + "\n**";
	// Prompt for character input
	string prompt2 = "\nEnter a character\n**";
	
	// Get size of triangle
	int size = getIntegerInput(prompt1, MIN, MAX);
	// Get character to use when printing triangle
	char character = getCharacterInput(prompt2);
	
	// Write both triangles
	writeUpsideDownTriangle(size, character);
	writeRightsideUpTriangle(size, character);
	cout << endl;
	
	// Terminate the program
	return 0;
}
//function to print out prompt stament
int getIntegerInput (string prompt1, int MIN, int MAX) {
    int size; 
	int error = 100; 
	do{//do..while loop to check for cin fail          
        cout << prompt1; 
        cin >> size;   
        cout << endl;   //permaiters for the cin fail        
            if (cin.fail() || (size < MIN || size > MAX)){
               cin.clear (); 
               cin.ignore (error,'\n'); 
               cout << "Error: Invalid input!\n"; 
            } 
    }while (cin.fail () || (size < MIN || size > MAX)); 
	return size; 
}
//function to print out 2nd propmpt 
char getCharacterInput (string prompt2){
    char character = '\0'; 
    cout << prompt2; 
    cin >> character;
	cout << endl;  
	return character; 
}
//for loop to decrement the char from user input ot 1 
void writeUpsideDownTriangle(int size, char character) {
	for ( int i = size; i > 0; i--){  
        for (int j = 0; j < i; j++){ //char to print 
            cout << character;
        }
        cout << endl; 
    }
}
//while loop increment char till user input is reached
void writeRightsideUpTriangle(int size , char character){
	int i = 0;  
        while (i < size) {
            int j=0;
            while (j <= i){
                cout << character; 
                j++;  
        	}
        	cout << endl; 
            i++;  
        }
}
