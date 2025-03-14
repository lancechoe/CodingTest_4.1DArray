/*
Problem
Dohyeon has N baskets, each labeled from 1 to N. Initially, each basket contains a ball with the same number as the basket.

Dohyeon will perform M operations where he swaps the balls between two chosen baskets.

Write a program that determines the number on the ball in each basket after all M swap operations.

Input
The first line contains two integers: N (1 ≤ N ≤ 100) and M (1 ≤ M ≤ 100).
The next M lines each contain two integers i j, meaning:
Swap the balls in basket i and basket j.
(1 ≤ i ≤ j ≤ N)
Dohyeon processes the operations in order.

Output
Print the numbers on the balls in baskets 1 to N, separated by spaces.
*/

#include <iostream>
using namespace std;

int main(){
    int N, M;
    int a, b;
    int O;

    cin >> N >> M;

    int basket[N];

    for(int i=0;i<N;i++){
     basket[i] = i+1;
    }

    for(int i=0;i<M;i++){
        
        cin >> a >> b;

        if(a != b){
            O = basket[a-1];
            basket[a-1] = basket[b-1];
            basket[b-1] = O;
        }
    }

    for(int i=0;i<N;i++){
        cout << basket[i] << " ";
    }
    
}

/*
5 4
1 2
3 4
1 4
2 2

1 2 3 4 5
2 1 3 4 5
2 1 4 3 5
*/

