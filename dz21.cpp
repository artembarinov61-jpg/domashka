#include <iostream>
void swap(int* a,int* b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


int main(int argc,char** argv){

int a=5,b=8;
std::cout<<a<<"    "<<b<<std::endl;
swap(&a,&b);
std::cout<<a<<"    "<<b<<std::endl;

return 0;

}