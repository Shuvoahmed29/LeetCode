class Solution {
public:
    string interpret(string command) {
        string str;
        int p=0;
        for(int i=0;i<command.size();i++){
            if(command[i]=='(') p=1;
            else if(command[i]==')' && p==1) p=2;
            else if(command[i]!='(' && command[i]!=')'){
                str+=command[i];
                p=0;
            }
            if(p==2){
                str+= 'o';
                p=0;
            }
        }
        return str;
    }
};