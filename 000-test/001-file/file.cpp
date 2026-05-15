#define indir "num.txt"
#define outdir "out_sort.txt"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    vector<string> str;
    ifstream in_file(indir);
    if(!(in_file.is_open())){
        cerr << "failed to open file !" << endl;
        return 1;
    }
    string word;
    while(in_file >> word){
        str.push_back(word);
    }
    in_file.close();

    cout << "original str: " << "\n";
    for(const auto & w : str){
        cout << w << " ";
    }
    cout << "\n";

    sort(str.begin(), str.end());
    ofstream out_file(outdir);
    if(!out_file.is_open()){
        cerr << "can not create file : " << endl;
        return 1;
    }
    cout << "after sort: " << "\n";
    for(const auto & w : str){
        cout << w << " ";
        out_file << w << "\n";
    }
    cout << "\n";
    return 0;
}