#include <iostream>
#include <string>

using namespace std;

int **table;
int row, col;
int T1[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0};
int T2[4][4] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0};
int T3[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0};
int T4[4][4] = {0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0};
int L1[4][4] = {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0};
int L2[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0};
int L3[4][4] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
int L4[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0};
int J1[4][4] = {0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0};
int J2[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0};
int J3[4][4] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
int J4[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0};
int S1[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0};
int S2[4][4] = {0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0};
int Z1[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0};
int Z2[4][4] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0};
int I1[4][4] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
int I2[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
int O[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0}; 

void maketable();
void put_square(int sq[4][4],int start, int move);
int test_overlap(int sq[4][4], int r, int c);

int main()
{
    int start, move;
    string str;
    cin>>row>>col;
    maketable();
    
    while(1)
    {   
        cin>>str;
        if(str == "End") break;
        cin>>start>>move;
        if(str == "T1"){
            put_square(T1,start,move);
        }
        else if(str == "O"){
            put_square(O,start,move);
        }
        
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
}

void maketable()
{
    table = new int*[row];
    for(int i=0;i<row;i++){
       table[i] = new int[col];
       for(int j=0;j<col;j++){
           table[i][j] = 0;
       }
    }
}

void put_square(int sq[4][4],int start, int move)
{
    int t_r = -1;
    int t_c = start;
    while(t_r<row-4)
    {
        if(test_overlap(sq, t_r+1, t_c)==-1) break;
        t_r++;
        //cout<<"t_r="<<t_r<<endl;
    }
    if(test_overlap(sq,t_r,t_c+move)==1){
        t_c += move;
        while(t_r<row-4)
        {
            if(test_overlap(sq, t_r+1, t_c)==-1) break;
            t_r++;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(sq[i][j] == 1) {
                table[t_r+i][t_c+j] = 1;
                //cout<<"table"<<t_r+i<<" "<<t_c+j<<endl;
            }
            
        }
    }
}

int test_overlap(int sq[4][4], int r, int c)
{
    //cout<<"test"<<r<<" "<<c<<endl;
    for(int i=3;i>=0;i--){
        for(int j=0;j<4;j++){
            if(sq[i][j] == 1 && table[r+i][c+j] == 1)
                return -1;
        }
    }
    return 1;
}