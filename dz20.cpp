#include <iostream>
void printd(int* A,int n){
    for (int i=0;i<n;i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";
}

int main(int argc,char** argv){
    int B[]={3,5,7};
    int C[]={75,8,32,46,5786,869,424};
    int A[]= {1,2,3,4,5,6,7};
    printd(B,sizeof(B)/sizeof(B[0]));
    printd(A,sizeof(A)/sizeof(A[0]));
    printd(C,sizeof(C)/sizeof(C[0]));





    return 0;
}