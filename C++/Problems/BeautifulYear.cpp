#include<iostream>
#include<string>
using namespace std;

int main(){
    std::string str;
    cin>>str;
    int num = std::stoi(str)+1,flag=1;
    str = to_string(num);
    while(flag){
        flag = 0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i!=j && (str[i]==str[j])){
                    num+=1;
                    str = to_string(num);
                    flag = 1;
                    break;
                }
            }
        }
    }
    cout<<str;

    return 0;
}