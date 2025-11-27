#include<iostream>
#include<fstream>
#include<string>


int main(int argc,char** argv){
    std::string str1;
    std::ifstream in("//Users//artembarinov61icloud.com//Desktop//zxc//in.txt");
    if (in.is_open()){
    while (in>>str1){
        std::cout<<str1<<std::endl;
    }else{
        std::cout << "Ошибка! Файл не найден.\n";
        return 1;
    }
    
    in.close();




    return 0;
}
