/**
 *  Assignment 3
 *  Individual Task
 *  Mnemonics
 *  Hussien Ashraf Feteiha
 *  20170093
 *  G:4
 */

#include <iostream>
#include <vector>

using namespace std;

char two[3]  ={'A','B','C'}; //lets per each number
char three[3]={'D','E','F'};
char four[3] ={'G','H','I'};
char five[3] ={'J','K','L'};
char six[3]  ={'M','N','O'};
char seven[4]={'P','Q','R','S'};
char eight[3]={'T','U','V'};
char nine[4] ={'W','X','Y','Z'};

void listMnemonics(string number, string& other);

int main()
{
    string number;
    string word ={};
    cout << "Enter Numbers: ";
    cin >> number;
    listMnemonics(number, word);

    return 0;
}


void listMnemonics(string num, string& word)
{
   if (num.empty()){            //base condition
        cout << word << " " ;   //prints the combination
        return;
    }
    if (num[0] == '2'){
        for (int i=0; i<3; i++){                  //loops through the whole letters in number
            word += two[i];                      //adds the letter
            listMnemonics(num.substr(1),word);  //calls same function but without first letter
            word.pop_back();                    //deletes last letter to change it
        }
    }

    else if (num[0] == '3'){
        for (int i=0; i<3; i++){
            word += three[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();

        }
    }

    else if (num[0] == '4'){
        for (int i=0; i<3; i++){
            word += four[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }

    else if (num[0] == '5'){
        for (int i=0; i<3; i++){
            word += five[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }

    else if (num[0] == '6'){
        for (int i=0; i<3; i++){
            word += six[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }

    else if (num[0] == '7'){
        for (int i=0; i<4; i++){
            word += seven[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }

    else if (num[0] == '8'){
        for (int i=0; i<3; i++){
            word += eight[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }

    else if (num[0] == '9'){
        for (int i=0; i<4; i++){
            word += nine[i];
            listMnemonics(num.substr(1),word);
            word.pop_back();
        }
    }
    else if (num[0] == '0' || num[0] == '1'){
        listMnemonics(num.substr(1),word);

    }

return;

}
