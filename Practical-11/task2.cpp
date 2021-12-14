#include <iostream>
using namespace std;

class Mammals{
    public:
    void displayMammal(){
        cout << "I am a Mammal\n";
    }
};

class MarineAnimals{
    public:
    void displayMarineAnimal(){
        cout << "I am a Marine Animal\n";
    }
};

class BlueWhale:public Mammals,public MarineAnimals{
    public:
    void displayBlueWhale(){
        cout << "I belong to both categories: Mammals as well as Marine Animals\n";
    }
};

int main(){
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;
    mammal.displayMammal();
    marineAnimal.displayMarineAnimal();
    blueWhale.displayBlueWhale();
    blueWhale.displayMammal();
    blueWhale.displayMarineAnimal();    
}