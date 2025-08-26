#include<stdio.h>
#include<stdlib.h>


size_t maxSeq(int * array,size_t n);

int main (){

int array[]={};
size_t ans = maxSeq(array,0);
if (ans!=0){
    return EXIT_FAILURE;
}

int array0[]={1,2,2,3,4,5};
size_t ans0 = maxSeq(array0,6);
if (ans0!=4){
    return EXIT_FAILURE;
}

int array1[]={-1,0,0,3,1333434,-123231234};
size_t ans1 = maxSeq(array1,6);
if (ans1!=3){
    return EXIT_FAILURE;
}

int array2 []={-4,-3,-2,-1,0,0,3,434021,5000004};
size_t ans2= maxSeq(array2,9);
if (ans2!=5){
   return EXIT_FAILURE;
}

int array3 [] = {-1, -2,-1, 0, -1, 2334234, 33};
size_t ans3 = maxSeq(array3,7);
if (ans3!=3){
    return EXIT_FAILURE;
}

int array4 []={1};
size_t ans4 = maxSeq(array4,1);
if (ans4!=1){
   return EXIT_FAILURE;
}

int array5 []={-1};
size_t ans5 = maxSeq(array5,1);
if (ans5!=1){
    return EXIT_FAILURE;
}

    int array6 []={0};
size_t ans6 = maxSeq(array6,1);
if (ans6!=1){
    return EXIT_FAILURE;
}

return EXIT_SUCCESS;
}
    return EXIT_FAILURE;
}
