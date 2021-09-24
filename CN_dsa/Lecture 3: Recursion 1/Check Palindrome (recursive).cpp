Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
  
  bool isPalRec(char str[],
              int s, int e)
{
     
    
    if (s == e)
    return true;
 
  
    if (str[s] != str[e])
    return false;
 
    if ( e-s>=2)
    return isPalRec(str, s + 1, e - 1);
 
    return true;
}



bool checkPalindrome(char input[]) {
    int size=0;
    while(input[size]!='\0'){
        size++;
    }
    return isPalRec(input,0,size-1);
   
  


    
    

}


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
