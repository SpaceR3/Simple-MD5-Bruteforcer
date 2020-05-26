/*
WORK IN PROGRESS
THIS DOES NOT WORK AT CURRENT TIME




*/


#include <iostream>
#include "MD5.h"
#include <string.h>
#include <vector>

using namespace std;

vector<string> arr;
vector<string> Words = {"maailm","tere"};
vector<string> Final;
vector<string> alphabet = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
bool TestHash(string hash, string correct)
{
    return hash == correct;

}

void AddWords(int max) {
    Words.clear();
    int times = 1;
    bool first = true;
    string tempory = "";
    for (int k = 0; k < alphabet.size(); k++) {
        for (int i = 0; i < max; i++) {

        }
    }
}

void AddArray(int maxLenght) {
    for (int i = 0; i < Words.size(); i++) {
        if (Words[i].length() == maxLenght) {
            arr.push_back(md5(Words[i]));
            Final.push_back(Words[i]);
        }
    }
}

int main()
{
    int lenght = 0;
    cout << "Please enter the final string Lenght: ";
    cin >> lenght;
    AddWords(lenght);
    AddArray(lenght);
    string hash = "";
    cout << "Enter the Hash: ";
    cin >> hash;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (TestHash(arr[i], hash)) 
        {
            cout << "Correct Hash: " << arr[i] << " Value: \"" << Final[i] << "\"" << endl;
        }
        else {
            cout << "Wrong Hash: " << arr[i] << endl;
        }
    }
    system("pause");
}