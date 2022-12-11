#include <iostream>
using namespace std;

int main(){
    int height;
    
    do{
        // Ask user how high he wants the pyramid to be
        cout << "Height: ";
        cin >> height; 

    }while(height < 2 || height > 8);

    cout << endl;

    // If 2 <= height <= 8 print the pyramid
    if(2 <= height <= 8){
        for(int i = 0; i < height; i++){
            // For each verse
            for(int j = 0; j <= height + i + 3; j++){
                if(j < height - i || (j > height && j <= height + 2)){
                    cout << " ";
                }
                else{
                    cout << "#";
                }    
            }
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}