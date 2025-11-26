#include<iostream>
#include<fstream>
#include<string>


int main(int argc,char** argv){
    std::ifstream in{};
    in.open("//Users//artembarinov61icloud.com//Desktop//zxc//in.txt",std::fstream::in);
    std::string str1;
    int a;
    in>>a;
    int b;
    in>>b;
    int** A=new int*[a];
    for (int i=0;i<a;i++){
        A[i]=new int[b];
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            in>>A[i][b-j-1];
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            std::cout<<A[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    
       
    





    return 0;
}