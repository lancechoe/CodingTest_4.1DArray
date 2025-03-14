/*
Problem
Given a sequence A of N integers and an integer X, write a program to print all numbers in A that are smaller than X.

Input
The first line contains two integers N and X (1 ≤ N, X ≤ 10,000).
The second line contains N integers forming the sequence A.
Each integer in A is between 1 and 10,000 (inclusive).
Output
Print all numbers in A that are smaller than X, in the same order as they appear in the input, separated by spaces.
There is at least one number smaller than X.
*/

#include <iostream>
using namespace std;

int main(){
    int N, X, a;

    cin >> N >> X;

    int arr[N];

    for(int i=0;i<N;i++){
        cin >> a;
        arr[i] = a;
    }

    for(int i=0;i<N;i++){
        if(arr[i] < X){
            cout << arr[i] << " ";
        }
    }
}