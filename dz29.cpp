#include<iostream>
#include<fstream>
#include<string>


int main(int argc,char** argv){
    std::ifstream in("/Users/artembarinov61icloud.com/Desktop/zxc/in.txt");
    std::string str1;
    int size_mass;
    
    in>>size_mass;
    int* A=new int[size_mass];
    
    for (int i=0;i<size_mass;i++){
        in>>A[i];
    }
        
    
    
   
    for (int i=1;i<=size_mass;i++){
        std::cout<<A[size_mass-i]<<" ";
    }
    
    delete[] A;
    




    return 0;
}
