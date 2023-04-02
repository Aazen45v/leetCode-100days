class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i,cap=capacity,steps=0;
        for(i=0;i<plants.size();i++)
        {
            if(capacity>=plants[i])
            {
                capacity=capacity-plants[i];
                steps=steps+1;
            }
            else
            {
                steps=steps+i;
                steps=steps+(i+1);
                capacity=cap;
                if(plants[i]<=capacity)
                {
                    capacity=capacity-plants[i];
                }
            }
        }
        return steps;
    }
};
