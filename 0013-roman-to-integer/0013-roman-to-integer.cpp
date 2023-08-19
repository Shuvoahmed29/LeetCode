class Solution {
public:
    int romanToInt(string s) {
        int cost = 0;
        for(int i=0;i<s.size();){
           if(s[i]=='I' && s[i+1]=='V'){
                   cost += 4;
                   i = i+2;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                   cost += 9;
                   i = i+2;
            }
        
           else if(s[i]=='X' && s[i+1]=='C'){
           		cost += 90;
           		i=i+2;
           }
           else if(s[i]=='X' && s[i+1]=='L'){
           		cost += 40;
           		i=i+2;
           }
          else if(s[i]=='C' && s[i+1]=='D'){
          		cost += 400;
          		i=i+2;
          }
          else if(s[i]=='C' && s[i+1]=='M'){
          		cost += 900;
          		i=i+2;
          }
          else{
          	if(s[i]=='I') cost += 1;
          	else if(s[i]=='V') cost += 5;
          	else if(s[i]=='X') cost += 10;
          	else if(s[i]=='L') cost += 50;
          	else if(s[i]=='C') cost += 100;
          	else if(s[i]=='D') cost += 500;
          	else if(s[i]=='M') cost += 1000;
          	i++;
      	}    
    }
    return cost;
    }
};