// Replace pi (recursive)
// Send Feedback
// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
// Sample Input 1 :
// xpix
// Sample Output :
// x3.14x
// Sample Input 2 :
// pipi
// Sample Output :
// 3.143.14
// Sample Input 3 :
// pip
// Sample Output :
// 3.14p


#include <bits/stdc++.h>
using namespace std; 



void replacePi(char input[])
{
      if(input[0]=='\0')
        return;
    
    replacePi(input+1);
    
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';
        input[1]='.';
        
        int size=strlen(input);
        for(int i=size+2;i>1;i--){
            input[i]=input[i-2];
        }
        input[2]='1';
        input[3]='4';
    }
    
    
}

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
