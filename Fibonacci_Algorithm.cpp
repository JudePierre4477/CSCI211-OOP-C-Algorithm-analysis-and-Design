#include <iostream>
using namespace std;

/*
Algorithm that finds the nth fibonacci number using efficiency consepts like dynamic programming
and memoization.*/

//Function to find the nth term of the fibonacci sequence.
int fib(int n){
    static int memo[100]{0}; //Static array that stores the solutions to the previous numbers.
    //Base case.
    if(n==1 || n == 2){
        return 1;
    }
    if (memo[n]>0){ //Conditional that checks for previous computed value for the two previous fib numbers.
        return memo[n];
    }
    return memo[n]= fib(n-1)+fib(n-2); 
}

int main(){
    //Finding the first 100 numbers of the fibonacci sequence.
    for(int i=1; i<=100; i++){
    cout << fib(i) << endl;
    }
    return 0;
}
