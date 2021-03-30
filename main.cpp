#include <iostream>
#include <cmath>
using namespace std;

string encrypt_caesar(string instr, int num){

    if(num >= 0){
        for(int i = 0; i < instr.length(); i++){
            int index = instr[i] + num;
            if(instr[i] >= 'A' && instr[i] <= 'Z'){
                if (index >= 'A' && index <= 'Z'){
                    instr[i] = instr[i] + num;
                } else instr[i] = index - 26;
            }
            if(instr[i] >= 'a' && instr[i] <= 'z'){
                if (index >= 'a' && index <= 'z'){
                    instr[i] = instr[i] + num;
                } else instr[i] = index - 26;
            }
        }
    }else{
        for(int i = 0; i < instr.length(); i++){
            int index = instr[i] + num;
            if(instr[i] >= 'A' && instr[i] <= 'Z'){
                if (index >= 'A' && index <= 'Z'){
                    instr[i] = instr[i] + num;
                } else instr[i] = index + 26;
            }
            if(instr[i] >= 'a' && instr[i] <= 'z'){
                if (index >= 'a' && index <= 'z'){
                    instr[i] = instr[i] + num;
                } else instr[i] = index + 26;
            }
        }
    }

    return instr;
}

std::string decrypt_caesar(std::string instr, int num){
    return instr = encrypt_caesar(instr, -num);
}

int main() {
    int num;

    string in_str, enc_str, decr_str;
    cout << "Enter string: ";
    getline(std::cin, in_str);
    cout << "Enter parameter: ";
    cin >> num;

    if(abs(num) > 26) num = num % 27;


    enc_str = encrypt_caesar(in_str, num);
    decr_str = decrypt_caesar(enc_str, num);


    cout << enc_str << "\n\n";
    cout << decr_str << "\n";


    return 0;
}
