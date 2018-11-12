#include <iostream>

int main()

{
    int students=10 ;

    int passes[10]={0,0,0,0,0,0,0,0,0,0,} ;

    int failures[10]={0,0,0,0,0,0,0,0,0,0,} ;   
    int s=0;  

    int grade;

    for (int scores=0; scores< students; ++scores) 

    {

        std::cout<< "enter the grade of student Number. " << scores+1 <<" : "  <<std::endl; 
        std::cin>>grade;
        
        if (grade > 50) {                                 
            
            passes[scores]=grade;
            
           }
        else {                                          
            failures[scores]=grade;
            
        }
    }
    for(int i=0; i< 10; ++i){                    
       
        if (passes[i] > 0)
        { 
        s=s+1;      
        std::cout << "student number " << i+1<< " is passes with "<< passes[i] <<"scores" << std::endl;
      
        }
      
    }
     for (int j=0; j< 10; j++){                        
        if (failures[j] > 0)
        {   
        std::cout << "student number" << j+1 << " is fail  with "<< failures[j] <<" scores" <<std::endl;
        }
    } 
     if (s>=8)                     

    {
       
    std::cout <<"------------------------"<<std::endl;
  std::cout <<" Raise tution "<<std::endl; 
  std::cout <<"---------------------------"<<std::endl;
}
    
    return 0;   
    
}