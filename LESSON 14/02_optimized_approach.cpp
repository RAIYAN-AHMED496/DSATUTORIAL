#include <iostream>
#include <vector>
using namespace std;

int max_area(vector<int>vec){
    int max_water = 0;

    int lp=0, rp=vec.size();
    while (lp < rp)
    {
        int width = rp - lp;
        int height = min(vec[lp], vec[rp]);
        int current_water = width * height;
        max_water = max(max_water, current_water);
        vec[lp] < vec[rp] ? lp++ : rp--;
    }
    
    return max_water;

}

int main(){
    vector<int>vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The Container With Most water is: " << max_area(vec) << endl;
    return 0;
}