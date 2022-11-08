long long int Xor = 0 , res1 = 0 , res2 = 0;

        vector<long long int>ans;

        for(long long int i = 0 ; i < N ; i++)

        {

            Xor = Xor ^ Arr[i];

        }

        long long int Sn = Xor & ~(Xor-1);

        

        for(long long int i = 0 ; i < N ; i++)

        {

            if((Arr[i] & Sn) != 0)

             res1 = res1^Arr[i];

             else

             res2 = res2^Arr[i];

        }

        if(res1 > res2)

        {

            ans.push_back(res1);

            ans.push_back(res2);

            

        }

        else

        {

            ans.push_back(res2);

            ans.push_back(res1);

        }

        

        return ans;

    }