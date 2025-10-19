#include<iostream>

int main(){
    int a[]={10,12,4,5,2,75,33,76,15,6};
    int s,pr,g;
    s=sizeof(a)/sizeof(a[0])-1;
    std::cout<<"Массив до сортировки: ";
    for (int i=0;i<s;i++){
        std::cout<<a[i]<<" ";
    }
    for (int i=s;i>=0;i--){
        for (int j=s-1;j>=0;j--){
            if (a[i]>a[j]){
                pr=a[j];
                a[j]=a[i];
                a[i]=pr;
            }
        }
    }
    std::cout<<"\nМассив после сортировки: ";
    for (int j=0;j<s;j++){
        std::cout<<a[j]<<" ";
    }




    return 0;
}