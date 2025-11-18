#include <iostream>
namespace math{
    namespace plus{
        int calc(int x,int y){
            return x+y;
        }
    }
    namespace dif{
        int calc(int x,int y){
            return x-y;
        }
    
    }
    namespace del{
        int calc(int x,int y){
            return x/y;
        }
    }
    namespace umn{
        int calc(int x,int y){
            return x*y;
        }
    }
}


int main(){
    int x=6,y=9;
    std::cout<<"x="<<x<<", y="<<y<<std::endl;
    std::cout<<"Сложение:"<<math::plus::calc(x,y)<<std::endl;
    std::cout<<"Вычитание:"<<math::dif::calc(x,y)<<std::endl;
    std::cout<<"Умножение:"<<math::umn::calc(x,y)<<std::endl;
    std::cout<<"Деление:"<<math::del::calc(x,y)<<std::endl;




    return 0;
}