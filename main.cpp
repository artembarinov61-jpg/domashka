#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <unistd.h>
int prosmotr(char** universe,int rows,int cols){
    int k=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (universe[i][j]=='*'){
                k++;
                
            }else continue;

        }
    }
    return k;
}
int generation(){
    static int g=1;
    g++;
    return g;
}
bool flag(char** universe,char** universsrv,int rows,int cols){
    bool flag1=false;
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if (universe[i][j]!=universsrv[i][j]){
                flag1=true;
                return flag1;
            }
        }
    }
    return flag1;
}


int alive_cels_last(char** universe,int i,int j,int rows,int cols){
    
    //верхняя левая
    if(i==0 && j==0){
        int k=0;
        if (universe[i][j+1]=='*'){
            k++;
        }
        if (universe[i+1][j]=='*'){
            k++;
        }
        if (universe[i+1][j+1]=='*'){
            k++;
        }
        return k;

    }
    //нижняя левая
    if (i==(rows-1) && j==0 ){
        int k=0;
        if (universe[i-1][j]=='*'){
            k++;
        }
        if (universe[i][j+1]=='*'){
            k++;
        }
        if (universe[i-1][j+1]=='*'){
            k++;
        }
        return k;
    }
    //правая верхняя
    if (i==0 && j==(cols-1)){
        int k=0;
        if (universe[i+1][j]=='*'){
            k++;
        }
        if (universe[i][j-1]=='*'){
            k++;
        }
        if (universe[i+1][j-1]=='*'){
            k++;
        }
        return k;
    }
    //правая нижняя
    if (i==(rows-1) && j==(cols-1)){
        int k=0;
        if (universe[i-1][j]=='*'){
            k++;
        }
        if (universe[i][j-1]=='*'){
            k++;
        }
        if (universe[i-1][j-1]=='*'){
            k++;
        }
        return k;
    }
    //левая стенка
    if(((i>0)&&(i<rows-1))&& (j==0)){
        int k=0;
        if (universe[i-1][j]=='*'){
            k++;
        }
        if (universe[i+1][j]=='*'){
            k++;
        }
        if (universe[i-1][j+1]=='*'){
            k++;
        }
        if (universe[i+1][j+1]=='*'){
            k++;
        }
        if (universe[i][j+1]=='*'){
            k++;
        }
        return k;
    }
    //верхняя стенка
    if (i==0 && j>0 && (j<(cols-1))){
        int k=0;
        if (universe[i][j+1]=='*'){
            k++;
        }
        if (universe[i+1][j]=='*'){
            k++;
        }
        if (universe[i][j-1]=='*'){
            k++;
        }
        if (universe[i+1][j+1]=='*'){
            k++;
        }
        if (universe[i+1][j-1]=='*'){
            k++;
        }
        return k;
    }
    //правая стенка
    if (j==(cols-1) && i>0 && i<(rows-1)){
        int k=0;
        if (universe[i][j-1]=='*'){
            k++;
        }
        if (universe[i+1][j]=='*'){
            k++;
        }
        if (universe[i+1][j-1]=='*'){
            k++;
        }
        if (universe[i-1][j-1]=='*'){
            k++;
        }
        if (universe[i-1][j]=='*'){
            k++;
        }
        return k;
    }
    //нижняя стенка
    if (i==(rows-1) && j>0 && j<(cols-1)){
        int k=0;
        if (universe[i][j-1]=='*'){
            k++;
        }
        if (universe[i][j+1]=='*'){
            k++;
        }
        if (universe[i-1][j]=='*'){
            k++;
        }
        if (universe[i-1][j-1]=='*'){
            k++;
        }
        if (universe[i-1][j+1]=='*'){
            k++;
        }
        return k;
    }

}





