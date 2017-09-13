#include <cstdlib>
#include <iostream>
#include <string>
#include "LLIST.h"
#include "Edge.h"


using  namespace std;
int main() {
    List saad;
    EDGE saad1;
    saad.AddEdge("kermit", "daisy");
    saad.AddEdge("aziz", "mahi");
    saad.AddEdge("bd", "USA");
    saad.PrintEdge();
    saad.DeleteUser("saad");
    saad.PrintEdge();


    return 0;
}