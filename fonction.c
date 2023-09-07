int numTable(int value){
    if(value<=2)return 1;
    else if(value<=4)return 2;
    else if(value<=8)return 3;
    return 0;
}
int choixplat(char value){
    if(value=='c')return 15;
    else if (value=='t')return 8;
    else if (value=='r')return 23;
    return 1;
}
int choixBoisson(char value){
    if(value=='s')return 5;
    else if (value=='e')return 2;
    else if (value=='l')return 12;
    return 1;
}
int choixDessert(char value){
    if(value=='t')return 62;
    else if (value=='g')return 3;
    else if (value=='m')return 8;
    return 1;
}
int sommePlat(char boi,char pl,char des,int nbClient){
    return nbClient*(choixplat(pl)+ choixBoisson(boi)+ choixDessert(des));
}