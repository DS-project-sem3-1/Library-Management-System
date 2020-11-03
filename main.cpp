#include <iostream>

using namespace std;

struct b_node
{
    char b_name[70];
    char b_id[5];
    char b_genre[30];
    char b_author[60];
    double price;
    int edition;
    int total_qty;
    int qty_left;

    b_node * next;
};


class book
{
    b_node * head;
    public:
        book()
        {
            head=NULL;
        }

        void add_book();
        void update_b_details();
        void remove_book();

        //void  recommend_book(head);
};



void book::add_book()
{  struct b_node *newnode,*temp;
newnode= (struct b_node *)malloc(sizeof(struct b_node))
    printf(“Enter book name\n”);
    scanf(&str, newnode->b_name); 
    printf(“Enter book ID\n”);
    scanf(&str, newnode->b_id); 
    printf(“Enter book genre\n”);
    scanf(&str, newnode->b_ genre); 
    printf(“Enter book author\n”);
    scanf(&str, newnode->b_author); 
    printf(“Enter price of the book\n”);
    scanf(&double, newnode->price); 
    printf(“Enter book edition\n”);
    scanf(&int, newnode->edition); 
    printf(“Enter quantity of the book\n”);
    scanf(&int, newnode-> total_qty);
    //printf(“Number of books left”);
// to be or not to be taken by the user!
newnode->next=null;

if(head==null)
{head=temp=newnode;}
else
{temp->next=newnode;
temp=newnode;}

}

void book::remove_book()
{int b;
    cout<<"enter element to be deleted ";
    cin>>b;
   int i=1;
struct b_node *temp;
struct b_node *nextnode;
temp=head;
while(i<b-1)
    {
        temp=temp->next;
        i++;
    }
 nextnode=temp->next;
 temp->next=nextnode->next;
    delete nextnode;


}

//struct b_node* book:: srch(){
//    int bid;
//            cout<<"enter book id to be deleted ";
//            cin>>bid;
// struct b_node *temp =head;
//    while (temp != NULL)
//    {
//        if ( temp-> b_id == bid)
//        {
//            return temp;
//        }
//        temp = temp->next;
//    }
//    return NULL;
//}


struct v_node
{
    char v_name[70];
    char mem_no[5];
    char email[30];
    char mem_type[40];
    char exp_date[12];//Input date as : "Enter date (DD/MM/YY):";
    int no_of_books;
    int reissue_times;//DO NOT take this as input from user
    double money_due;
    char m_b_id[5];//id of book issued to member, only one book can be issued at a time

    v_node * next;
};

class visitor
{
    v_node * head;
    public:
        visitor()
        {
            head=NULL;
        }

        void add_member();
        void remove_member();
        void add_details();
        void remove_details();
        void update_details();

        //Issue
        //Re-issue
        //Return
};




void visitor::add_member()
{
    //Sakshi or Shikha
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
