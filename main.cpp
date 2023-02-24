#include <iostream>
#include <cmath>
#define if3

int main(){
    #ifdef if2
    const int R=1;
    int x,y;
    std::cin>>x>>y;
    if(x*x+y*y<=2*R && y>=((x-R)*(x-R)-1)){
        std::cout<<"OK";
    }
    else std::cout<<"NO";
    std::cout<<'\n';
    #endif
    #ifdef if3
    float x; std::cin>>x;
    float func=std::abs(x)>=1?x-2:1-2*(x*x);
    std::cout<<func;
    #endif
    return 0;
}