/*
Description: using functions to do arythamtic with ints 
and strings by overloading and checking for fail. 
Input: both ints and strings are input 
Output: output arythmatics done by the function, overloading  
*/
#include <iostream>
#include<cmath>
#include<string>
using namespace std; 
//function to get int input
int getInput(string, int, int);
//function to get input string 
string getInput(string);
//function for fail check 
bool checkFailure(int, int, int);
//function to add ints 
int add(int, int);
//function to add strings 
string add(string, string);
//function for multiply ints 
int multiply(int, int);
//function to multiply string and int 
string multiply(string, int); 

const int MIN = 1; 
const int MAX = 50; 
int main(){
    int num1, num2; //declaring inputs 
    string str1, str2; //declaring inputs 
    //prompting user fr integer 
    string prompt1 = "Enter an integer between " +
        to_string(MIN) + " and " + 
        to_string(MAX) + "\n**"; 
    //second prompt 
    string prompt2 = "Enter another integer between "+
        to_string(MIN) + " and " + 
        to_string(MAX) + "\n**"; 
    //prompting user for a string 
    string prompt3 = "Enter a string\n**"; 
    //prompting user for string 
    string prompt4 = "Enter another string\n**";
    //calling input function 
    num1 = getInput(prompt1, MIN, MAX); 
    num2 = getInput(prompt2, MIN, MAX); 
    //calling string function 
    str1= getInput(prompt3); 
    str2= getInput(prompt4); 
    //calling addition function of int 
    int sum1 = add(num1, num2); 
    cout << num1 << " + " << num2 << " = " << sum1 << endl;
    //calling additioin function for strings  
    string sum2 = add(str1, str2); 
    cout << str1 << " + " << str2 << " = " << sum2 << endl;
    //calling multiplication function for int
    int sum3 = multiply(num1, num2); 
    cout << num1 << " * " << num2 << " = " << sum3 << endl;
    //function to multply string and int 
    string sum4 = multiply(str1, num1); 
    string sum5 = multiply(str2, num2); 
    cout << str1 << " * " << num1 << " = " << sum4 << endl; 
    cout << str2 << " * " << num2 << " = " << sum5 << endl;
    return 0; 
}
//first propmt for input and check if input fails
int getInput(string prompt1, int MIN, int MAX) {
    int num1; 
    do
    {
        cout << prompt1; 
        cin >> num1;
        cout << endl; 
    }while(!checkFailure(num1, MIN, MAX)); 
    return num1; 
   //second statement to print following check 
    int num2; 
    string prompt2; 
    do
    {
        cout << prompt2; 
        cin >> num2; 
        cout << endl; 
    }while(!checkFailure(num2, MIN, MAX));
    return num2; 
}
//propmt user for sstring input 
string getInput(string prompt3){
    string str1; 
    cout << prompt3; 
    cin >> str1; 
    cout << endl; 
    return str1; 

    string prompt4;
    string str2; 
    cout << prompt4;
    cin >> str2; 
    cout << endl; 
    return str2; 
}
//check for int fail in input 
bool checkFailure(int num1, int MIN, int MAX){
    int error = 100; 
    //conditions for chechking failur 
    if (num1 <  MIN|| num1 > MAX){
        cin.clear(); 
        cin.ignore(error,'\n');
        cout << "Error: Invalid input!\n";
        return false;  
    }
    return true; 
}
//addition of ints 
int add(int num1, int num2){
    int sum; 
    sum = num1 + num2;
    return sum; 
}
//adding strings, so they repear 
string add(string str1, string str2){
    string sum; 
    sum = str1 + str2;  
    return sum; 
}
//multiplying ints 
int multiply(int num1, int num2){
    int sum; 
    sum = num1 * num2; 
    return sum; 
}
//mulitplying string, by looping it till it hits num input 
string multiply(string str1, int num1){
    string sum = "";
    int i; 
    for(i=0; i < num1; i++){
        sum += str1;
    }
    return sum; 
}
