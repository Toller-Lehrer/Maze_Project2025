#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream file("Board__0.txt");
    for(int i = 0; i < 22 ; i++){
        for(int j = 0; j < 80 ; j++){
          if (i == 0){
            if (j < 79) file << "_";
            else file << endl;
          }
        }
        for(int j = 0; j <= 63 ; j++){
         	if ((i > 0) and (i < 22)){
	            if ((j % 2) == 0) file << "|";
	            else if (j == 63) file << endl;
	            else file << "__";
          }
        }
    }
    file.close();
}