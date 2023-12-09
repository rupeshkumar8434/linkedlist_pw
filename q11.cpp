#include <iostream>
// printing in reverse order
using namespace std;
class node{
  public:
  int data;
  node*next;

  node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void reverseprint(node*head){
    //base case
    if(head==NULL){
        return ;
    }
    reverseprint(head->next);

    cout<<head->data<<" ";
}

int main()
{    
   node*n1=new node(5);
    node*head=n1;
    node*n2=new node(6);
    node*n3=new node(6);
    node*n4=new node(6);
    node*n5=new node(3);
    node*n6=new node(4);
    node*n7=new node(3);
    
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    reverseprint(head);

    return 0;
}