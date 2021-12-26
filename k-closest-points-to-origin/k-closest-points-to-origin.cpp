class Solution {
public:
   
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),[&](vector<int>&a,vector<int>&b){
            return squaredDistance(a) < squaredDistance(b);
        });
        return vector<vector<int>>(points.begin(),points.begin()+k);
    }
    private:
     int squaredDistance(vector<int>& point){
        return point[0]*point[0]+point[1]*point[1];
    }
};