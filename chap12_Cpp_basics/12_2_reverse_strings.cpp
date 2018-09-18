#include <iostream>
#include <string>

using namespace std;

//Implement void reverse(char * str) in c++ which reverses a null-terminated string

class ReverseString{
public:
    void reverse(char * str){
        char * end = str;
        char tmp;
        if(str){
            //find the end of the string
            while(*end)
                ++end;
            //point to the position before null-terminator
            --end;

            //swap until pointers meet in the middle
            while(str < end){
                tmp = *str;
                *str++ = *end;
                *end-- = tmp;
            }
        }
    }
};

int main(){
    ReverseString reverseString;
    string str = "hello world";
    // reverseString.reverse(str.c_str());
    cout << str << endl;
}