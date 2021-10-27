#include<bits/stdc++.h>
using namespace std;


void printSubsets(char* inp, char* out, int i, int j){
    // ----Base case -------
    if(inp[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // -----Recur case --------
    // Include the i'th letter
    out[j] = inp[i];
    printSubsets(inp, out, i+1, j+1);

    // Exclude the i'th letter
    // out[j]= '\0';
    printSubsets(inp, out, i+1, j);

    return; 
}

int main(){
    char input[100];
    char output[100];

    cin >> input;

    printSubsets(input, output, 0, 0);


    return 0;
}