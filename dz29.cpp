#include<iostream>
#include<fstream>
#include<string>


int main(int argc,char** argv){
    std::ifstream in("//Users//artembarinov61icloud.com//Desktop//zxc//in.txt");
    std::string str1;
    std::string size_mass;
    
    in>>size_mass;
    int a=std::stoi(size_mass);
    
    std::getline(in>>std::ws,str1);
        
    
    int len=str1.length();
   
    for (int i=0;i<len;i++){
        std::cout<<str1[len-i];
    }





    return 0;
}
