#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main (){
    printf("������㽫����һ������С����ѧ��������Ҫ���һ��������ҵ�Ķ�����ע�⣺���Ե�10�֣������8�֣�����Ҫʹ�Լ��ķ����ﵽ100�ַ��ɻ�ʤ\n");
    int mark=0,num=0;
    while (mark<100){
        srand(time(0));
        int choice=rand()%4+1;
        int result;
        num++;
        if (choice==1){
            int jiafa1=rand()%100+1,jiafa2=rand()%100+1;
            printf("��ش��%d����Ŀ��%d + %d =\n",num,jiafa1,jiafa2);
            cin>>result;
            if (result==(jiafa1+jiafa2)){
                mark+=10;
                printf("��ϲ�����ˣ����������������10�֣���ǰ����Ϊ%d����������\n",mark);
            }else{
                mark-=8;
                printf("������ˣ�����û��������ô���ģ���ȷ����%d��������8�֣���ǰ����Ϊ%d����������\n",(jiafa1+jiafa2),mark);
            }
        }
        else if (choice==2){
            bool hecha=false;int jianfa1,jianfa2;
            while (hecha==false){
            jianfa1=rand()%100+1,jianfa2=rand()%100+1;
            if(jianfa1>=jianfa2){hecha=true;}
            }
            printf("��ش��%d����Ŀ��%d - %d =\n",num,jianfa1,jianfa2);
            cin>>result;
            if (result==(jianfa1-jianfa2)){
                mark+=10;
                printf("��ϲ�����ˣ����������������10�֣���ǰ����Ϊ%d����������\n",mark);
            }else{
                mark-=8;
                printf("������ˣ�����û��������ô���ģ���ȷ����%d��������8�֣���ǰ����Ϊ%d����������\n",(jianfa1-jianfa2),mark);
            }
        }
         else if (choice==3){
            int chengfa1=rand()%100+1,chengfa2=rand()%100+1;
            printf("��ش��%d����Ŀ��%d �� %d =\n",num,chengfa1,chengfa2);
            cin>>result;
            if (result==(chengfa1*chengfa2)){
                mark+=10;
                printf("��ϲ�����ˣ����������������10�֣���ǰ����Ϊ%d����������\n",mark);
            }else{
                mark-=8;
                printf("������ˣ�����û��������ô���ģ���ȷ����%d��������8�֣���ǰ����Ϊ%d����������\n",(chengfa1*chengfa2),mark);
            }
        }
        else if (choice==4){
            bool hecha=false;int chufa1,chufa2;
            while (hecha==false){
            chufa1=rand()%100+1,chufa2=rand()%100+1;
            if(chufa1%chufa2==0){hecha=true;}
            }
            printf("��ش��%d����Ŀ��%d �� %d =\n",num,chufa1,chufa2);
            cin>>result;
            if (result==(chufa1/chufa2)){
                mark+=10;
                printf("��ϲ�����ˣ����������������10�֣���ǰ����Ϊ%d����������\n",mark);
            }else{
                mark-=8;
                printf("������ˣ�����û��������ô���ģ���ȷ����%d��������8�֣���ǰ����Ϊ%d����������\n",(chufa1/chufa2),mark);
            }
        }
    }
    printf("��ϲ���������ҵ�����һ������%d��",mark);
    return 0;
}