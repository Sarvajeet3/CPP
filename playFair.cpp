#include<bits/stdc++.h>

using namespace std;

int main()
{
    char matrix[5][5];
    vector<int> verify(26,1);
    verify[9]=0;
    string key;
    cout<<"Enter Key:";
    cin>>key;
    string plaintext;
    vector<string> pairs;
    vector<string> ciphertext;
    cout<<"Enter Text:";
    cin>>plaintext;
    int temp=0,ptr=0;
    string tt="";
    cout<<endl<<"Matrix:"<<endl;
    for(int i=0;i<key.size();i++)
    {
        int ascii=key[i];
        if(ascii==106)
        {
            key[i]='i';
        }
    }
    for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(temp<key.size())
                {
                    label1:
                    matrix[i][j]=key[temp];
                    int ascii=key[temp];
                    while(verify[ascii-97]==0)
                    {
                        temp++;
                        goto label1;
                    }
                    verify[ascii-97]=0;
                    temp++;
                    continue;
                }
                while(verify[ptr]==0)
                {
                    ptr++;
                }
                char cur=ptr+97;
                matrix[i][j]=cur;
                verify[ptr]=0;
            }
        }
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    temp=0;
    for(int i=0;i<plaintext.size();i++)
    {
        if(plaintext[i]==' ')
        {
            continue;
        }
        temp++;
        tt+=plaintext[i];
        if(temp==2)
        {
            if(tt[0]==tt[1])
            {
                tt[1]='x';
                i--;
            }
            pairs.push_back(tt);
            temp=0;
            tt="";
        }

    }
    if(temp==1)
    {
        tt+='z';
        pairs.push_back(tt);
    }
    for(auto a:pairs)
    {
        int row1, col1, row2, col2;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(a[0]==matrix[i][j])
                {
                    row1=i;
                    col1=j;
                }
                if(a[1]==matrix[i][j])
                {
                    row2=i;
                    col2=j;
                }
            }
        }
        if(row1==row2)
        {
            string ctp;
            ctp+=matrix[row1][(col1+1)%5];
            ctp+=matrix[row2][(col2+1)%5];
            ciphertext.push_back(ctp);
        }
        else if(row1==row2)
        {
            string ctp;
            ctp+=matrix[(row1+1)%5][col1];
            ctp+=matrix[(row2+1)%5][col2];
            ciphertext.push_back(ctp);
        }
        else
        {
            string ctp;
            ctp+=matrix[row1][col2];
            ctp+=matrix[row2][col1];
            ciphertext.push_back(ctp); 
        }

    }
    cout<<endl<<"Encrypted Text is:";
    for(auto z:ciphertext)
    {
        cout<<z;
    }
    cout<<endl;
    return 0;
}