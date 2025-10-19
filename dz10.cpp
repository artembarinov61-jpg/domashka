#include<iostream>


int main(){
    int xmax,xmin;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    xmax=a[0];
    xmin=a[0];
    int siz;
    siz=sizeof(a)/sizeof(a[0]);
    for (int i=0;i<siz;i++){
        if (a[i]>xmax) xmax=a[i];
        xmin=a[i]<xmin ? a[i] : xmin;
        
        std::cout<<a[i]<<", ";
    }
    std::cout<<"\nМинимальный элемент:"<<xmin<<std::endl;
    std::cout<<"Максимальный элемент::"<<xmax<<std::endl;


    return 0;
}