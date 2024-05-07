#include <iostream>
using namespace std;

int main(){
  int a[5]= {1,2,3,4,5};
  int b[4]= {6,7,1,5};

  for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
      if(a[i]==b[j]){
        cout<<a[i]<<endl;
        
      }
      continue;
         
        
    }
  }
}