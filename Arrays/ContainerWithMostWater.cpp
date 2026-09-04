class Solution {
public:
    int maxArea(vector<int>& height) {
       int lp=0 , rp = height.size()-1;
       int maxwater = 0;
       while(lp<rp){
        int w = rp-lp;
        if(w<0){
            w = -1*w;
        }
        int ht = min(height[lp],height[rp]);
        int currwater = w*ht;
        maxwater = max(maxwater,currwater);
        height[lp]>height[rp] ? rp-- : lp++;
       }
       return maxwater;
    }
};
