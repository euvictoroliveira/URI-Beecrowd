#include <iostream>
#include <string>
#include <cctype>


using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    string sentenca;
    bool maiuscula;

    while(getline(cin, sentenca)){
        maiuscula = true;

        for(int i = 0; i < (int)sentenca.length(); i++){
            if(!isalpha(sentenca[i]))
                continue;

            if(maiuscula)
                sentenca[i] = toupper(sentenca[i]);
            else
                sentenca[i] = tolower(sentenca[i]);

            maiuscula = !maiuscula;
            
        }

        cout << sentenca << endl;
    }

    return 0;
}