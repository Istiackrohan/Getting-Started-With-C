#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumbers[] = {};
    int c;
    for(c=0; c>=0&&c<120; c++){
        myNumbers[c] = toupper(c) == c ;
    }
    printf("%d\n", sizeof(myNumbers)/sizeof(myNumbers[0]));
    //printf("%d", myNumbers);
    return 0;
}
