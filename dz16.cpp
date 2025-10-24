#include<iostream>



int main(int argc,char** argv){
    int a;
    std::cout<<"int: "<<&a<<" "<<sizeof(a)<<std::endl;
    short b;
    std::cout<<"short: "<<&b<<" "<<sizeof(b)<<std::endl;
    long c;
    std::cout<<"long: "<<&c<<" "<<sizeof(c)<<std::endl;
    long long d;
    std::cout<<"long long: "<<&a<<" "<<sizeof(d)<<std::endl;
    float e;
    std::cout<<"float: "<<&e<<" "<<sizeof(e)<<std::endl;
    double f;
    std::cout<<"double: "<<&f<<" "<<sizeof(f)<<std::endl;
    long double g;
    std::cout<<"long double: "<<&g<<" "<<sizeof(g)<<std::endl;
    bool k;
    std::cout<<"bool: "<<&k<<" "<<sizeof(k)<<std::endl;


    return 0;
}