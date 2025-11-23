#include<iostream>
#include<string>


int main(int argc,char** argv){
    std::string str1("Малина");
    std::string str2;
    while(str1!=str2){
        std::cout<<"Угадайте слово:\n";
        std::cin>>str2;
        if (str1==str2){
            std::cout<<"Правильно! Вы победили! Загаданное слово — "+str1;
        }else{
            std::cout<<"Неправильно\n";
        }
    }





    return 0;
}