#include <iostream>

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

using namespace std;

int main()
{
    int i, j;
    cout<<"T1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<T1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"T2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<T2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"T3"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<T3[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"T4"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<T4[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"L1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<L1[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"L2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<L2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"L3"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<L3[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"L4"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<L4[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"J1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<J1[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"J2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<J2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"J3"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<J3[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"J4"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<J4[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"S1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<S1[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"S2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<S2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"Z1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<Z1[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"Z2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<Z2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"I1"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<I1[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"I2"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<I2[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"O"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<O[i][j]<<" ";
        }
        cout<<endl;
    }
    
}