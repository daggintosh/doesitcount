#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string fact [10] = {"foxes aren't purple",
"foxes have noses", 
"foxes sometimes scream", 
"fox bite", 
"h", 
"foxes do not know how to exist", 
"fox mccloud won my smash bros tourny",
"some foxes arent red",
"im going to get banned",
"lucidi is a human"};

int main() {
    srand (time(0));
    int factnum = rand() % 10;
    cout << "Did you know..." << endl << fact[factnum] << endl;
    return 0;
}