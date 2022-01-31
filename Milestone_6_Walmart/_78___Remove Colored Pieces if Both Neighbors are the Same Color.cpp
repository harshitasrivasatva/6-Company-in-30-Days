bool winnerOfGame(string colors) {

        int i =0, a=0, b=0;
        int n =colors.length();

        while(i<n)
        {
            int cnt =0;
            while(i<n && colors[i]=='A')
                cnt++,i++;
            if(cnt>=3) a+=(cnt-2);

            cnt=0;
            while(i<n && colors[i]=='B')
                cnt++,i++;
            if(cnt>=3) b+=(cnt-2);
        }

        if(a > b) return true;
        return false;

    }
