class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
	int left[heights.size()];
	int right[heights.size()];
	
	stack<int> s;
	for(int i=0;i<heights.size();i++)
	{
		while(!s.empty() && heights[s.top()]>=heights[i])
		s.pop();
		int grt=s.empty()?-1:s.top();
		left[i]=grt;
		s.push(i);
	}

	while(!s.empty()){
        s.pop();    
    }

	for(int i=heights.size()-1;i>=0;i--)
	{
		while(!s.empty() && heights[s.top()]>=heights[i])
		s.pop();
		int grt=s.empty()?heights.size():s.top();
		left[i]=grt;
		s.push(i);
	}


	 int area=0;    
	// for(int i=0;i<heights.size();i++)
	// {
	// 	int width=right[i]-left[i]-1;
	// 	area=max(heights[i]*width,area);
	// }

           for(int i=0;i<heights.size();i++){
            int width = right[i]-left[i]-1;
            area = max(heights[i]* width ,area);
         }

	return area;
        
    }
};
