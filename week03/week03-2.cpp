#include <stdio.h>
#include <string.h>
char line[15]="123454321";
char *p1, *p2;
int palindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
        p1 = & line[i];
        p2 = & line[N-1-i];
        if( line[i] != line[N-1-i] ) return 0;
    }
    return 1;
}
int main()
{

    int p = palindrome();
    if(p==1) printf("%s -- is a palindrome.\n\n",line);
    if(p==0) printf("%s -- is not a palindrome.\n\n",line);

    return 0;
}
