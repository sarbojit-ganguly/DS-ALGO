#include <iostream>
#include <queue>

using namespace std;

#define MAXN 100

int A[MAXN][MAXN];

int main(void)
{
    freopen("bfs.input", "r", stdin);
    int T, tcase=1;
    int N;
    cin>>T;
    while(T--) {
        cin>>N;

        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j)
                cin>>A[i][j];
        }



        //// output area /////////////
        cout<<"#"<<tcase++<<endl;
        /*
        for(int i = 0; i < N; ++i) {
            for(int j=0;j<N;++j) {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
        */
    }
    return 0;
}
