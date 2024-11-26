#include <stdio.h>

int main() {
    char name[50], lastname[50] ;
    printf( "First Name: " );
    scanf( "%s", &name ) ;
    printf( "Last Name: " );
    scanf( "%s", &lastname ) ;

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", name, lastname ) ;
    return 0 ;
} // end main
