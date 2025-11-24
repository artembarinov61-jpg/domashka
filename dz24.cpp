#include <iostream>
double* create_array(int n){
    return new double[n]();
}


int main(int argc,char** argv){
    int n;
    std::cout<<"Введите размер массива:\n";
    std::cin>>n;
    double* p=create_array(n);
    for (int i=0;i<n;i++){
        std::cout<<p[i]<< " ";
    }
    delete[] p;


    return 0;
}