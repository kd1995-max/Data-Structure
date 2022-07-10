//1.using vector:- 
vector<int> factorial(int N)
{
        // code here
        vector<int>res;
       res.push_back(1);
       
       for(int each=2;each<=N;each++)
       {
           int carry=0;
           for(int i=0;i<res.size();i++)
           {
               int current=res[i]*each + carry;
               res[i]=current%10;
               carry=current/10;
           }
           
           while(carry!=0)
           {
               res.push_back(carry%10);
               carry/=10;
           }
           
       }
       reverse(res.begin(),res.end());
       return res;

    }
Time Complexity: O(nlogn!) n for loop  and logn! for while loop
Auxiliary Space: O(MAX)

 //2.using linklist:- 
  #include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b) for (int i = a; i <= b; i++)

using namespace std;
// Made a class node containing data and previous pointer as
// we are using tail pointer
class Node {
public:
    int data;
    Node* prev;
    Node(int n)
    {
        data = n;
        prev = NULL;
    }
};

void Multiply(Node* tail, int n)
{
    Node *temp = tail,
         *prevNode = tail; // Temp variable for keeping tail
    int carry = 0;
    while (temp != NULL) {
        int data = temp->data * n + carry;
        temp->data = data % 10; // stores the last digit
        carry = data / 10;
        prevNode = temp;
        temp = temp->prev; // Moving temp by 1 prevNode will
                           // now denote temp
    }
    // If carry is greater than 0 then we create another
    // node for it.
    while (carry != 0) {
        prevNode->prev = new Node((int)(carry % 10));
        carry /= 10;
        prevNode = prevNode->prev;
    }
}

void print(Node* tail)
{
    if (tail == NULL) // Using tail recursion
        return;
    print(tail->prev);
    cout
        << tail->data; // Print linked list in reverse order
}

// Driver code
int main()
{
    int n = 20;
    Node tail(1); // Create a node and initialise it by 1
    rep(i, 2, n)
        Multiply(&tail, i); // Run a loop from 2 to n and
                            // multiply with tail's i
    print(&tail); // Print the linked list
    cout << endl;
    return 0;
}

Time Complexity: O(nlogn!)
Auxiliary Space: O(1)


