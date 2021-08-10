#include <iostream>

using namespace std;

#define MAXQ 100

int Queue[MAXQ];

/* control variables for queue */
int front, rear;
int capacity, q_size;

void initQ()
{
    front = rear = -1;

    capacity = MAXQ;
    q_size = 0;
}
bool isQFull()
{
    return (q_size == (capacity-1)) ? true : false;
}
bool isQEmpty()
{
    return (q_size == 0) ? true : false;
}

bool pushQ(int data)
{
    if(!isQFull()) {

        /* one time check when we push our very first element */
        if(rear == -1)
            front = 0;

        rear += 1;
        Queue[rear] = data;
        q_size += 1;
        return true;
    }
    else
        return false;
}
bool popQ(int& element)
{
    if(!isQEmpty()) {

        element = Queue[front];
        front += 1;
        q_size -= 1;
        return true;
    }
    else
        return false;
}
int peekQ()
{
    return Queue[front];
}
void showQ()
{
    for(int i = front; i<=rear; ++i) {
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
}

int main (void)
{
    freopen("ds-queue.input", "r", stdin);
    int T, tcase=1, N;
    cin>>T;
    int num;
    int pop_element;
    while(T--){ 
        cin>>N;
        // init the queue
        initQ();

        for(int i = 0; i < N; ++i) {
            cin>>num;
            pushQ(num);            
        }

        pop_element = 0;


        // time for fun, show the Q, pop some elements, peek the queue and print it !
        cout<<"#"<<tcase++<<endl;

        showQ();

        cout<<"front element = "<<peekQ()<<endl;

        popQ(pop_element);

        cout<<"popped "<<pop_element<<endl;

        cout<<"front element = "<<peekQ()<<endl;

        showQ();

        showQ();

        cout<<"front element = "<<peekQ()<<endl;

        popQ(pop_element);

        cout<<"popped "<<pop_element<<endl;

        cout<<"front element = "<<peekQ()<<endl;

        showQ();

        showQ();

        cout<<"front element = "<<peekQ()<<endl;

        popQ(pop_element);

        cout<<"popped "<<pop_element<<endl;

        cout<<"front element = "<<peekQ()<<endl;

        showQ();

        showQ();

        cout<<"front element = "<<peekQ()<<endl;

        popQ(pop_element);

        cout<<"popped "<<pop_element<<endl;

        cout<<"front element = "<<peekQ()<<endl;

        showQ();

    }
    return 0;
}
