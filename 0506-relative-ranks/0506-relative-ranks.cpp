class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted=score;
        sort(sorted.begin(), sorted.end(), greater<int>());
      
        vector<string>answer(score.size());
        for(int i =0; i<score.size(); i++){
            for(int j =0; j<sorted.size(); j++){
               if(score[i]==sorted[j]){
                int rank = j+1;
                if(rank == 1)
                answer[i]="Gold Medal";
                else if(rank==2)
                answer[i]="Silver Medal";
                else if(rank == 3)
                answer[i]= "Bronze Medal";
                else
                answer[i]=to_string(rank);
                break;
               }
            }
            

        }
        return answer;
    }
};