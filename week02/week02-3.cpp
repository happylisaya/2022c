#include <stdio.h>
char mirror_char( char c )
{
    if( c=='A' ) return 'A';
    if( c=='B' ) return ' ';
    if( c=='C' ) return ' ';
    if( c=='D' ) return ' ';
    if( c=='E' ) return '3';
    if( c=='F' ) return ' ';
    if( c=='G' ) return ' ';
    if( c=='H' ) return 'H';
    if( c=='I' ) return 'I';
    if( c=='J' ) return 'L';
    if( c=='K' ) return ' ';
    if( c=='L' ) return 'J';
    if( c=='M' ) return 'M';
    if( c=='N' ) return ' ';
    if( c=='O' ) return 'O';
    if( c=='P' ) return ' ';
    if( c=='Q' ) return ' ';
    if( c=='R' ) return ' ';
    if( c=='S' ) return ' ';
    if( c=='T' ) return ' ';
    if( c=='U' ) return ' ';
    if( c=='V' ) return ' ';
    if( c=='W' ) return ' ';
    if( c=='X' ) return ' ';
    if( c=='Y' ) return ' ';
    if( c=='Z' ) return ' ';
    if( c=='1' ) return '1';
    if( c=='2' ) return 'S';
    if( c=='3' ) return 'E';
    if( c=='4' ) return ' ';
    if( c=='5' ) return ' ';
    if( c=='6' ) return ' ';
    if( c=='7' ) return ' ';
    if( c=='8' ) return '8';
    if( c=='9' ) return ' ';
}
int main()
{
    char c;
    scanf("%c", &c);
    char ans=mirror_char( c );
    printf("�����蹳�r�O:%c", ans);
}




