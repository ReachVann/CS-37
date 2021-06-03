//Reach Vann

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm> 
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

template<class T>
vector<T> values (vector<T>& arr)
{
	T i = 0;
	while(true){
		cout << "Enter number, -999 to quit: ";
		cin >> i;
		if(i == -999){
			break;
		}
		arr.push_back(i);
	}
	return arr;
}

template <class y>
vector<y> avg (vector<y> arr){
	vector<y> temp;
	temp = arr;
	float avg = 0;
	for(int x = 0; x < 2; x++){
		temp.pop_back();
	}
	for(auto x : temp){
		avg += x;
	}
	cout << setprecision(2) << showpoint << fixed;
	cout << "The average of the array is: " << avg/(temp.size());
	return temp;
}


template <class x>
vector<x> srt(vector<x> arr){
	sort(arr.begin(), arr.end());	
	return arr;
}

template<class z>
void fw(vector<z> arr, vector<z>arr1, vector<z> arr2){	
	fstream m1("unsorted.txt");
	m1.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\unsorted.txt", ios::out);
	for(auto y: x){
		m1 << y << ",";
	}
	m1.close();
	
	fstream m2("sorted.txt");
	m2.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\sorted.txt", ios::out);
	for(auto y: arr1){
		m2 << y << ",";
	}
	m2.close();
	
	fstream m3("avg.txt");
	m3.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\avg.txt", ios::out);
	for(auto y: arr2){
		m3 << y << ",";
	}
	m3.close();
}

int main()
{
	vector<int> m1;
	values(m1);
	vector<int> m2 = srt(m1);
	vector<int> m3 = avg(m2);
	cout << "\nPre-Textfile";		
	while(true){
		cout <<"\nUnsorted: ";
		for(auto y : m1){
			cout << y << " ";
		}
		cout << "\nSorted: ";
		for(auto x : m2){
			cout << x << " ";
		}	 
		cout << "\nTwo Largest Values excluded: ";
		for(auto z : m3){
			cout << z << " ";
		}	
		break;

	}
	fw(m1, m2, m3);
	cout << "\nPost-Textfile";
	string line;
	ifstream m4;
	m4.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\avg.txt");
	getline(m4, line);	
	cout << "\nTwo Largest Excluded: " << line;
	m4.close();
	m4.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\sorted.txt");
	getline(m4, line);	
	cout << "\nSorted: " << line;
	m4.close();
	m4.open("C:\\Users\\reach\\Desktop\\CS 37\\Homework2f\\unsorted.txt");
	getline(m4, line);
	cout << "\nUnsorted: " << line;	
	m4.close();
	return 0;
}



/* Main File:
C:\Users\reach\Desktop\CS 37\Homework2f>Homework2.exe
Enter number, -999 to quit: 1
Enter number, -999 to quit: 2
Enter number, -999 to quit: 3
Enter number, -999 to quit: 4
Enter number, -999 to quit: 5
Enter number, -999 to quit: 6
Enter number, -999 to quit: 7
Enter number, -999 to quit: 8
Enter number, -999 to quit: 9
Enter number, -999 to quit: -999
The average of the array is: 4.00
Pre-Textfile
Unsorted: 1 2 3 4 5 6 7 8 9
Sorted: 1 2 3 4 5 6 7 8 9
Two Largest Values excluded: 1 2 3 4 5 6 7
Post-Textfile
Two Largest Excluded: 1,2,3,4,5,6,7,
Sorted: 1,2,3,4,5,6,7,8,9,
Unsorted: 1,2,3,4,5,6,7,8,9,
*/

/*Avg.Txt
1,2,3,4,5,6,7,
 */
/* Sorted.txt
1,2,3,4,5,6,7,8,9,
*/
/* Unsorted
2,3,5,4,8,6,7,9,1
 */



