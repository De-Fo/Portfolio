//The task
// At the input you get the number of cubes that are stacked on top of each other
// and the number that is on the top wall of the highest cube. 
// Find the sum of the numbers on the sides that are not visible from either side, 
// either because they touch the floor (the lowest cube) or are covered by another cube (the one below or above it).

// Input format
// The first line contains the number n (1≤n≤1000) indicating the number of dice. 
// The second line contains the number x (1≤x≤6) - the number on the top wall of the cube.

// Output format
// Write one number - the searched sum of hidden numbers. Don't forget to put a line after the number.


#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    c = 0;
    cout << "Input number of dices" << endl;
    cin >> a;

    cout << "Input number on top side of dice" << endl;
    cin >> b;
    
    
    
    while (a == 1){

        if (b==1){
            c += 6;
            a -= 1;
        }

        else if (b==2){
            c += 5;
            a -= 1;
        }

        else if (b==3){
            c += 4;
            a -= 1;
        }   

        else if (b==4){
            c += 3;
            a -= 1;
        }   

        else if (b==5){
            c += 2;
            a -= 1;
        }   

        else if (b==6){
            c += 1;
            a -= 1;
        }   

    }

    cout << c << endl;

}