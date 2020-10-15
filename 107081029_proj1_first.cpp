#include <iostream>
#include <string>
#include <fstream>

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
int test_delete();
void erase_line(int r);

int main(int argc, char* argv[])
{
    int start, move;
    string str;
    
    ifstream inFile(argv[1],ios::in);
    if(!inFile){
        cout<<"cannot open datafile"<<endl;
        return 1;
    }
    inFile>>row>>col;

    maketable();

    while(1)
    {   
        inFile>>str;
        if(str == "End") break;
        inFile>>start>>move;
        start -= 1;
        if(str == "T1"){
            put_square(T1,start,move);
        }else if(str == "T2"){
            put_square(T2,start,move);
        }else if(str == "T3"){
            put_square(T3,start,move);
        }else if(str == "T4"){
            put_square(T4,start,move);
        }else if(str == "L1"){
            put_square(L1,start,move);
        }else if(str == "L2"){
            put_square(L2,start,move);
        }else if(str == "L3"){
            put_square(L3,start,move);
        }else if(str == "L4"){
            put_square(L4,start,move);
        }else if(str == "J1"){
            put_square(J1,start,move);
        }else if(str == "J2"){
            put_square(J2,start,move);
        }else if(str == "J3"){
            put_square(J3,start,move);
        }else if(str == "J4"){
            put_square(J4,start,move);
        }else if(str == "S1"){
            put_square(S1,start,move);
        }else if(str == "S2"){
            put_square(S2,start,move);
        }else if(str == "Z1"){
            put_square(Z1,start,move);
        }else if(str == "Z2"){
            put_square(Z2,start,move);
        }else if(str == "I1"){
            put_square(I1,start,move);
        }else if(str == "I2"){
            put_square(I2,start,move);
        }else if(str == "O"){
            put_square(O,start,move);
        }

        // test_delete == -1 => not need erase
        while(test_delete() != -1){
            erase_line(test_delete());
        }
    }

    ofstream outFile("107081029_proj1.final",ios::out);
    if(!outFile){
        cout<<"cannot open myout"<<endl;
        return 1;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            outFile<<table[i][j];
            if(j != col-1) outFile<<" ";
        }
        outFile<<endl;
    }

    return 0;
}

//make table with all element 0
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
    //move up down
    while(t_r<row-4)
    {
        if(test_overlap(sq, t_r+1, t_c)==-1) break;
        t_r++;
    }
    //move left right
    if(test_overlap(sq,t_r,t_c+move)==1){
        t_c += move;
        while(t_r<row-4)
        {
            if(test_overlap(sq, t_r+1, t_c)==-1) break;
            t_r++;
        }
    }
    //write square to table
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(sq[i][j] == 1) {
                table[t_r+i][t_c+j] = 1;
            }
            
        }
    }
}

// test if the square can put
int test_overlap(int sq[4][4], int r, int c)
{
    for(int i=3;i>=0;i--){
        for(int j=0;j<4 && c+j < col;j++){
            if(sq[i][j] == 1 && table[r+i][c+j] == 1)
                return -1;
        }
    }
    return 1;
}

// test if all line 1
int test_delete()
{
    int i, j;
    for(i=row-1;i>=0;i--){
        for(j=0;j<col;j++){
            if(table[i][j] == 0) break;
        }
        if(j==col) return i;
    }
    return -1;
}

void erase_line(int r)
{
    int i, j;
    for(i=r;i>=0;i--){
        for(j=0;j<col;j++){
            if(i==0) table[i][j] = 0;
            else table[i][j] = table[i-1][j];
        }
    }
}