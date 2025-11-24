#include<iostream>


int main(int argc,char** argv){
    int n;
    std::cout<<"Введите размер массива:";
    std::cin>>n;
    int* a= new int[n];
    for (int i=0;i<n;i++){
        int s;
        
        std::cout<<"a["<<i<<"]= ";
        std::cin>>s;
        a[i]=s;
        std::cout<<"\n";

    }
    std::cout<<"Введенный массив:";
    for (int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
    delete[] a;




    return 0;
}