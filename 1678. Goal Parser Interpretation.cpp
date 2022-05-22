class Solution {
public:
    string interpret(string command) {
        int i=0;
        string ans;
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                ans+="G";
            }
            if(command[i]=='(' && command[i+1]==')'){
                ans+="o";
                i++;
            }
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                ans+="al";
                i+=3;
            }
        }
        return ans;
    }
};
