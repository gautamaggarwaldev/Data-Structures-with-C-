# include <iostream>
# define block "\u25A0" 
using namespace std;

const string black("\033[0;30m");
const string bright_black("\033[1;30m");
const string red("\033[0;31m");
const string bright_red("\033[1;31m");
const string green("\033[0;32m");
const string yellow("\033[0;33m");
const string blue("\033[0;34m");
const string magenta("\033[0;35m");
const string cyan("\033[0;36m");
const string bright_cyan("\033[1;36m");
const string white("\033[0;37m");
const string black_bg("\033[0;40m");
const string bright_black_bg("\033[1;40m");
const string red_bg("\033[0;41m");
const string bright_red_bg("\033[1;41m");
const string green_bg("\033[0;42m");
const string yellow_bg("\033[0;43m");
const string blue_bg("\033[0;44m");
const string magenta_bg("\033[0;45m");
const string cyan_bg("\033[0;46m");
const string bright_cyan_bg("\033[1;46m");
const string white_bg("\033[0;47m");
const string reset("\033[0m");

void sleep() {
    for(int i=0;i<35000000;i++);
}
void printPic(char** pic, int n, int m) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(pic[i][j]=='.') cout << black << block;
            else if(pic[i][j]=='#') cout << red << block;
            else if(pic[i][j]=='R') cout << bright_red << block;
            else cout << bright_cyan << pic[i][j];
        }
        cout << endl;
    }
}
// FLOOD FILL ALGORITHM ↓↓↓↓↓
void fillColor(char** pic, int i, int j, int n, int m) {
    if(i<0||j<0||i>=n||j>=m||pic[i][j]=='R'||pic[i][j]=='#') return;
    pic[i][j]='R';
    system("clear");
    printPic(pic,n,m);
    sleep();
    fillColor(pic,i+1,j,n,m);
    fillColor(pic,i,j+1,n,m);
    fillColor(pic,i,j-1,n,m);
    fillColor(pic,i-1,j,n,m);
}
int main() {
    int n,m;
    cin >> n >> m;
    char** pic = new char*[n];
    for(int i=0;i<n;i++) {
        pic[i] = new char[m+1];
        cin>>pic[i];
    }
    int i,j;
    cin >> i >> j;
    fillColor(pic,i,j,n,m);
}