class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>non_overlapping;
        int s=intervals[0][0],e=intervals[0][1];
        vector<int>p;
        p.push_back(s);
        p.push_back(e);
        non_overlapping.push_back(p);
        for(int i=1;i<intervals.size();i++){
            if(e>=intervals[i][0]&&e<=intervals[i][1] || (e>=intervals[i][0] && e>=intervals[i][1] )){
                if(s>=intervals[i][0])
                    s = intervals[i][0];
                 non_overlapping.pop_back();
                 p.pop_back();
                 p.pop_back();
                
                 if(e<=intervals[i][1])
                 e=intervals[i][1];
                
                 p.push_back(s);
                 p.push_back(e);
                 non_overlapping.push_back(p);
            }
            else{
                 p.pop_back();
                 p.pop_back();
                 s = intervals[i][0];
                 e=intervals[i][1];
                 p.push_back(s);
                 p.push_back(e);
                 non_overlapping.push_back(p);
            }
           
        }
        return non_overlapping;
    }
};