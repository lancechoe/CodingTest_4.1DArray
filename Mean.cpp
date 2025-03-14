/*
Problem
Sejun did poorly on his final exam, so he decided to manipulate his scores. He chose his highest score, M, and then recalculated all his scores using the formula:

new score
=
original score
𝑀
×
100
new score= 
M
original score
​
 ×100

For example, if Sejun's highest score is 70 and his math score is 50, his new math score would be:

50
70
×
100
=
71.43
70
50
​
 ×100=71.43

Given the new scores, calculate the new average of all scores.

Input
The first line contains an integer N, the number of subjects (1 ≤ N ≤ 1000).
The second line contains N integers, representing Sejun's scores (0 ≤ score ≤ 100). At least one score will be greater than 0.
Output
Print the new average score with a precision that meets the condition of absolute or relative error being no more than 
10

*/

#include <iostream>
using namespace std;

int main(){
    int N;
    double a;
    double sum = 0;
    double max = 0;

    cin >> N;

    double score[N];

    for(int i=0;i<N;i++){
        cin >> a;
        score[i] = a;
    }

    for(int i=0;i<N;i++){
        if(max < score[i]){
            max = score[i];
        }
    }

    for(int i=0;i<N;i++){
        score[i] = score[i] / max * 100;
        sum += score[i];
    }

    cout << sum/N << endl;
}