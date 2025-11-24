#include <iostream>
int** create_two_dim_array(int raw,int coloumns){
    int** matrix=new int*[raw]();
    for (int i=0;i<raw;i++){
        matrix[i]=new int[coloumns]();

    }
    return matrix;
}
void fill_two_dim_array(int** matrix,int rows,int coloumnss){
    for (int i=0;i<rows;i++){
        for (int j=0;j<coloumnss;j++){
            matrix[i][j]=(i+1)*(j+1);
        }
        
    }

}
void print_two_dim_array(int** matrix,int rows,int cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            std::cout<<matrix[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
}
void delete_two_dim_array(int** matrix,int rows,int cols){
    for (int i=0;i<rows;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}



int main(int argc,char** argv){
    int rows,cols;
    std::cout<<"Введите количество строк:";
    std::cin>>rows;
    std::cout<<"\nВведите колтчество столбцов:";
    std::cin>>cols;
    int** a=create_two_dim_array(rows,cols);
    fill_two_dim_array(a,rows,cols);
    print_two_dim_array(a,rows,cols);
    delete_two_dim_array(a,rows,cols);




    return 0;
}