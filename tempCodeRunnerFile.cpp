int minn = min(x,y);
    int maxx = max(x,y);
    for(int i = minn ; i < maxx ;i++)
    {
        if(i%5 == 2 || i%5 == 3)
        {
            cout << i << endl;
        }
    }