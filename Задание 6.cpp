#include <iostream>
using namespace std;

int main(){
const int S = 10, C = 10;
int num[S][C];
for (size_t i = 1; i < C + 1; i++){
    
    for (size_t j = 1; j < S + 1; j++)
    
    {
        num[i - 1][j - 1] = i * j;  
    }

}

for (size_t i = 0; i < C; i++)

{
   
     for (size_t j = 0; j < S; j++)
     
    {
        
        cout << num[i][j] << "   ";
        
    }
    
    cout << endl;
}

return 0;
}