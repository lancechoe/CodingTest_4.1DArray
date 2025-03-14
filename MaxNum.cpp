/*
Problem
Given 9 different natural numbers, find the maximum value and determine its position in the list.

For example, given the numbers:
3, 29, 38, 12, 57, 74, 40, 85, 61

The maximum value is 85.
It is the 8th number in the list.
Input
Each of the 9 lines contains a single natural number.
All numbers are less than 100.
Output
Print the maximum value on the first line.
Print the position (1-based index) of the maximum value on the second line.
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    int num[9];
    int largest;
    int number;

    for(int i=0;i<9;i++){
        cin >> a;
        num[i] = a;
    }

    largest = num[0];
    number = 0;

    for(int j=1;j<9;j++){
        if(largest < num[j]){
            largest = num[j];
            number = j;
        }
    }

    cout << largest << " " << number+1 << endl;
}