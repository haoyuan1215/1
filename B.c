#include <stdio.h>
int main()   {
    int chess[8][8];
    for (int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            scanf("%d",&chess[i][j]);
        }
        printf("\n");
    }
    char str[4];
    scanf("%s",&str);
    int x=str[0]-'0',y=str[2]-'0';
    // 0 ��ܪť�
    if (chess[x][y]==0) {
        printf("(%s)�ťաA����U",str);
    }
    // 1 ��ܶ´�
    int a,b;
    if (chess[x][y]==1) {
        printf("(%d,%d)=1,�´ѡC�H�U�´Ѩӻ��A��X(%d,%d)�K���U�¤l����m�O",x,y,x,y);
        for (int n=0;n<3;n++) {
            for (int m=0;m<3;m++) {

                if (chess[x-1+n][y-1+m]==2) {
                    a=x+(n-1)*2;
                    b=y+(m-1)*2;
                    if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                    }
                    else if(chess[a][b]==2) {
                        a=a+n-1;
                        b=b+m-1;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*2;
                        b=b+(m-1)*2;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*3;
                        b=b+(m-1)*3;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*4;
                        b=b+(m-1)*4;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*5;
                        b=b+(m-1)*5;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*6;
                        b=b+(m-1)*6;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                }
            }
        }
    }
    // 2 ��ܥմ�
    else if (chess[x][y]==2) {
        printf("(%d,%d)=2,�մѡC�H�U�´Ѩӻ��A��X(%d,%d)�K���U�դl����m�O",x,y,x,y);
        for (int n=0;n<3;n++) {
            for (int m=0;m<3;m++) {
                if (chess[x-1+n][y-1+m]==1) {
                    a=x+(n-1)*2;
                    b=y+(m-1)*2;
                    if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                    }
                    else if(chess[a][b]==1) {
                        a=a+n-1;
                        b=b+m-1;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*2;
                        b=b+(m-1)*2;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*3;
                        b=b+(m-1)*3;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*4;
                        b=b+(m-1)*4;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*5;
                        b=b+(m-1)*5;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                    else if(chess[a][b]==2) {
                        a=a+(n-1)*6;
                        b=b+(m-1)*6;
                        if(chess[a][b]==0) {
                        printf("(%d,%d)",a,b);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
