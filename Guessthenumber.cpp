#include<iostream>
#include<cstdlib>//This header to generate random number
using namespace std;
int main(){
    //Random number generator
    int number;
    srand(time(0));
    number = rand()%100+1; //random number between 1 and 100
    cout<<"Random Number : "<<number<<endl;

    int guess, nGuess=1;
    cout<<"--------------------------------------"<<endl;
    cout<<"| Guess the number between 1 and 100 |"<<endl;
    cout<<"--------------------------------------"<<endl;
    do{
        cout<<"Enter Your Number : ";
        cin>>guess;

        if(guess>number){
            cout<<"Lower Number Please !"<<endl;
        }
        else if(guess<number){
            cout<<"Higher Number Please !"<<endl;
        }
        else{
            cout<<"Congratulation! You Guessed in "<<nGuess<<" attempts"<<endl;
        }
        nGuess++;
    }while (guess != number);


    return 0;
}
