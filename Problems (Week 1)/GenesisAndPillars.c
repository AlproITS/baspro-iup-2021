//
//  main.c
//  Genesis and Pillars
//
//  Created by Denta Bramasta Hidayat on 29/08/21.
//

#include <stdio.h>
int main(){
    int n, AtoBee, BeetoC, CtoD, DtoE;
    scanf("%d %d %d %d %d", &n, &AtoBee, &BeetoC, &CtoD, &DtoE);
    if (n >= AtoBee && n >= BeetoC && n >= CtoD && n >= DtoE) {
        printf("YES HE CAN");
    }
    else{
        printf("NO HE CAN'T");
    }
    return 0;
}
