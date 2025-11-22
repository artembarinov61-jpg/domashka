#include<iostream>
void reverse(int *a){
    int n=9;
    int b[9];
    for (int i=0;i<n;i++){
        b[i]=a[n-i-1];
        
    }
    for (int i=0;i<n;i++){
        a[i]=b[i];
    }
}


int main(int argc,char** argv){

    int a[]={1,2,3,4,5,6,7,8,9};
    std::cout<<"До функции reverse: ";
    for(int i=0;i<9;i++){
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    reverse(a);
    std::cout<<"После функции reverse: ";
    for(int i=0;i<9;i++){
        std::cout<<a[i]<<" ";
    }




    return 0;


}
