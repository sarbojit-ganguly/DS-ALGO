#include<iostream>
#include <queue>

using namespace std;


// define the STL queue conntainer which will contain integers
queue<int>Q;

int main(void)
{
    freopen("ds-stl-queue.input", "r", stdin);
    int T, tcase=1, N, num;

    cin>>T;
    while(T--) {
        cin>>N;
        for(int i = 0; i < N; ++i){
            cin>>num;
            Q.push(num);
        }

        cout<<"#"<<tcase++<<endl;

        // now let's have some fun!

        cout<<"size of Queue "<<Q.size()<<endl;
        cout<<"front element = "<<Q.front()<<endl;
        cout<<"rear element = "<<Q.back()<<endl;

        Q.pop();
        cout<<"popped\n";
        Q.pop();
        cout<<"popped\n";
        Q.pop();
        cout<<"popped\n";

        cout<<"size of Queue "<<Q.size()<<endl;
        cout<<"front element = "<<Q.front()<<endl;
        cout<<"rear element = "<<Q.back()<<endl;


        cout<<"printing all elements until queue is empty\n";
        
        while(!Q.empty()) {
            cout<<Q.front()<<" ";
            Q.pop();
        }
        cout<<endl;
        cout<<"size of Queue "<<Q.size()<<endl; 
    }
    return 0;
}