/*
Problem
Given N integers, write a program to find the minimum and maximum values.

Input
The first line contains an integer N (1 ≤ N ≤ 1,000,000), representing the number of integers.
The second line contains N integers separated by spaces.
Each integer is between -1,000,000 and 1,000,000 (inclusive).
Output
Print the minimum and maximum values among the given N integers, separated by a space.
*/

#include <iostream>
using namespace std;

int main(){
    int N, a;
    int smallest;
    int largest;

    cin >> N;

    int num[N];
    
    for(int i=0;i<N;i++){
        cin >> a;
        num[i] = a;
    }

    smallest = num[0];
    largest = num[0];

    for(int i=1;i<N;i++){
        if(smallest > num[i]){
            smallest = num[i];
        }
        if(largest < num[i]){
            largest = num[i];
        }
    }

    cout << smallest << " " << largest;
}