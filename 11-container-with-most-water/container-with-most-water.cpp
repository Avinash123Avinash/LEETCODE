class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int hg=0;
        int area=0;
    while(l<r)
    {
        hg=min(height[l],height[r]);
        area=max(((r-l)*hg),area);
        if(height[l]<height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    
    return area;
    }
};