//количество живых рядом
int koljivkl(char** universe,int i,int j,int rows,int cols){
    int k=0;
    if ((i==0 && j==0) || (i==0 && j==(cols-1)) || (i==(rows-1) && j==0) || (i==(rows-1) && j==(cols-1)) ){
        return alive_cels_last(universe,i,j,rows,cols);
    }
    if((((i>0)&&(i<rows-1))&& (j==0))|| (i==0 && j>0 && (j<(cols-1))) || (j==(cols-1) && i>0 && i<(rows-1)) || (i==(rows-1) && j>0 && j<(cols-1))){
        return alive_cels_last(universe,i,j,rows,cols);
    }
    if(universe[i][j+1]=='*'){
        k++;
    }
    if(universe[i][j-1]=='*'){
        k++;
    }
    if(universe[i+1][j]=='*'){
        k++;
    }
    if(universe[i-1][j]=='*'){
        k++;
    }
    if(universe[i+1][j+1]=='*'){
        k++;
    }
    if(universe[i-1][j-1]=='*'){
        k++;
    }
    if(universe[i-1][j+1]=='*'){
        k++;
    }
    if(universe[i+1][j-1]=='*'){
        k++;
    }
    return k;
    
}
    










int main(int argc, char** argv){
    std::fstream main_file{};
    main_file.open("/Users/artembarinov61icloud.com/Desktop/zxc/netologiya/practic000/txtfiles/dat.txt",std::fstream::in);
    if (main_file.is_open()){
        int rows,cols;
        main_file>>rows;
        main_file>>cols;
        char** universe=new char*[rows];
        for(int i=0;i<rows;i++){
            universe[i]=new char[cols];

        }
        char** universe1=new char*[rows];
        for(int i=0;i<rows;i++){
            universe1[i]=new char[cols];

        }
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                universe[i][j]='-';
                
            }
        
            
        }
        
        


        


        while(!(main_file.eof())){
            int a,b;
            main_file>>a>>b;
            universe[a][b]='*';



        }


        if (prosmotr(universe,rows,cols)==0){
            
         for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<1<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n";
            std::cout<<"Game over.All cells are dead."<<std::endl;
            for (int i=0;i<rows;i++){
                delete universe[i];
            }
            delete[] universe;
            for (int i=0;i<rows;i++){
                delete universe1[i];
            }
            delete[] universe1;
            return 0;
        }
        char** universesrv=new char*[rows];
        for(int i=0;i<rows;i++){
            universesrv[i]=new char[cols];

        }



       
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                universesrv[i][j]=universe[i][j];
            }
        }


         for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<1<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n";
    
            
                    
        

//основной цикл
      while(true){
        
        
        
        if (prosmotr(universe,rows,cols)==0 ){
            for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<generation()<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n";
            std::cout<<"All cells are dead.Game over";
            
            return 0;

            
        }
        
        
        
        

            for (int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                    
                    //вошли в цикл проверки
                    if ((universe[i][j]=='*')){
                        if ((koljivkl(universe,i,j,rows,cols))>3||(koljivkl(universe,i,j,rows,cols))<2){
                            universe1[i][j]='0';
                        }else{
                            universe1[i][j]='1';
                        }
                    }else{
                        if ((koljivkl(universe,i,j,rows,cols))==3){
                            universe1[i][j]='1';
                        }else{
                            universe1[i][j]='0';
                        }
                    }
                }
            }
            for (int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                    if (universe1[i][j]=='1'){
                        universe[i][j]='*';
                    }else{
                        universe[i][j]='-';
                    }
                  
                }
            }
            




            
            
           
            
            if (!(flag(universe,universesrv,rows,cols))){
                
                for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<generation()<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n"<<"The worlde froze";
            
            
            break;
            
            }else if(prosmotr(universe,rows,cols)==0 ){
            for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<generation()<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n";
            std::cout<<"All cells are dead.Game over";
            
            break;

                
               
            }else{
                 for (int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    std::cout<<universe[i][j]<<" ";
                }
                std::cout<<"\n";
            }
            
            std::cout<<"Generation: "<<generation()<< " ";
            std::cout<<"Alive cells: "<<prosmotr(universe,rows,cols)<<"\n";
            sleep(1);
            
            
            for(int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                    universesrv[i][j]=universe[i][j];
                }
            
            }

            }





                
            
            

        
    }
    for(int i=0;i<rows;i++){
        delete universe[i];
        delete universe1[i];
        delete universesrv[i];
    }
    delete[] universe;
    delete[] universe1;
    delete[] universesrv;
        
       
    }
    main_file.close();
    
    return 0;
}