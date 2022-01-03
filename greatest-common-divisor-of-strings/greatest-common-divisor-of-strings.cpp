class Solution {
public:
    int gcd(int a,int b){
        if(a==0)
            return b;
        if(b==0)
            return a;
        if(a==b)
            return a;
        if(a<b)
            return gcd(a,b-a);
        else
            return gcd(a-b,a);
        
    }
    string gcdOfStrings(const string& str1,const string& str2) {
        return (str1+str2 == str2+str1) ? str1.substr(0, gcd(size(str1) ,str2.size()) )  : "";
    }
};