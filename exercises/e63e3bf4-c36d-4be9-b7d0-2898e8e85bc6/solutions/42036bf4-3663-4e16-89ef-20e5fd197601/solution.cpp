int compute_pascal(int row, int position){
    if(position == 1){
        return 1;
    }
    else if(position == row){
        return 1;
    }
    else{
        return compute_pascal(row-1, position) + compute_pascal(row-1, position-1);
    }
}
