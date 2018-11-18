#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void read_data(int sp[10][3])
{
	int r,c,k,t;
	cout<<"输入行和列："<<endl;
	cin>>r>>c;

	k=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			
			cin>>t;
			if(t!=0){
			sp[k][0]=i;
			sp[k][1]=j;
			sp[k][2]=t;
			k++;
			}
		}
	}

	sp[0][0]=r;
	sp[0][1]=c;
	sp[0][2]=k-1;

}

void show_data(int sp[10][3])
{
	int r,c,num;
	r=sp[0][0];
	c=sp[0][1];
	num=sp[0][2];
		cout<<sp[0][0]<<" "<<
				 	sp[0][1]<<" "<<
					sp[0][2];
	for(int i=0;i<r;i++){
		cout<<endl;
		for(int j=0;j<c;j++){
			for(int k=1;k<=num;k++)
			{
				if(sp[k][0]==i && sp[k][1]==j)
				{
				
					cout<<i<<" "
						<<j<<" "
						<<sp[k][2];
					break;
				}
				
			}
		//	cout<<sp[0][0]<<" "<<
					//	sp[0][1]<<" "<<
					//	sp[0][2];
			/*
			if(k>num)
			{
				
			}
			else
				cout<<sp[k][2];
*/
		}
	}
}
int data_add(int sp1[10][3],int sp2[10][3],int sp3[10][3])
{
	int r,c,num;
	if(sp1[0][0]!=sp2[0][0] || sp1[0][1]!=sp2[0][1])
	{
		cout<<"wrong."<<endl;
		return 0;
	}
	r=sp1[0][0];
	c=sp1[0][1];

	int k1=1,k2=1,k3=1;
	while(k1<=sp1[0][2] && k2<=sp2[0][2])
	{
		if(sp1[k1][0]>sp2[k2][0])
		{
			sp3[k3][0]=sp2[k2][0];
			sp3[k3][1]=sp2[k2][1];
			sp3[k3][2]=sp2[k2][2];
			k3++;k2++;
		}
		else if(sp1[k1][0]<sp2[k2][0])
		{
			sp3[k3][0]=sp1[k1][0];
			sp3[k3][1]=sp1[k1][1];
			sp3[k3][2]=sp1[k1][2];
			k3++;k1++;
		}
		else 
		{
			if(sp1[k1][1]>sp2[k2][1])
			{
				sp3[k3][0]=sp2[k2][0];
				sp3[k3][1]=sp2[k2][1];
				sp3[k3][2]=sp2[k2][2];
				k3++;k2++;
			}
			else if(sp1[k1][1]<sp2[k2][1])
			{
				sp3[k3][0]=sp1[k1][0];
				sp3[k3][1]=sp1[k1][1];
				sp3[k3][2]=sp1[k1][2];
				k3++;
				k1++;
			}
			else
			{
				sp3[k3][0]=sp1[k1][0];
				sp3[k3][1]=sp1[k1][1];
				sp3[k3][2]=sp1[k1][2]+sp2[k2][2];
				k3++;k2++;k1++;
			}
		}
	
	}

	while(k1<=sp1[0][2])
	{
			sp3[k3][0]=sp1[k1][0];
			sp3[k3][1]=sp1[k1][1];
			sp3[k3][2]=sp1[k1][2];
			k3++;k1++;
	}

	while(k2<=sp2[0][2])
	{
			sp3[k3][0]=sp2[k2][0];
			sp3[k3][1]=sp2[k2][1];
			sp3[k3][2]=sp2[k2][2];
			k3++;
			k2++;
	}
	
	sp3[0][0]=r;
	sp3[0][1]=c;
	sp3[0][2]=k3-1;
	return 0;
}

void matrix_transpose(int sp1[10][3],int sp2[10][3])
{
	int r,c,num;
	r=sp1[0][0];
	c=sp1[0][1];
	num=sp1[0][2];

	int p,q,col,k;
	int num[c+1],pot[c+1];



}

void matrix_multiply(int sp1[10][3],int sp2[10][3],int sp3[10][3])
{

}

int main()
{
	int sp1[10][3],sp2[10][3],sp3[10][3];

	read_data(sp1);
	show_data(sp1);
	read_data(sp2);
	show_data(sp2);
	data_add(sp1,sp2,sp3);
	show_data(sp3);
	return 0;
}

