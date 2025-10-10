#include<iostream>


int main(){
    bool a=true,b=false;
    std::cout<< "Оператор ||:"<<std::endl;
    for (int i=0;i<=3;i++){
       switch (i){
        case 0:
            std::cout<< std::boolalpha << a <<"     " << a << "     "<< a||a;
            break;
        case 1:
            std::cout<< "\n"<<std::boolalpha << b <<"     " << a << "     "<<(b||a) ;
            break;
        case 2:
            std::cout<<"\n"<< std::boolalpha << a <<"     " << b << "     "<< a||b ;
            break;
        case 3:
            std::cout<< "\n"<<std::boolalpha << b <<"     " << b << "     "<< b||b;
            break;

            }   
    }
    std::cout<<"\n\nОператор &&:";
        for (int i=0;i<=3;i++){
            switch (i){
                case 0:
                    std::cout<< "\n"<< std::boolalpha << a <<"     " << a << "     "<< a&&a;
                    break;
                case 1:
                    std::cout<< "\n"<<std::boolalpha << b <<"     " << a << "     "<<(b&&a) ;
                    break;
                case 2:
                    std::cout<<"\n"<< std::boolalpha << a <<"     " << b << "     "<< a&&b ;
                    break;
                case 3:
                    std::cout<< "\n"<<std::boolalpha << b <<"     " << b << "     "<< b&&b;
                    break;

                }   
    }
        
    return 0;

}