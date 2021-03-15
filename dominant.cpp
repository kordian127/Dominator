#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

int A[]={-1,4,-1,2,-1,-1,3,-1};
int sizeA = sizeof(A)/4;

if (sizeA==0)
    return -1;

map<int,int> m;
int maxVal=0;
int numb;

for(int i=0;i<sizeA;i++){

    if(m.find(A[i])==m.end())
        m[A[i]]=1;
    else
        m[A[i]]++;

    if (m[A[i]]>maxVal){
        maxVal=m[A[i]];
        numb=A[i];
    }
}
if (maxVal<sizeA/2)
    return -1;

cout<<"Dominant number: "<<numb<<endl<<"Indexes: ";
for(int j=0;j<sizeA;j++){
    if(A[j]==numb)
        cout<<" "<<j<<" ";
}

return 0;
}
