#include <iostream>
// creating node;
using namespace std;
class node{
  public:
  int data;
  node*next;

  node(int d){
    data=d;
    next=NULL;
  }
};

int main()
{
    node*n1=new node(1);
    cout<<n1->data<<" "<<n1->next;

    return 0;
}
