#include<iostream>


int main(){
    int a,b,c;
    std::cout<< "Введите первое число:";
    std:: cin>> a;
    std::cout<<"\nВведите второе число:";
    std::cin>>b;
    std::cout<<"\nВведите третье число:";
    std::cin>>c;
    int max=(a>b && a>c) ? a : b>c ? b: c;
    std:: cout<< max << "\n";
    int min=(a<b && a<c)? a: b<c ? b : c;
    int avg=(((a>=c)&&(a<b)) || ((a>b) && (a<=c))) ? a: (((b>=a) && (b<c)) || ((b>c)&& (b<=a)))? b: c;
    std:: cout<< avg <<"\n" << min;



    return 0;
}
