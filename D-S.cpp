//-----------------------stack

#include <iostream>
#include <stack>
using namespace std;

/*


stack using STL

    //--- creation of stack
    stack <int> s;
    //-- push operation
    s.push(2);
    s.push(3);
    s.push(5);

    //---- pop creation
    s.pop();

    cout<<" Printing top element : "<<s.top()<<endl;
    //---- check empty or not
    if(s.empty())
    {
        cout<<" Stack is empty"<<endl;
    }
    else
    {
        cout<<" Stack is not empty"<<endl;
    }
    cout<<" Size of stack is : "<< s.size()<<endl;


*/

//---- implementation stack

class Stack
{
public:
    //  properties
    int *arr;
    int size;
    int top;

    //  behaviour

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << " Stack overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " Stack is underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << " Stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(23);
    st.push(46);
    st.push(90);

    cout << " value befor pop : " << st.peek() << endl;

    st.pop();
    cout << " value after pop : " << st.peek() << endl;
    return 0;
}
