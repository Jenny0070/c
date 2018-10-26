ElementType FindKth( List L, int K )
{
    List p = L;
    if(p == NULL)
        return ERROR;
    else
    {
        while(--K)
        {
            if(p->Next == NULL)
                return ERROR;
            else
            {
                p = p->Next;
            }
        }
        return ERROR;
    }
}
