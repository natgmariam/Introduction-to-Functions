/*  
Description: Using function, being able to calculate the area,
circumference based on a radius that is a user input. Checking 
for user input failur.    
Input: User inputs a double within the MIN & MAX range
Output:Users input if not an error, as well as the raqius, 
circumference, and area up to two decimal places. 
*/
#include <iostream> //cout libraray 
#include <cmath> //c++ math libary 
using namespace std;
//function to get promtpt inlcding min and max
double getDoubleInput(string, double, double); 
//fucntion to check fail of user input 
bool checkFailure(double, float, float); 
//function to calculate circumference 
void circumference(double); 
//function to calculate area based on usser input 
void area(double);
//globabl const of pi
const double pi = 3.141592;
//C++ mian function  
int main (){
    //declaration of min and max as const 
    const double MIN = 0.5; 
    const double MAX = 20.5;
    //// Prompt for integer input
    string prompt = "Enter a circle radius between " +
        to_string(MIN) + " and " + 
        to_string(MAX) + "\n**"; 
    //make sure results print to setprecisiosn 
    cout.precision(2);
    cout << fixed;
    //get radius for the functions  
    double radius = getDoubleInput (prompt, MIN, MAX);    
    //check for input failur // parameters  
    checkFailure(radius, MIN, MAX);
    //functio to calculate circumference 
    circumference(radius);
    //function to calculate area 
    area(radius);  
    //cout << endl; 
    return 0; 
}
//function to print out statment 
double getDoubleInput(string prompt, double MIN, double MAX){
    double radius; 
  do{   
        cout << prompt; 
        cin >> radius;
        cout << endl; 
     //loop chechking for faliur  
    }while(!checkFailure(radius, MIN, MAX));
    //if no faliur to print out input
    cout << "Radius: " << radius << endl;
    return radius;
} 
//fucntion to check for user error/failur 
bool checkFailure(double radius, float MIN, float MAX){    
    //bool statement for checking 
    int error = 100;  
    //condidtions for faliur 
    if (radius < MIN || radius > MAX){
        cin.clear(); 
        cin.ignore(error,'\n');
        cout << "Error: Invalid radius!\n";
        return false; 
    }
    //if no faliur to continue with program 
    return true;      
}    
//function to calculate circumference 
void circumference(double radius){ 
    double c; //declaration of circumference 
   //equation for circumfrance 
    c = 2 * pi * radius; 
    cout << "Circumference: " << c << endl;
}
//function to calculate area 
void area(double radius){
    double a; 
    //calculation for area
    a = pi * pow(radius, 2); 
    cout << "Area: " << a << endl; 
}