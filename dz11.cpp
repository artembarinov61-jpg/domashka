#include<iostream>



int main(){
    int a[3][6]={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18}
    };
    int i1=0,i2=0,i3=0,i4=0;
    int xmax1,xmin1;
    xmax1=a[0][0];
    xmin1=a[0][0];
    int rows,columns;
    rows=sizeof(a)/sizeof(a[0]);
    columns=sizeof(a[0])/sizeof(a[0][0]);
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            std::cout<<a[i][j]<<"\t";
            if(xmax1<a[i][j]){
                xmax1=a[i][j];
                i1=i;
                i2=j;
                
            }
            if(a[i][j]<xmin1){
                xmin1=a[i][j];
                i3=i;
                i4=j;

            }
        }
        std::cout<<"\n";
    }
    std::cout<<"\nИндекс минимального элемента: "<<i3<<" "<<i4;
    std::cout<<"\nИндекс максимального элемента: "<<i1<<" "<<i2;

return 0;
}
