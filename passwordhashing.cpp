#include <iostream>
// TO DO: Include a library with a function that can hash a string
using namespace std;

int main() 
{
    int tries = 3;
    string hashedPassword;
    string input;
    string hashedInput;

    // TO DO: hash a string here and assign it to "hashedPassword"

    while(tries > 0)
    {
        cout << "Password: ";
        cin >> input;
        // TO DO: Hash the input

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