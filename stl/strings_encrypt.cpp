#include <iostream>
#include <string>


using namespace std;


const string alphabet {"abcdefghijklmnoprstuwxyzABCDEFGHIJKLMNOPRSTUWXYZ"};
const string encrypted_alphabet {"ZYXWUTSRPONMLKJIHGFEDCBAqwertyuiopasdfghjklzxcvbnm"};


int main()
{
    string in_msg;
    cout << "Provide sentence to encrypt: ";
    getline(cin, in_msg);

    // Encrypt
    for(size_t i=0; i < in_msg.length(); i++)
    {
        char letter = in_msg.at(i);
        size_t pos = alphabet.find(letter);
        if (pos != string::npos)
        {
            in_msg.at(i) = encrypted_alphabet.at(pos);
        }
    }

    cout << "Encrypted msg: " << in_msg << endl;

    // Decrypt
    for(size_t i=0; i < in_msg.length(); i++)
    {
        char letter = in_msg.at(i);
        size_t pos = encrypted_alphabet.find(letter);
        if (pos != string::npos)
        {
            in_msg.at(i) = alphabet.at(pos);
        }
    }

    cout << "Encrypted msg: " << in_msg << endl;

    return EXIT_SUCCESS;
}


