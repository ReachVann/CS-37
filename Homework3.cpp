//Reach Vann

#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>  
#include <string>
#include <time.h>    
#include <cstdlib>  
using namespace std;



class ma {
public:
    ma();
    void ra();
    void setdata();
    void printdata();
    void avg();
    void srt();
    void srt2();
    void fw();
    void printfw();
    void addDiff();
    void subDiff();
    void rev();
private:
    vector<int> x = vector<int> (10);
    vector<int> x1 = vector<int> (10);
    vector<int> x2 = vector<int> (10);
    vector<int> ran = vector<int> (10);
};


ma:: ma(){
    for(int i = 0; i < 10; i++){
        x.at(i) = 0;
    }
}

void ma:: ra(){
    int rad;
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        rad = 1 + (rand() % (100));
        ran.at(i) = rad;
    }
}

void ma:: setdata(){ 
    x = ran;
}

void ma:: srt(){
    sort(x.begin(), x.end());
    cout << "D: ";
    for(auto y : x){
        cout << y << " ";
    }
    cout << endl;
}
void ma:: srt2(){
    sort(x.begin(), x.end(), greater<int>());
    cout << "E: ";
    for(auto y : x){
    cout << y << " ";
    }
    cout << endl;
}
void ma:: printdata(){
    cout << "C: ";
    for(auto y : x){
        cout << y << " ";
    }
    cout << endl;
}

void ma :: avg(){
    vector<int> temp = x;
    sort(temp.begin(), temp.end());
    float avg = 0;
    for(int i = 0; i < 2; i++){
        temp.pop_back();
    }
    for(auto l : temp){
        avg += l;
    }
    cout << "F: " << avg/(sizeof(temp) - 4) << endl;
}

void ma:: fw(){
    fstream m1("unsorted.txt");
    m1.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework3f\\unsorted.txt", ios::out);
    for(auto l : x){
        m1 << l << " "; 
    }
    m1.close();

}
void ma :: printfw(){
    string line;
    ifstream m4;
    m4.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework3f\\unsorted.txt");
    getline(m4, line);
    cout << "H: " << line << endl;	
    m4.close();
}
void ma:: addDiff(){
    vector<int> temp = x;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < 10; i++){
        x1.at(i) = x.at(i) + temp.at(i);
    }
}

void ma :: subDiff(){
    vector<int> temp = x;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < 10; i++){
        x2.at(i) = x.at(i) - temp.at(i);
    }
}

void ma :: rev(){
    reverse(x1.begin(), x1.end());
    reverse(x2.begin(), x2.end());
    cout << "K: ";
    for(auto y : x1){
        cout << y << " ";
    }
    cout << endl << "K: ";
    for(auto y : x2){
        cout << y << " ";
    }
}

int main(){
    ma one;
    one.ra();
    one.setdata();
    one.printdata();
    one.srt();  
    one.srt2(); 
    one.avg();
    one.fw();
    one.printfw();
    one.addDiff();
    one.subDiff();
    one.rev();
    return 0;
}

/*
C:\Users\reach\Desktop\CS 37\Homework3f>a.exe
C: 54 58 33 20 31 55 82 35 21 24 
D: 20 21 24 31 33 35 54 55 58 82
E: 82 58 55 54 35 33 31 24 21 20
F: 34.125
H: 82 58 55 54 35 33 31 24 21 20
K: 102 79 79 85 68 68 85 79 79 102
K: -62 -37 -31 -23 -2 2 23 31 37 62 
*/