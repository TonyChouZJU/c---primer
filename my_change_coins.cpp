// my_change_coins.cpp : �������̨Ӧ�ó������ڵ㡣
//

// coin_change.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include <stdio.h>
#include <iostream>

using namespace std;

int min_coin(int coinUsed[],int types){
	int temp_min=-1;
	int temp_i=-1;
	for(int i = 0; i <types; i ++)
		if(coinUsed[i]>0){
			temp_min=coinUsed[i];
			temp_i=i;
			break;}
	for(int i = 0; i <types; i ++)
		if(coinUsed[i]>0&&coinUsed[i]<=temp_min){
			temp_min=coinUsed[i];
			temp_i=i;
		}
	if(temp_min==-1)
	return temp_min;
	else
	return temp_i;
}
void makeChange(int values[], int types, int total, int coinUsed[], int cointTrack[]){
		int* mincoinUsed=new int[total+1];
		mincoinUsed[0]=0;
		int coin_result;
		for(int i=0;i < types; i++){
			mincoinUsed[values[i]]=1;
			cointTrack[values[i]]=values[i];
		}

		if(values[0]>1){
		for(int i=1;i <values[0]; i++)
			mincoinUsed[i]=-1;}

        for(int i = 1+values[0]; i<= total; i ++){	
				mincoinUsed[i] = -1;
                for(int j = 0; j < types; j ++){
				if(values[j]<=i)
                                if(mincoinUsed[i-values[j]]==-1)
									coinUsed[j]=-1;
								else
                                    coinUsed[j]=mincoinUsed[i - values[j]] + 1;
				cout<<"��"<<j<<"��"<<endl;
				cout<<coinUsed[j]<<endl;
				}
 
                   
				coin_result=min_coin(coinUsed,types);
				if(coin_result==-1)
					mincoinUsed[i]=-1;
				else
				{
					mincoinUsed[i]=coinUsed[coin_result];
					cointTrack[i]=values[coin_result];
				}
				cout<<i<<"�ĸ���"<<mincoinUsed[i]<<endl;
        }
		if(mincoinUsed[total]==-1)
			cout<<"Impossible"<<endl;
		else{
        while(total>0)
        {
                cout<< cointTrack[total]<<" ";
                total -= cointTrack[total];
		}
		}
}

int main(int argc, char *argv[])
{
        //Ӳ����ֵ
        int value[]={2,5,21,25};
        //Ӳ�������С
        auto size=sizeof(value)/sizeof(*value);
        //Ҫ�������
        //int money=63;
		int money;
		cin>>money;
        //����ÿ����ֵ��Ӧ��Сֵ����Ϊ0��λ���������ʼ�1
		int* coinsUsed=new int[size];
        int* coinsTrack=new int[money+1];
		for(int i=0; i <=money; i ++)
			coinsTrack[i]=0;
		for(int i=0;i <size; i ++)
			coinsUsed[i]=0;

        makeChange(value,size,money,coinsUsed,coinsTrack);
		system("PAUSE");  
}
