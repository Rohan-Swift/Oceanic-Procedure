#include<iostream>
using namespace std;
int main()
{
    char call[7], track, entry[10], entry1[10], next[10];
    int level, mach, choice,TMI, est, est1;
loop:    cout<<"Oceanic Clearance/Position Report Generator"<<endl<<endl;
    cout<<"Press 1 for Oceanic Clearance"<<endl;
    cout<<"Press 2 for Position Report"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    switch(choice)
    {
        case 1: cout<<"Enter your Callsign"<<endl;
                cin>>call;
                cout<<"Enter your Flight Level"<<endl;
                cin>>level;
                cout<<"Enter your Mach Speed"<<endl;
                cin>>mach;
                cout<<endl<<endl;
                cout<<"ROUTING"<<endl<<endl;
                cout<<"Enter the NAT Track you are flying (custom not available yet)"<<endl;
                cin>>track;
                cout<<"Entry fix"<<endl;
                cin>>entry;
                cout<<"ETA at Entry Fix"<<endl;
                cin>>est;
                cout<<"TMI"<<endl<<endl;
                cin>>TMI;
                cout<<"Your Clearance-"<<endl;
                cout<<call<<" request clearance via Track "<<track<<". Estimating "<<entry<<" at "<<est;
                cout<<". Request flight level "<<level<<" Mach ."<<mach<<". On readback, state you have TMI "<<TMI;
                cout<<endl;
                break;

        case 2: cout<<"Enter your Callsign"<<endl;
                cin>>call;
                cout<<"Reporting at"<<endl;
                cin>>entry;
                cout<<"Time"<<endl;
                cin>>est;
                cout<<"Flight Level"<<endl;
                cin>>level;
                cout<<"Mach Speed"<<endl;
                cin>>mach;
                cout<<"Next Fix"<<endl;
                cin>>entry1;
                cout<<"Estimating Next Fix"<<endl;
                cin>>est1;
                cout<<"Fix thereafter"<<endl;
                cin>>next;
                cout<<endl<<endl;
                cout<<"Your Position report-"<<endl<<endl;
                cout<<call<<" position "<<entry<<" at "<<est<<" Flight Level "<<level<<" Mach ."<<mach;
                cout<<". Estimating "<<entry1<<" at "<<est1<<" "<<next<<" thereafter"<<endl;
                break;

        default: cout<<"Invalid Option, please try again"<<endl;
                 goto loop;
    }
}
