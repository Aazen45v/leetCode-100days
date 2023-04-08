class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int i,diff=0,sum=0;
        for(i=0;i<seats.size();i++)
        {
            diff=abs(seats[i]-students[i]);
            sum=sum+diff;
        }
        return sum;
    }
};
