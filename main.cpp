//Adds library iostream that allows basic commands
#include <iostream>

int main(){

    bool redLight{false};
    bool greeLight{true};

    if (redLight == true)
    {
       std::cout<<"Stop!"<<std::endl;
    }else{
        std::cout<<"Go through!"<<std::endl;
    }

    if (greeLight)
    {
        std::cout<<"The light is green!"<< std::endl;
    }else{
        std::cout<<"The light is not green!"<<std::endl;
    }
    
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Size of Boolean: "<<sizeof(redLight)<<std::endl;

    std::cout<<"-----------------------------------"<<std::endl;
    std::boolalpha;
    std::cout<<"Red Light: "<<redLight<<std::endl;
    std::cout<<"Green Light: "<<greeLight<<std::endl;

    return 0;
}