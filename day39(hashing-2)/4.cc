 
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void printItinerary(unordered_map<string,string> tickets){
    //find starting point
    unordered_set<string> to;
    for(pair<string,string> ticket: tickets){ //<from,to>
        to.insert(ticket.second);
    }

    string start= "";
    for(pair<string,string> ticket: tickets){
        if(to.count(ticket.first)==0){
            start=ticket.first;
            break;
        }
    }

    //plan printing itinerary
     while(tickets.count(start)){
        cout<<start<<" -> ";
        start=tickets[start];
    }
    cout<<"destination\n";
}

        
    


int main()
{
    unordered_map<string,string> tickets;
    tickets["Chennai"]="Bangalore";
    tickets["Mumbai"]="Delhi";
    tickets["Goa"]="Chennai";
    tickets["Delhi"]="Goa";
    printItinerary(tickets);


    return 0;
}
//bengaluru nhi aarha, checl