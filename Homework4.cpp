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
    friend ostream &operator<<(ostream& output, ma& one){
        output << "C:";
        for(auto y : one.x){
            output << y << " ";
        }
        return output;
    }
    friend istream &operator>>(istream& input, ma& one){
        int z[10];
        cout << "Enter four numbers for array: ";
        input >> z[0] >> z[1] >> z[2] >> z[3] >> z[4] >> z[5] >> z[6] >> z[7] >> z[8] >> z[9];
        for(int i = 0; i < 10; i++){
            one.x.at(i) = z[i] ;
        }
        return input;
    }
public:
    ma();
    ma operator+(ma& one){
        ma temp;
        for(int i = 0; i < 10; i++){
            temp.x.at(i) = x.at(1) + one.x.at(i);
        }
        return temp;
    }
    ma operator-(ma& one){
        ma temp;
        for(int i = 0; i < 10; i++){
            temp.x.at(i) = x.at(1) - one.x.at(i);
        }
        return temp;
    }
    bool operator>(ma& one){
        sort(one.x.begin(), one.x.end());
        sort(x.begin(), x.end());
        float avg = 0, avg1;
        for(int i = 0; i < 2; i++){
            x.pop_back();
            one.x.pop_back();
        }
        for(auto l : x){
            avg += l;
        }
        for(auto l : one.x){
            avg1 += l;
        }
        avg = avg/(sizeof(x) - 4) ;
        avg1 = avg1/(sizeof(one.x) - 4);
        if(avg > avg1){
            return true;
        }
        return false;
    }
    bool operator<=(ma& one){
        sort(one.x.begin(), one.x.end());
        sort(x.begin(), x.end());
        float avg = 0, avg1 = 0;
        for(int i = 0; i < 2; i++){
            x.pop_back();
            one.x.pop_back();
        }
        for(auto l : x){
            avg += l;
        }
        for(auto l : one.x){
            avg1 += l;
        }
        avg = avg/(sizeof(x) - 4) ;
        avg1 = avg1/(sizeof(one.x) - 4);
        if(avg <= avg1){
            return true;
        }
        return false;
    }
    void operator++(int){
        vector<int> temp = x;
        reverse(temp.begin(), temp.end());
    }
    void operator--(int){
        reverse(x.begin(), x.end());
    }
    void ra();
    void setdata();
    void printdata();
    float avg();
private:
    vector<int> x = vector<int> (10);
};


ma:: ma(){
    
}

void ma:: ra(){
    int rad;
    vector<int> ran = vector<int> (10);
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        rad = 1 + (rand() % (100));
        ran.at(i) = rad;
    }
    x = ran;
}


float ma :: avg(){
    float re;
    vector<int> temp = x;
    sort(temp.begin(), temp.end());
    float avg = 0;
    for(int i = 0; i < 2; i++){
        temp.pop_back();
    }
    for(auto l : temp){
        avg += l;
    }
    re = avg/(sizeof(temp) - 4) ;
    return re;
} 

int main(){
    ma one, two, three, four;
    one.ra();
    cin >> two;
    cout << two;
    three = one + two;
    four = one - two;
    cout << endl;
    if(one > two){
        cout << "Array one is bigger than Array two";
    }
    else{
        cout << "Array one is smaller than Array two";
    }
    cout << endl;
    if(three <= four){
        cout << "Array three is smaller or equal to Array four";
    }
    else{
        cout << "Array three is greater than Array four";
    }
    three++;
    four--;
    return 0;
    
}

/*
C:\Users\reach\Desktop\CS 37\Homework4f>a.exe
Enter four numbers for array: 1 2 3 4 5 6 7 8 9 10
C:1 2 3 4 5 6 7 8 9 10 
Array one is bigger than Array two
Array three is greater than Array four
*/