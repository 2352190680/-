#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
    srand(time(0));
    // int a,b;
    // cin>>a>>b;
    //cout<<rand()%(b-a+1)+a;   //b和a 中生成随机数
    // int goal=rand()%(100-99+1)+99;
    long long goal=rand()%(10000-1+1)+1;
    printf("��ӭ������������Ϸ�����������1-10000֮��\n");
    long long min=1,max=10000,ci=0;bool result=false;
    while(result==false){
        ci++;
        int guess;cin>>guess;
        if (guess>goal){
            if (guess<=max){max=guess;}
            printf("��µ�����ƫ���ˣ���ȷ����%d---%d֮��,���Ѿ�����%d��\n",min,max,ci);
        }
        else if (guess<goal){
            if (guess>=min){min=guess;}
            printf("��µ�����ƫС�ˣ���ȷ����%d---%d֮��,���Ѿ�����%d��\n",min,max,ci);
        }
        else if (guess==goal){
            printf("��ϲ��¶��ˣ�����%d����һ������%d��",goal,ci);
            result=true;
        }
    }







    // int m,a;
    // cin>>m>>a;
    // for (int b=1;b<=a;++b){
    //     int c;
    //     cin>>c;
    //     if (m>=c){m-=c;}else {break;}
    // }
    // cout<<m;

    // int a,sum=0,s=0;
    // cin>>a;
    // for (int b=2;b<=100000;++b){int d=1;
    //     for (int c=2;c<b;++c){if (b%c==0)d=0;}
    //     if (d==1){sum+=b;if (sum>a){ break;}cout<<b<<endl;s++;}}
    // cout<<s;


    return 0;
}