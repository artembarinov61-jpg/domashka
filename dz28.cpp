#include<iostream>
#include<fstream>
#include<string>


int main(int argc,char** argv){
    std::string str1;
    std::ifstream in("//Users//artembarinov61icloud.com//Desktop//zxc//in.txt");
    while (!(in>>str1).eof()){
        std::cout<<str1<<std::endl;
    }
    in.close();




    return 0;
}