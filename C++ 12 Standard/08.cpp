//PROGRAM -- 8
//Accomplish the concept object as parameter to a function by TIME.

#include<iostream.h>

class TIME
		 {
		  private:
			int hour,min,sec;
		  public:
			int tot_sec;
			void Gettime(int h,int m, int s)
			 {
			  hour=h;
			  min=m;
			  sec=s;
			  tot_sec=(hour*60)+(min*60)+sec;
			 }
			void Puttime()
			 {
			  cout<<"\n\t Time Is..";
			  cout<<"\n\t"<<hour<<":"<<min<<":"<<sec;
			 }
			void Convert(TIME t,char ch);
			void sum(TIME t1, TIME t2);
			int Gethrs()
			 {
			  return hour;
			 }
			int Getmin()
			 {
			  return min;
			 }
			int Getsec()
			 {
			  return sec;
			 }
		 };
		 void TIME::Convert(TIME t,char ch)
		  {
			switch(ch)
			 {
			  case'h':
				cout<<"\n\t Time In Hours Is : "<<t.hour<<":"<<t.min<<":"<<t.sec;
				break;
			  case'p':
				cout<<"\n\t Time In am/pm Is : "<<((t.hour>12)?(t.hour-12):(t.hour))<<":"<<t.min<<":"<<t.sec;
				break;
			  default:
				cout<<"\n\t Wrong Choice...";
				break;
			 }
		  }
		 void TIME::sum(TIME t1,TIME t2)
		  {
			int h,m,s,sq,mq;
			sq=(t1.sec+t2.sec)/60;
			s=(t1.sec+t2.sec)%60;
			mq=(sq+t1.min+t2.min)/60;
			m=(sq+t1.min+t2.min)%60;
			h=mq+t1.hour+t2.hour;
			 if(h==24)
				h=0;
			cout<<"\n\t Total Time Is : "<<h<<":"<<m<<":"<<s;
		  }
		 void main()
		  {
			TIME tm1,tm2;
			int tt;
			char ch;
         int hr1,mi1,sc1,hr2,mi2,sc2;
			cout<<"\n\t -------  Time 1  -------";
			cout<<"\n\t Enter Hours : ";
			cin>>hr1;
			cout<<"\n\t Enter Minutes : ";
			cin>>mi1;
			cout<<"\n\t Enter Seconds : ";
			cin>>sc1;
			tm1.Gettime(hr1,mi1,sc1);
			cout<<"\n\t -------  Time 2  -------";
			cout<<"\n\t Enter Hours : ";
			cin>>hr2;
			cout<<"\n\t Enter Minutes : ";
			cin>>mi2;
			cout<<"\n\t Enter Seconds : ";
			cin>>sc2;
			tm2.Gettime(hr2,mi2,sc2);
			cout<<"\n\t ------  Main Menu  ------";
			cout<<"\n\t Enter 'h' For Hours Format..";
			cout<<"\n\t Enter 'p' For am/pm Format..";
			cout<<"\n\t What You Want To Do (h,p) : ";
			cin>>ch;
			tm1.Convert(tm2,ch);
			tm1.sum(tm1,tm2);
		  }
