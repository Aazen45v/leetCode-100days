class Solution {
public:
    int totalMoney(int n) {
       int total=1,sum=0,subsequentmonday=2;
       int i;
       for(i=1;i<=n;i++)
       {
           if(i%7!=0)
           {
           sum=sum+total;
           total=total+1;
           }
          else
           {
               sum=sum+total;
               total=subsequentmonday;
               subsequentmonday++;
           }
       }
       return sum;
    }
};
