#include <vector>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> v){
    vector<vector<int>> tmp = v;
    for(int i=0;i<v.size();i++) for(int j=0;j<v.size();j++){
        tmp[i][j] = v[(int)v.size()-1-j][i];
    }
    return tmp;
}
