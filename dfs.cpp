#include <iostream>
#include <stack>
#include <vector>


using namespace std;

#define MAXN 100

int A[MAXN][MAXN];

void parseAndPrintEdgesAndVertices(int N)
{
    int i,j;

    for(i = 0; i < N; ++i) {
        for( j=0;j<N;++j) {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // we have NxN matrix here
    // let's parse it!
    for(i = 0; i < N; i++) {
        
        // our current vertex
        cout<<i<<" -> ";

        for(j = 0; j < N; j++) {

            if(A[i][j] == 1) {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}


bool do_DFS(int sx, int sy, int N)
{


}

int main(void)
{
    freopen("dfs.input", "r", stdin);
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
        * A graph can be representated as N x N binary matrix
        * also known as adjacency matrix.
        * We will parse the input NxN matrix and then print the vertices and edges
        */

       parseAndPrintEdgesAndVertices(N);

       /* Now what if the requirement is to start from 0,0 of this binary matrix
       * and go all the way to (N-1, N-1) or at least try to see if the path is present 
       * or not!
       * If it is present then print "YES" else print "NO"
       */


      do_DFS(0, 0, N) ? cout<<"YES\n" : cout<<"NO\n";

       
    }
    return 0;
}
