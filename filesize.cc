#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
     std::cout << "program: " << argv[0] << '\n' ;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){
        std::ifstream ins;
        ins.open(argv[arg]);
        if(ins.fail())
            std::cout << " " << argv[arg] << ": "<< -1 << '\n' ;
        else{
            int count = 0;
            std::string line;
            while(std::getline(ins, line))
                count++;

            std::cout << " " << argv[arg] << ": "<< count << '\n' ;
        }
        
    }
    
    
    exit(0); // this means that the program executed correctly!
}
