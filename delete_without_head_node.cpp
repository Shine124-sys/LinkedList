#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* next;
};
struct node *head;
void print_linked_list(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
void delete_node_without_head(struct node *del){
    if(del==NULL)
    {
        cout<<"List is Empty";
    }
    else{
        struct node *temp=del->next;
        del->data=del->next->data;
        del->next=del->next->next;
        free(temp);
    }

}
int main()
{   struct node *p1= new node;
struct node *p2= new node;
struct node *p3= new node;
struct node *p4= new node;
struct node *p5= new node;
head=p1;
p1->data=34;
p1->next=p2;
p2->data=67;
p2->next=p3;
p3->data=78;
p3->next=p4;
p4->data=90;
p4->next=p5;
p5->data=1;
p5->next=NULL;
cout<<"Before Delete Node Linked List :"<<endl;
print_linked_list(head);
struct node *del=head->next;
delete_node_without_head(del);
cout<<"\nAfter Delete Node Linked List :"<<endl;
print_linked_list(head);
return 0;
}