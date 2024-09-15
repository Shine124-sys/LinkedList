
#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node *next;
};
struct node *h1,*h2;
int print_sum_two_linked_list(struct node *h1,struct node *h2)
{

    int sum1=0;
    //sum of first list
    struct node *t1 = h1;
    while (t1 != NULL)
    {
        sum1+=t1->data ;
        t1 = t1->next;
    }
    //sum of second list
    struct node *t2 = h2;
    while (t2 != NULL)
    {
        sum1+=t2->data ;
        t2 = t2->next;
    }
   return sum1;
}

int main()
{  
    //first linked list
     struct node *p1= new node;
struct node *p2= new node;
struct node *p3= new node;
struct node *p4= new node;
struct node *p5= new node;
h1=p1;
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


//second linked list
 struct node *s1= new node;
struct node *s2= new node;
struct node *s3= new node;
struct node *s4= new node;
struct node *s5= new node;
h2=s1;
s1->data=34;
s1->next=s2;
s2->data=67;
s2->next=s3;
s3->data=78;
s3->next=s4;
s4->data=90;
s4->next=s5;
s5->data=1;
s5->next=NULL;

int t_sum=print_sum_two_linked_list(h1,h2);
cout<<"Total sum of two linked list : "<<t_sum;


return 0;
}