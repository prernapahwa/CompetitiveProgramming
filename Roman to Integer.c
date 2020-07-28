

int romanToInt(char * s){
    int ans=0;
    
    for(int i=0;s[i]!='\0';i++) {
        //printf("%c ",s[i]);
        if(s[i] == 'I' ) {
            if(s[i+1] == 'V') {
                ans += 4;
                i++;
            }
            else if(s[i+1] == 'X') {
                ans += 9;
                i++;
            }
            else {
                ans += 1;
            }
        }
        else if(s[i] == 'X') {
            if(s[i+1] == 'L') {
                ans += 40;
                i++;
            } 
            else if(s[i+1] == 'C') {
                ans += 90;
                i++;
            }
            else {
                ans += 10;
            }
        }
        else if (s[i] == 'C') {
            if(s[i+1] == 'D') {
                ans += 400;
                i++;
            }
            else if(s[i+1] == 'M') {
                ans += 900;
                i++;
            }
            else {
                ans += 100;
            }
        }
        else if(s[i] == 'V') {
            ans += 5;
        }
        else if (s[i] == 'L') {
            ans += 50;
        }
        else if(s[i] == 'D') {
            ans += 500;
        }
        else if(s[i] == 'M') {
            ans += 1000;
        }
    }
    return ans;
}
