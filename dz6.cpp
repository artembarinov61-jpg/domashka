#include<iostream>



int main() {
    int a;
    int s=0;
    do{
        std::cout<<"Введите целое число или число '0', чтобы закончить:"<<std::endl;
        std::cin>>a;
        s+=a;
        

    }while(a!=0);
    std::cout<<"Сумма:"<< s;

    s=0;


    return 0;
}