#include<iostream>

void print(){
    std::string x;
    std::cout<<"Enter a Word"<< std::endl;
   std:: cin>>x;
    int n ;
    std::cout<<"Enter How Many Times You Want To Print"<< std::endl;
    std::cin>>n;
    for(int i=0;i<=n;i++){
       std:: cout<<x<< std::endl;
    }  
}
int main(){
    print();
    return 0;

}