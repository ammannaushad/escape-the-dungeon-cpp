#include <iostream>
#include <string>

using namespace std;

int main () {
int directions,Firstchoice,Secondchoice,doorChoice;
int health= 100;


cout<< "Welcome to Escape the Dungeon"<<endl;
cout<< "You find yourself trapped in a dark dungeon."<<endl;
cout<< "Your mission is to find a way out."<<endl;

do {
    cout<< "Make your selection: ";
    cout<< "1. Select Left"<<endl;
    cout<< "2. Select Right"<<endl;
    cin>> directions;

if (directions != 1 && directions != 2) {
cout<< "Error. Choose 1 or 2"<<endl;
continue;
}

if (directions == 1) {
cout<< "You chose Left."<<endl;
cout<< "You see a guard approaching you."<<endl;
cout<< "1. Fight the guard"<<endl;
cout<< "2. Run away from the guard"<<endl;
cin>> Firstchoice;

if (Firstchoice == 1) {
cout<< "You fight the guard and lose 50% of your health."<<endl;
} else if (Firstchoice == 2) {
cout<< "You run away from the guard safely."<<endl;
} else {
cout<< "Error. The guard caught you. GAME OVER."<<endl;
    break;
    }
}

else if (directions == 2) {
cout<< "You chose Right"<<endl;
cout<< "You have arrived at the kitchen."<<endl;
cout<< "1. Stay here for a bit and figure out how to escape"<<endl;
cout<< "2. Pick up a lantern, eat some food to gain health, and continue walking."<<endl;
cin>> Secondchoice;

if (Secondchoice == 1) {
cout<< "You spent too much time in the kitchen and were caught by a guard. GAME OVER."<<endl;
    break;
} else if (Secondchoice == 2) {
cout<< "You eat the food"<<endl;
cout<< "You continue to walk straight until you encounter two strange doors."<<endl;
cout<< "You see a glowing door with gold reflecting inside"<<endl;
cout<< "You see a dark door with relfections of monster inside"<<endl;
cout<< "1. Walk inside the glowing door."<<endl;
cout<< "2. Walk inside the dark door."<<endl;
cin>> doorChoice;

if (doorChoice != 1 && doorChoice != 2) {
cout<< "Error. GAME OVER."<<endl;
    break;
}


switch (doorChoice) {
case 1:
cout<< "You chose to walk inside the glowing door."<<endl;
cout<< "Congratulations, you have escaped."<<endl;
    break;

case 2:
cout<< "You chose to walk inside the dark door."<<endl;
cout<< "The monsters attacked you and you lost all of your health"<<endl;
cout<< "GAME OVER"<<endl;
    break;

default:
cout<< "Error. You are trapped. GAME OVER."<<endl;
    break;
}

} else {
cout<< "Error. You are trapped. GAME OVER."<<endl;
    break; 
    }
}

cout<< "Thanks for playing Escape the Dungeon"<<endl;
    break;
}

return 0;
}