#include<iostream>
//zadanie 1

int main(){
    bool a = true, b = false;
    std::cout << "Оператор ||:" << std::endl;
            std::cout << std::boolalpha << a << "     " << a << "     " << (a || a);
            std::cout << "\n" << b << "     " << a << "     " << (b || a);
            std::cout << "\n" << a << "     " << b << "     " << (a || b);
            std::cout << "\n" << b << "     " << b << "     " << (b || b);

    std::cout << "\n\nОператор &&:";
            std::cout << "\n" << a << "     " << a << "     " << (a && a);
            std::cout << "\n" << b << "     " << a << "     " << (b && a);
            std::cout << "\n" << a << "     " << b << "     " << (a && b);
            std::cout << "\n" << b << "     " << b << "     " << (b && b);
        
    return 0;

}
