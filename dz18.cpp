#include<iostream>


int counting_function();
int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}

int counting_function(){
    static int i=0;
    std::cout<<"Количество вызовов функции counting_function():"<<i<<std::endl;
    i++;
}