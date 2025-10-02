#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    // 0 = snake
    // 1 = water    
    // 2 = gun

    srand(time(0));
    int computer=rand() %3;
    char op;

    if(computer==0){
        op='s';
    }
    else if (computer==1){
        op='w';
    }
    else{
        op='g';
    }

    string opr;
    
    //converting s,w and g into snake , water and gun of computer
    if(op=='s'){        
        opr="snake";
    }
    else if (op=='w'){
        opr="water";
    }
    else{
        opr="gun";
    }    

    char you;
    cout<<"Enter your Choice(s,w,g)"<<'\n';
    cin>>you;

    string youans;

    //converting s,w and g into snake , water and gun of you(user)
    if(you=='s'){       
        youans="snake";
    }
    else if (you=='w'){
        youans="water";
    }
    else{
        youans="gun";
    }

    cout<<"You chooses "<<youans<<'\n'<<"Computer chooses "<<opr<<'\n';

    if(you==op){
        cout<<("Draw")<<'\n';
    }
    else{
        if(you=='s' && op=='w'){
            cout<<("You Win")<<'\n';
        }
        else if(you=='s' && op=='g'){
            cout<<("You Lose")<<'\n';
        }
        else if(you=='w' && op=='s'){
            cout<<("You Lose")<<'\n';
        }
        else if(you=='w' && op=='g'){
            cout<<("You Win")<<'\n';
        }
        else if(you=='g' && op=='s'){
            cout<<("You Win")<<'\n';
        }
        else if(you=='g' && op=='w'){
            cout<<("You Lose")<<'\n';
        }       
        else{
            cout<<("Invalid ")<<'\n';
        }
    }

    return 0;
}