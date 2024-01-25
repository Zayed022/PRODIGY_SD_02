#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main(){
    cout<<"\n\t\t\t Welcome to guess the number game."<<endl;
    cout<<"You have to guess a number between 1 and 100."<<endl;
    cout<<"You'll have limited choices based on the level you choose.Good Luck!"<<endl;
    while(true){
        cout<<"\nEnter the difficulty level: "<<endl;
        cout<<"1.Easy(10 Choices)\t"<<endl;
        cout<<"2.Medium(7 Choices)\t"<<endl;
        cout<<"3.Hard(5 Choices)\t"<<endl;
        cout<<"0.Ending the game\n"<<endl;
        int difficultyChoice;
        cout<<"Enter the difficulty level choice code(1,2,3) and to exit press 0: "<<endl;
        cin>>difficultyChoice;
        srand(time(0));
        int secretNumber=1+(rand()%100);
        int playerChoice;
        if(difficultyChoice==1){
            cout<<"You have 10 choices for finding the secret number between 1 and 100."<<endl;
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well Played!!! You Won "<<playerChoice<<" is the secret number."<<endl;
                    cout<<"\t\t\t Thanks for Playing..."<<endl;
                    cout<<"\t\t\tPlay the game again with us..\n\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope"<<playerChoice<<" is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen."<<endl;

                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen."<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<" .You lose!\n\n"<<endl;
                        cout<<"Play the game again!"<<endl;

                    }
                }
            }
        }
        else if(difficultyChoice==2){
            cout<<"\nYou have 7 choices for finding the secret number between 1 and 100."<<endl;
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout<<"\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well Played!!! You Won "<<playerChoice<<" is the secret number."<<endl;
                    cout<<"\t\t\t Thanks for Playing..."<<endl;
                    cout<<"Play the game again with us\n\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope "<<playerChoice<<" is not the right number.\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen."<<endl;

                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen."<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<".You lose!\n\n"<<endl;
                        cout<<"Play the game again!"<<endl;

                    }
                }
            }
        }
        else if(difficultyChoice==3){
            cout<<"\nYou have 5 choices for finding the secret number between 1 and 100."<<endl;
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout<<"Well Played!!! You Won "<<playerChoice<<" is the secret number."<<endl;
                    cout<<"\t\t\t Thanks for Playing..."<<endl;
                    cout<<"\t\t\tPlay the game again with us..\n\n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope "<<playerChoice<<" is not the right number.\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret number is smaller than the number you have chosen."<<endl;

                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen."<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left."<<endl;
                    if(choicesLeft==0){
                        cout<<"You couldn't find the secret number, it was "<<secretNumber<<".You lose!\n\n"<<endl;
                        cout<<"\t\t\tPlay the game again!"<<endl;

                    }
                }
            }
        }
        else if(difficultyChoice==0){
            exit(0);
        }
        else{
            cout<<"Wrong choice,Enter valid choice to play the game!(0,1,2,3)"<<endl;

        }
    }

    return 0;
}
