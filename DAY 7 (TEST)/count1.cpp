class Solution {
public:
    bool check(char ch,char ch1){
        if(ch==')'&&ch1=='('){
            return true;
        }
         if(ch==']'&&ch1=='['){
            return true;
        }
         if(ch=='}'&&ch1=='{'){
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s.at(i);
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char ch1=st.top();
                st.pop();
                if(!check(ch,ch1)){
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
