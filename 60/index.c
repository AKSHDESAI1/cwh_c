#include <stdio.h>
#define pi 3
// #line 5 "index.c"

int main(int argc, char const *argv[])
{
    // printf("FileName is %s\n", __FILE__);
    // printf("Today's Date is %s\n", __DATE__);
    // printf("Time now is %s\n", __TIME__);
    // printf("Line no is %d\n", __LINE__);
    // printf("ANSI: %d\n", __STDC__);

#if pi == 5
    printf("pi defined hai bhai");
#elif pi == 31
    printf("agar pi ki value 3 hoti hai to");
#else
    printf("are nai defined hai bro");
#endif
    printf("hehehhe");

    return 0;
}
