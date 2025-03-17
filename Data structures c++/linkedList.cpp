#include <iostream>
using namespace std;
// can i use i copy the elements of an array into linked list
void Build_link_list_forward()
{
    struct Node
    {
        int data;
        Node *link;
    };

    Node *first, *last, *newnode;
    // initially the link list is empty and first and last both refers to null
    first = last = NULL;
    int number;
    cout << "enter a list of number: ";
    cin >> number;
    cout << "Number stored in the linked list are: ";
   
    while (number != -999)
    {
        newnode = new Node;
        newnode->data = number;
        newnode->link = NULL;
        // checking whether to put the newnod
        if (first == NULL)
        {
            first = newnode;
            last = newnode;
        }
        else
        {
            last->link = newnode;
            last = newnode;
        }

        cout << newnode->data << " ";
        cin >> number;
    } // end loop
    
}

// lets TraverseReverse the array
void LinkedListTraversalReverse()
{
      struct Node
    {
        int data;
        Node *link;
    };

     Node *head, *tail, *newnode;

    if (tail!=NULL)
    {
        Node *current =tail;
            while (current != head)
            {
                Node *prev=head;
                    while (prev->link!=current)
                    {
                        prev=prev->link;
                    }//end while
                cout<<current->data<<" ";
                current=prev;
            }//end outer while
            
    }

    
}
// lets delete from a linkedlist

void LinkedList_Deletion()
{

}

int main()
{
    Build_link_list_forward();
}