#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to Treasure Island!"<<endl;
    cout<<"Your mission is to find the treasure located somewhere in this island"<<endl;
    cout<<"Upon walking further you encountered a crossroad. Which direction will you choose? (Type 'l' for left or 'r' for Right)"<<endl;
    char choice,i;
    cin>>choice;
    if (choice == 'l'){
        cout<<"You took the left direction but upon moving forward you accidently fell from a high cliff!"<<endl;
        cout<<"GAME OVER!"<<endl;
    }
    else if (choice == 'r'){
        cout<<"You took the right direction and luckily there was nothing that would lead to your death and you are alive"<<endl;
        cout<<"And now you have stumbled across a lake and there is an mini-island at the center of the lake."<<endl;
        cout<<"Would you wait for a boat or you would swim across? Type 's' for swim or 'w' to wait for a boat"<<endl;
        cin>>choice;
        if (choice == 'w'){
            cout<<"You kept waiting but no boat arrived, you gave up and returned to your place"<<endl;
            cout<<"GAME OVER!"<<endl;
        }
        else if (choice == 's'){
            cout<<"You swam across the lake and you reached the island"<<endl;
            cout<<"Upon moving further,you encountered a dungeon and there were three doors, onw was 'blue', second was 'green' and third was 'violet'"<<endl;
            cout<<"Which door would you choose? (Enter 'v' for violet, 'g' for green or 'b' for blue)"<<endl;
            cin>>choice;
            if(choice == 'b'){
                cout<<"You went inside opening the blue door and there were no traps and you found the treasure."<<endl;
                cout<<"CONGRATULATIONS! YOU WON THE GAME"<<endl;
                cout<<"Thank you so much for playing this game!"<<endl;
            }
            else if(choice == 'g'){
                cout<<"You went inside opening the green door but the room caught fire suddenly and you died..."<<endl;
                cout<<"GAME OVER!"<<endl;
            }
            else if(choice == 'v'){
                cout<<"You went inside opening the violet door but the room was infested with lots of beasts and you died..."<<endl;
                cout<<"GAME OVER!"<<endl;
            }
        }
    }
    cin>>i;
    return 0;
}