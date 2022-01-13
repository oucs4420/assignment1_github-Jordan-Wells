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
    //displays the program that is currently running
    std::cout << "program: " << argv[0] << '\n' ;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){
        //creates a stream corresponding to our input file
        std::ifstream ins;
        ins.open(argv[arg]);

        //checks if failed (case where -1)
        if(ins.fail())
            std::cout << " " << argv[arg] << ": "<< -1 << '\n' ;
        else{
            //creates count variable and line to hold trash
            int count = 0;
            std::string line;

            //counts all lines while getline != EOF
            while(std::getline(ins, line))
                count++;

            //prints number of lines found
            std::cout << " " << argv[arg] << ": "<< count << '\n' ;
        }

        //closes file
        ins.close();
    }
    exit(0); // this means that the program executed correctly!
}
