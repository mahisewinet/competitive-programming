class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<pair<int, int>> blocks;
        int start = 0;
        for(int i = start + 1; i <= fruits.size(); i ++)
            if(i == fruits.size() || fruits[i] != fruits[start]){
                blocks.push_back(make_pair(fruits[start], i - start));
                start = i;
                i = start;
            }

        int res = 0;
        unordered_set<int> trees;
        int sum = 0;
        for(int i = 0; i <= blocks.size();)
            if(i == blocks.size() || ( trees.size() == 2 &&  trees.count(blocks[i].first) == 0)){
                res = max(res, sum);

                if(i < blocks.size()){
                    sum = 0;
                    i --;
                     trees.clear();
                }
                else
                    break;
            }
            else{
                 trees.insert(blocks[i].first);
                sum += blocks[i].second;
                i ++;
            }
        return res;
    }
};
