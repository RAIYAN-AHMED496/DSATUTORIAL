#include <iostream>
#include <vector>
using namespace std;

int max_area(vector<int>vec){
    int max_water = 0;

    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            int width = j-i;
            int height = min(vec[i], vec[j]);
            int current_water = width * height;
            max_water = max(max_water, current_water);
        }
    }
    return max_water;

}

int main(){
    vector<int>vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The Container With Most water is: " << max_area(vec) << endl;
    return 0;
}