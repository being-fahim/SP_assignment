#include <stdio.h>

int main(){
    int M = 1;
    int N = 5;
    int active_buses[] = {301, 302, 303, 400 +M, 400 +N};
    int i;
    int search_id;
    int pos = -1;

    printf("Input Bus ID: ");
    scanf("%d", &search_id);

    for(i = 0; i < 5; i++){
        if(search_id == active_buses[i]){
            pos = i;
            break;
        }

    }
        if(pos == -1){
            printf("Bus %d is Parked at Depot.", search_id);
        }else{
            printf("Bus %d is Currently on Route at Index %d.", search_id, pos);
        }

}
