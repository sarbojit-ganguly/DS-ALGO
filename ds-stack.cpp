#include <iostream>

using namespace std;

#define MAXN 100 // support stack of 100 elements

int Stk[MAXN];
int top;
int stack_size;


void initStack()
{
    top = -1;
    stack_size = 0;
}

bool stackFull()
{
    return (stack_size == (MAXN-1)) ? true : false;
}
bool stackEmpty()
{
    return (stack_size == 0) ? true : false;
}

bool pushStack(int data)
{
    if(!stackFull()) {
        Stk[++top] = data;
        stack_size += 1;
        return true;
    }
    else
        return false;
}
bool popStack(int& value)
{
    if(!stackEmpty()) {
        value = Stk[top--];
        stack_size -= 1;
        return true;
    }
    else
        return false;
}
void showStack()
{
    /* cout<<"top = "<<top<<" "<<"stack_size = "<<stack_size<<endl; */

    for(int i = top; i >= 0; --i) {
        cout<<Stk[i]<<" ";
    }
    cout<<endl;
}
int peekStack()
{
    return Stk[top];
}

int main(void)
{
    freopen("ds-stack.input", "r", stdin);
    int T, tcase=1;
    int N;
    cin>>T;
    int num;
    int pop_element;
    while(T--) {
        
        cin>>N;

        initStack(); // init the stack variables

        /* get input and push into the stack */
        for(int i = 0; i < N; ++i) {
            cin>>num;
            pushStack(num);
        }

        pop_element = 0;

        cout<<"#"<<tcase++<<endl;

        // show the current stack status 
        showStack();

        cout<<"top element = "<<peekStack()<<endl;

        /* now let's pop some data */
        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;

        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;
        
        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;

        cout<<"top element = "<<peekStack()<<endl;

        // show the current stack status 
        showStack();

        /* now let's pop some data */
        popStack(pop_element);
        cout<<"popped "<<pop_element<<endl;

        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;
        
        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;

        cout<<"top element = "<<peekStack()<<endl;
        
        // show the current stack status 
        showStack();

        /* now let's pop some data */
        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;

        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;
        
        popStack(pop_element);
        
        cout<<"popped "<<pop_element<<endl;
        
        // show the current stack status 
        showStack();

        cout<<"top element = "<<peekStack()<<endl;
    }
}