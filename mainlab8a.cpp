/* 
Description: Using function and place holders,
being able to do arythmatics such 
as addition and on.... Checking for user input failur.    
Input: User inputs a two double within the MIN & MAX range
Output:Users input if not an error, will be the input, and 
the arythmatics, such as +, -, /, and *. 
*/
#include<iostream>
#include<cmath>
using namespace std; 
//function to get promtpt inlcding min and max
double getDoubleInput(string, double, double);
//fucntion to check fail of user input 
bool checkFailure(double, double, double); 
//use function as place holder 
void getDoubleInputs(double&, double&); 
//function for + and - 
void addSubtract(double&, double&); 
//function for * and / 
void multiplyDivide(double&, double&); 
//gloable constants 
const double MIN = 0.5; 
const double MAX = 20.5;

int main () {
//declaration of min and max as const  
    double input1, input2, num1 = 0.0, num2 = 0.0;  

    //make sure results print to setprecisiosn 
    cout.precision(2);
    cout << fixed;
    //function for place holder 
    getDoubleInputs(input1, input2); 
        //place holders to hold the value of the input 
        double hold1 = input1; 
        double hold2 = input2; 
    //- and + arythmatics 
    addSubtract(input1, input2);  
    //place holders for arythmatic 
    num1 = input1; 
    num2 = input2; 
    //print arythamtic 
    cout << hold1 << " + " << hold2 << " = " << num1 << endl; 
    cout << hold1 << " - " << hold2 << " = " << num2 << endl; 
    //secondary place holders for * and /
    double save1 = hold1;
    double save2 = hold2; 
    multiplyDivide(hold1, hold2); 
    //application of placeholders 
    num1 = hold1;
    num2 = hold2; 
    //print arythmatics for * and / 
    cout << save1 << " * " << save2 << " = "<< num1 << endl; 
    cout << save1 << " / " << save2 << " = " << num2 << endl;  
    return 0; 
}
//function to propmpt user with a fial check 
double getDoubleInput(string prompt1, double MIN, double MAX){
   double input1; 
    do
    {
        cout << prompt1; 
        cin >> input1;
        cout << endl; 
    }while(!checkFailure(input1, MIN, MAX)); 
    return input1; 
   //second statement to print following check 
    double input2; 
    string prompt2; 
    do
    {
        cout << prompt2; 
        cin >> input2; 
        cout << endl; 
    }while(!checkFailure(input2, MIN, MAX));
    return input2; 
}
//function check for user input error 
bool checkFailure(double input1 ,double MIN, double MAX){
    int error = 100; 
    //conditions for chechking failur 
    if (input1 <  MIN|| input1 > MAX){
        cin.clear(); 
        cin.ignore(error,'\n');
        cout << "Error: Invalid input!\n";
        return false;  
    }
    return true; 
}
//function to hold and run the inputs using copies of input 
void getDoubleInputs(double& input1, double& input2){
   string prompt1 = "Enter double between " +
        to_string(MIN) + " and " + 
        to_string(MAX) + "\n**"; 

    string prompt2 = "Enter another double between "+
        to_string(MIN) + " and " + 
        to_string(MAX) + "\n**"; 
    
    //to print statment & check failur while copying input 
    input1 = getDoubleInput (prompt1, MIN, MAX);
    input2 = getDoubleInput (prompt2, MIN, MAX);    
}
//function fot + and - 
void addSubtract(double& num1, double& num2){
    num1 += num2; 
    num2 = num1-2 * num2;
}
//function  for * and / 
void multiplyDivide(double& num1, double& num2){
    num1 *= num2; 
    num2 = num1/(num2*num2); 
}
