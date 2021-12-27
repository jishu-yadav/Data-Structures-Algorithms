class Solution {
public:
    string decimalToBinary(int n)
    {
        //finding the binary form then convert to string
        string s = bitset<64> (n).to_string();
        //Finding the first occurrence of "1"
        const auto loc1 = s.find('1');
        if(loc1 != string::npos)
            return s.substr(loc1);
        return "0";
    }
    int findComplement(int num) {
     int n;
     string s = decimalToBinary(num);
     //cout<<s<<" ";
     for(int i=0;i<s.size();i++){
         if(s[i]=='0')
             s[i]='1';
         else if(s[i]=='1')
             s[i]='0';
     }
     //cout<<s<<" ";
     n = stoi(s,0,2);
     //cout<<s<<" "<<n; 
     return n;   
    }
};