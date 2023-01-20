//this program is written using if and if else 
#include<iostream>
	
using namespace std;
class percentage
{
	private:
	float sum,percentag,CGPA;
		public:
			
				float math,physics,English,programming,SRE;  //to store the marks
			int mpoint,ppoint,epoint,propoint,srepoint,totalpoint;     //to store the points of subjects
			float mper,pper,eper,proper,sreper;   //to store the percentage of subjects
			void get_marks()
			{
				system("color 03 ");
//				cout<<"\n\n enter marks out of 150 \n\n";
				cout<<"enter maths marks (total 150): ";
				cin>>math;
				cout<<"enter physics mark (total 150): ";
				cin>>physics;
				cout<<"enter english mark (total 150): ";
				cin>>English;
			    cout<<"enter programming marks(total 200) : ";
				cin>>programming;
		        cout<<"enter sre marks (total 150 ): ";
		        cin>>SRE;
		        system("cls");
		        sum=math+physics+English+programming+SRE;
		        
			}
			void grade()
			{
				
				mper=math/150*100;
				if(mper>=80)
				mpoint=4;
			
				else if(mper>=70)
				mpoint=3;
				else if(mper>=60)
				mpoint=2;
				else if(mper>=50)
				mpoint=1;
				else
				mpoint=0;
				
				//for physics
				pper=physics/150*100;
				if(pper>=80)
				ppoint=4;
			
				else if(pper>=70)
				ppoint=3;
				else if(pper>=60)
				ppoint=2;
				else if(pper>=50)
				ppoint=1;
				else
				ppoint=0;
				//for english
				eper=English/150*100;
				if(eper>=80)
				epoint=4;
			
				else if(eper>=70)
				epoint=3;
				else if(eper>=60)
				epoint=2;
				else if(eper>=50)
				epoint=1;
				else
				epoint=0;
				//for programming 
				proper=programming/200*100;
				if(proper>=80)
				propoint=4;
			
				else if(proper>=70)
				propoint=3;
				else if(proper>=60)
				propoint=2;
				else if(proper>=50)
				propoint=1;
				else
				propoint=0;
				//for sre
				sreper=SRE/150*100;
				if(sreper>=80)
				srepoint=4;
			
				else if(sreper>=70)
				srepoint=3;
				else if(sreper>=60)
				srepoint=2;
				else if(sreper>=50)
				srepoint=1;
				else
				srepoint=0;
				
		totalpoint=mpoint+ppoint+epoint+propoint+srepoint;
				cout<<"\n\n subject \ttotal marks \t obtain marks \t\t point  \n\n";
				cout<<"\n math \t\t 150 " << "\t\t\t "<<math << "\t\t  "<<mpoint;
				cout<<"\n physics \t 150 " << "\t\t\t "<<physics << "\t\t  "<<ppoint;
				cout<<"\n english \t 150" << "\t\t\t "<<English  << "\t\t  "<<epoint;
				cout<<"\n programming \t 200" << "\t\t\t "<<programming << "\t\t  "<<propoint;
				cout<<"\n SRE \t\t 150" << "\t\t\t "<<SRE << "\t\t  "<<srepoint;
				cout<<"\n .........................................................................\n ";
		        	cout<<"\n TOTAL  | \t 800 \t\t\t"<< sum <<"\t\t"<<totalpoint;
		        	cout<<"\n ......................................................................\n ";	
			}
			
			void show_detail()
			{
				
			
				percentag=sum/800*100;
				cout<<"\n percentage is = "<<percentag;
//				cout<<"the total cgpa is ="<<
                cout<<"\n Your  CGPA is = "<<totalpoint/5;
			}
	
	
};
int main ()
{
percentage c1;

c1.get_marks();

c1.grade();



c1.show_detail();

}
