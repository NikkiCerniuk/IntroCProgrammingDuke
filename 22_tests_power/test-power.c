#include <stdio.h>
#include <stdlib.h>

unsigned power(unsigned x, unsigned y);

int main(void)
{

unsigned int ans;

ans=power(0,0);
if(ans !=1){
    return EXIT_FAILURE;
}
ans=power(0,1);
if (ans !=0){
    return EXIT_FAILURE;
}

ans=power(1,3);
if(ans !=1){
    return EXIT_FAILURE;
}
ans=power(3,1);
if(ans !=3){
    return EXIT_FAILURE;
}

ans=power(10,5);
if(ans !=100000){
    return EXIT_FAILURE;
}

ans=power((2*4),2);
if (ans !=64){
    return EXIT_FAILURE;
}
return EXIT_SUCCESS;
}
