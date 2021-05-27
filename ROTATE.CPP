#include<iostream.h>
#include<conio.h>
void main()
{
		clrscr();
		int array[20],i,rotate,size;
		cout<<"Enter size of Array: ";
		cin>>size;
		cout<<"\n Enter the elements of array:\n";
		for(i=0;i<size;i++)
		{
			cin>>array[i];
		}
		cout<<"\nThe elements of array:\n";
		for(i=0;i<size;i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<"\nNumber of Elements you want to rotate: ";
		cin>>rotate;
		cout<<"The Array after rotation: ";
		for(i=rotate;i<size;i++)
		{
			cout<<array[i]<<" ";
		}
		for(i=0;i<rotate;i++)
		{
			cout<<array[i]<<" ";
		}
		getch();


}