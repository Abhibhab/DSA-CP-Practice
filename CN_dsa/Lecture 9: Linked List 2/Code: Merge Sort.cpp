Code: Merge Sort
Send Feedback
 Given a singly linked list of integers, sort it using 'Merge Sort.'
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format :
For each test case/query, print the elements of the sorted singly linked list.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 Sample Output 2 :
2
-1
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 
  /****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node* mergeTwoLLs(Node *head1, Node *head2) {
    

    Node *p=NULL,*q=NULL;
    if(head1->data<head2->data)
    {
        p=head1;
        q=head1;
        head1=head1->next;
        
        
    }
    else if(head1->data>=head2->data)
    {
        p=head2;
        q=head2;
        head2=head2->next;
       
        
    }
    while(head1&&head2)
    {
       if(head1->data<head2->data)
       {
           q->next=head1;
           q=head1;
           head1=head1->next;
           q->next=NULL;
       }
    else if(head1->data>=head2->data)
       {
           q->next=head2;
           q=head2;
           head2=head2->next;
           q->next=NULL;
       }
    }
    if(head1)
        q->next=head1;
    if(head2)
        q->next=head2;
    
    
    return p;
}
Node *midPoint(Node *head)
{
    if (head==NULL){
        return head;
    }
    Node *slow=head,*fast=head;
    while(fast->next&&fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
   
}

Node* mergeSort(Node *head) {
    //write your code here
   if(head==NULL|| head->next==NULL)
        {return head;}
     
     //breaking node into two half  
    Node *p=midPoint(head);
  
    Node *head1=p->next;
    p->next=NULL;
    
  head=mergeSort(head);
    head1=mergeSort(head1);
    
    return mergeTwoLLs(head,head1);
    
}
#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}
