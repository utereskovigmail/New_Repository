#include <iostream>
#include <cstring>

using namespace std;

bool bracket(char str[]){
    int len=strlen(str);
    bool bracket;
    int count=0;
    
    for(int i=0; i<len; i++){
        if(str[i]==')'){
            bracket=true;
            count++;
        }
        else if(str[i]=='('){
            bracket=false;
            count++;
        }
    }
    if(count%2==0)
    return bracket;
    else{
        return false;
    }

}


int main(){
    char str[20];
    cin.getline(str,20);

    cout<<bracket(str);
 



    return 0;
}