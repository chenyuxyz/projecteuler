#include<cstdio>

int table[21][21];

void chkmax(int &x, int a){
    x = (x>a?x:a);
}

bool intable(int i, int j){
    return (i>=0 && i<20 && j>=0 && j<20);
}

void build(){
    FILE *fin = fopen("p11.in", "r");
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            fscanf(fin, "%d", &table[i][j]);
}

int main(){
    build();
    int ans = 0;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(intable(i,j) && intable(i,j+3)) chkmax(ans, table[i][j]*table[i][j+1]*table[i][j+2]*table[i][j+3]);
            if(intable(i,j) && intable(i+3,j)) chkmax(ans, table[i][j]*table[i+1][j]*table[i+2][j]*table[i+3][j]);
            if(intable(i,j) && intable(i+3,j+3)) chkmax(ans, table[i][j]*table[i+1][j+1]*table[i+2][j+2]*table[i+3][j+3]);
            if(intable(i+3,j) && intable(i,j+3)) chkmax(ans, table[i+3][j]*table[i+2][j+1]*table[i+1][j+2]*table[i][j+3]);
        }
    }
    printf("%d\n", ans);
    return 0;
}
