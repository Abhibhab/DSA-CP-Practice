Return all codes - String
Send Feedback
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
#include<map>
using namespace std;
map<string,char> keyMap;

int getCodes(string input, string output[10000]) 
{
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    char ch='a';
    for(int i=1;i<=26;i++,ch++)
        keyMap[to_string(i)]=ch;
    
    if(input=="")
    {
        output[0]="";
        return 1;
    }

    int smallOutput1=getCodes(input.substr(1),output);
    int smallOutput2=0;

    if(input.size()>1 && stoi(input.substr(0,2))<=26)
        smallOutput2=getCodes(input.substr(2),output+smallOutput1);

    int smallOutput=smallOutput1+smallOutput2;

    for(int i=0;i<smallOutput1;i++)
    {
        output[i]=keyMap[string(1,input[0])]+output[i];
    }

    for(int j=smallOutput1;j<smallOutput;j++)
    {   
        output[j]=keyMap[input.substr(0,2)]+output[j];
    }
    
    return smallOutput;    
  
}
#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
