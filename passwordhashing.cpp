#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int tries = 3;
    hash<string> hasher;
    size_t hashedPassword;
    string input;
    size_t hashedInput;

    hashedPassword = hasher("GoogleSux4445");

    // cout << "Hash value: " << hashedPassword << endl; // Used for testing

    while(tries > 0)
    {
        cout << "Password: ";
        cin >> input;
        hashedInput = hasher(input);

        if(hashedInput == hashedPassword)
        {
            cout << "Password verified. Access Granted." << endl;
            break;
        }
        else
        {
            cout << "ACCESS DENIED\a" << endl;
            tries--;
        }
    }

    if(tries <= 0)
    {
        cout << "...and..." << endl;
        
        for(int i; i < 256; i++)
        {
            cout << "YOU DIDN'T SAY THE MAGIC WORD!" << endl;
        }
    }
    
    return 0;
}