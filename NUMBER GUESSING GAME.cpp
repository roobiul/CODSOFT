//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<ctime>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
int main () {
 
    srand (time(0));

    ll randomNumber= rand()%100+1;

    ll guessNumber,countTry=0;
    ctt  "Welcome to the Number Guessing Game!"<<endl;
    ctt "Guess a number between 1 to 100"<< endl;

    do {
        ctt "Enter Your Guess: "<< endl;
        cin >> guessNumber;
        countTry++;

        if (guessNumber>randomNumber)
        {
            ctt "Too high! Try again!"<< endl;
        }
        else if (guessNumber<randomNumber)
        {
            ctt "Too low! Try again!"<< endl;
           
        }
        else 
        {
            ctt "WOW! You guessed the Number : "<< randomNumber<<endl;
            ctt "It took you : "<<countTry<<" times!"<< endl;
        }
        
    }while (guessNumber!=randomNumber);
    
    
 
 
return 0;
}