#include <iostream>
#include <stack>

using namespace std;


// define a stack container which will 
// contain integers only
stack<int>Stk;

int main(void)
{
    freopen("ds-stl-stack.input", "r", stdin);
    int T, N, tcase=1;
    cin>>T;
    int num;
    while(T--) {

        cin>>N;
        for(int i = 0; i < N; i++) {
            cin>>num;
            Stk.push(num);
        }

        cout<<"#"<<tcase++<<endl;

        cout<<"stack size = "<<Stk.size()<<endl;
        cout<<"top element = "<<Stk.top()<<endl;
        cout<<"popped\n";
        Stk.pop();
        cout<<"popped\n";
        Stk.pop();
        cout<<"popped\n";
        Stk.pop();
        cout<<"stack size = "<<Stk.size()<<endl;
        cout<<"top element = "<<Stk.top()<<endl;

        // let's pop all elements until stack is empty
        cout<<"popping all elements until stack is empty\n";

        while(!Stk.empty()) {
            cout<<Stk.top()<<" ";
            Stk.pop();
        }
        cout<<endl;
        cout<<"stack size = "<<Stk.size()<<endl;

    }
}