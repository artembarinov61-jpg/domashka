#include<iostream>
#include<string>
#include<fstream>



int main(int argc,char** argv){
    std::ofstream in{};
    in.open("//Users//artembarinov61icloud.com//Desktop//zxc//in.txt",std::fstream::out);
    int arr_size;
    std::cout<<"Введите размер массива:"<<std::endl;
    std::cin>>arr_size;
    in<<arr_size<<std::endl;
    int* a=new int[arr_size];
    for(int i=0;i<arr_size;i++){
        std::cout<<"a["<<i<<"]=";
        std::cin>>a[i];
        std::cout<<"\n";
        in<<a[i]<<" ";

        
        

    }
    




    return 0;
}