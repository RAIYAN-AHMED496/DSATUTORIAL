#include <iostream>
#include <vector>
using namespace std;


vector<int> pair_sum(vector<int> num, int target){
    vector<int> ans;
    int n = num.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(num[i] + num[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main(){
    vector<int>num = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pair_sum(num, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
// nothing