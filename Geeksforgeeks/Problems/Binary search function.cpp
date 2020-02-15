if(A[mid]==k)
    return mid;
    else if(k>A[mid])
    {
        bin_search(A,mid+1,right,k);
    }
    else
    {
        bin_search(A,left,mid,k);
    }
