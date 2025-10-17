#include<iostream>

int main(){
    int a;
    int s=0;
    std::cout<<"Введите целое число:"<< std::endl;
    std::cin>>a;
    while (a>0){
        s+=a%10;
        a/=10;

    }
    std::cout<<"Сумма цифр:     "<< s<<"\n";



    return 0;
}