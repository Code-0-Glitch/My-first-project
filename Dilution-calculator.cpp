#include <iostream>
int main()
{
    int x;
    double a, b, c, d;
        std::cout<<"***** SAMARTH'S DILUTION CALCULATOR *****\n";

    std::cout<<"Tell me what you want from C1*V1=C2*V2? (select from 1-5 , only one operation)\n";
    std::cout<<"1.C1 = concentration which you already know, or solution from which you want to take small amount to make dilutions\n";
        std::cout<<"2.V1 = volume of know solution to be taken to make dilution\n";
            std::cout<<"3.C2 = concentration that you want to prepare\n";
                std::cout<<"4.V2 = volume of dilution you want to prepare\n";
                std::cout<<"5. TO EXIT THE PROGRAMM\n";
                do {
                std::cout<<"\ntell me a number from 1 to 5 : ";
                std::cin>>x;
                
                switch (x){
                    case 1:

                    std::cout<<"Okay, now tell me the things that you already know to calculate C1 ....\n";
                    std::cout<<"V1 : ";
                    std::cin>>b;
                    std::cout << std::endl;
                    std::cout<<"C2 : ";
                    std::cin>>c;
                    std::cout << std::endl;
                    std::cout<<"V2 : ";
                    std::cin>>d;
                    std::cout << std::endl;
                    a = (c*d)/b;
                    std::cout <<"*** C1 =  "<<a <<" ***";
                    break;
                    case 2:

                    std::cout<<"Okay, now tell me the things that you already know to calculate V1 ....\n";
                    std::cout<<"C1 : ";
                    std::cin>>a;
                    std::cout << std::endl;
                    std::cout<<"C2 : ";
                    std::cin>>c;
                    std::cout << std::endl;
                    std::cout<<"V2 : ";
                    std::cin>>d;
                    std::cout << std::endl;
                    b = (c*d)/a;
                    std::cout <<"*** V1 =  "<<b <<" ***";
                    break;
                    case 3:

                    std::cout<<"Okay, now tell me the things that you already know to calculate C2 ....\n";
                    std::cout<<"V1 : ";
                    std::cin>>b;
                    std::cout << std::endl;
                    std::cout<<"C1 : ";
                    std::cin>>a;
                    std::cout << std::endl;
                    std::cout<<"V2 : ";
                    std::cin>>d;
                    std::cout << std::endl;
                    c = (a*b)/d;
                    std::cout <<"*** C2 =  "<<c <<" ***";
                    break;
                    case 4:

                    std::cout<<"Okay, now tell me the things that you already know to calculate V2 ....\n";
                    std::cout<<"V1 : ";
                    std::cin>>b;
                    std::cout << std::endl;
                    std::cout<<"C2 : ";
                    std::cin>>c;
                    std::cout << std::endl;
                    std::cout<<"C1 : ";
                    std::cin>>a;
                    std::cout << std::endl;
                    d = (a*b)/c;
                    std::cout <<"*** C1 =  "<<d <<" ***";
                    break;
                    default:
                    std::cout<<"HOPE I DONT SEE YOU AGAIN, you dumb piece of shit !";



                }}
               while(x<=4);
               
            
                return 0;




    
}