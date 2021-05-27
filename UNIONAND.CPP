#include<iostream.h>
#include<conio.h>
void printUnion(int array1[],int array2[],int size1,int size2);
void printIntersection(int array1[],int array2[],int size1,int size2);
int main()
{
	clrscr();
	int array1[20],array2[20],i,j,size1,size2;
	cout<<"Enter the number of elements you want to enter in ARRAY1 : ";
	cin>>size1;
	cout<<"Enter the number of elements you want to enter in ARRAY2 : ";
	cin>>size2;
	cout<<"\nEnter elements of ARRAY1: \n";
	for(i=0;i<size1;i++)
	{
		cin>>array1[i];
	}
	cout<<"\nEnter elements of ARRAY2: \n";
	for(i=0;i<size2;i++)
	{
		cin>>array2[i];
	}
	cout<<"The elements of ARRAY1: ";
	for(i=0;i<size1;i++)
	{
		cout<<" "<<array1[i];
	}
	cout<<"\nThe elements of ARRAY2: ";
	for(i=0;i<size2;i++)
	{
		cout<<" "<<array2[i];
	}
	printUnion(array1, array2, size1,size2);
	printIntersection(array1, array2, size1,size2);
	getch();
	return 0;
}
void printUnion(int array1[],int array2[],int size1, int size2)
{
	int i=0;
	int j=0;
	cout<<"\nThe array after Union : ";
	while(i<size1 && j<size2)
	{
		if(array1[i]<array2[j])
		{
			cout<<array1[i++]<<" ";
		}
		else if(array2[j]<array1[i])
		{
			cout<<array2[j++]<<" ";
		}
		else
		{
			cout<<array2[j++]<<" ";
			i++;
		}

	}
	while(i<size1)
	{
		cout<<array1[i++]<<" ";
	}
	while(j<size2)
	{
		cout<<array2[j++]<<" ";
	}
}
void printIntersection(int array1[],int array2[],int size1, int size2)
{
	int i=0;
	int j=0;
	cout<<"\nThe array after Intersection :";
	while(i<size1 && j<size2)
	{
		if(array1[i]<array2[j])
		{
			i++;
		}
		else if(array2[j]<array1[i])
		{
			j++;
		}
		else
		{
			cout<<array2[j++]<<" ";
			i++;
		}

	}


}

