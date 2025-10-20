#include<iostream>


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int siz;
    siz=sizeof(a)/sizeof(a[0]);
    for (int i=0;i<siz;i++){
        if (i<9){
            std::cout<<a[i]<<", ";
        }
        else std::cout<<a[i];
    }



    return 0;
}
