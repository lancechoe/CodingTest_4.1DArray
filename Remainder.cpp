/*
Problem
Given 10 natural numbers, compute the remainder when each number is divided by 42.
Then, determine how many distinct remainders exist.

Input
10 lines, each containing a single integer (0 ≤ number ≤ 1000).
Output
Print the count of distinct remainders when the numbers are divided by 42.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num[10];
    vector<int> count;
    int a;
    int cnt = 0;
    int rem = 0;
    int yes = 0;

    for(int i=0;i<10;i++){
        cin >> a;
        num[i] = a;

        if(count.size() == 0){
            count.push_back(a%42);
        }

        for(int j=0;j<count.size();j++){
            if(count[j] != a%42){
                yes = 1;
            } 
            else{
                yes = 0;
                break;
            }
        }

        if(yes == 1){
            count.push_back(a%42);
            yes = 0;
        }
    }

    cout << count.size();

}