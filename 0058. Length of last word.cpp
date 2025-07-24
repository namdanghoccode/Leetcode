#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    istringstream iss(s);
    string word, lastWord;

    while(iss >> word){
        lastWord = word;
    }
    return lastWord.length();
}

int main()
{
    string s; getline(cin, s);
    cout << lengthOfLastWord(s);

    system("pause");
}
