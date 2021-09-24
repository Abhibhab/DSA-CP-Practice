Pair Star
Send Feedback
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
// Change in the given string itself. So no need to return or print the changed string.

#include<bits/stdc++.h>
using namespace std;

void pairStar(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return;
    }
    pairStar(input+1);
    if(input[0]==input[1] ){
        for(int i=strlen(input)+1;i>=1;i--){
            input[i]=input[i-1];
        }
        input[1]='*';
        
    }

}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
