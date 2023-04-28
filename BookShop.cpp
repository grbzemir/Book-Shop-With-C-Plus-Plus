#include<iostream>
#include<conio.h>

using namespace std;

int ascii = 178;

int i = 0;

char ch = ascii;



struct BookShop

{

  int id;
  float ucret;
  string ad;
  string yazar;
  string yayinevi;


}B[25];

void Baslik()

{
    system("cls");
    cout<<"\n";

    for(int m=1;m<=26;m++)
    
    cout<<ch;

    cout<<"\n\n"<<ch<<ch ;"Kitap EKLEME EKRANI ";
    for(int m=1;m<=26;m++)
    cout<<ch;


}
void kitapEkle()

{

    system("cls");
    Baslik();
    cout<<"\n\n KITAP ID -> ";
    cin>>B[i].id;
    cout<<"\n\n KITAP ADI -> ";
    cin>>B[i].ad;
    cout<<"\n\n KITAP YAZARI -> ";
    cin>>B[i].yazar;
    cout<<"\n\n KITAP YAYINEVI -> ";
    cin>>B[i].yayinevi;
    cout<<"\n\n KITAP UCRETI -> ";
    cin>>B[i].ucret;
    i++;
    cout<<"\n\n\n"<<ch<<ch<<" Kitap basariyla eklendi! "<<ch<<ch;


}

void KitapAra()

{

    system("cls");
    Baslik();

    if(i==0)

    cout<<"\n\n"<<ch<<ch<<" Henuz Kitap Eklenmedi"<<ch<<ch;

    else 

    {

        int  t_id , found = 0;
        cout<<"\n\n"<<ch<<ch<<" Aramak istediginiz kitabin ID'sini giriniz: ";
        cin>>t_id;

        for(int a=0;a<i;a++)

        {

            if(t_id == B[a].id)

            {

               cout<<"\n\n"<<ch<<ch<<" Kitap ID: "<<B[a].id;
               cout<<"\n\n"<<ch<<ch<<" Kitap ADI: "<<B[a].ad;
               cout<<"\n\n"<<ch<<ch<<" Kitap YAZARI: "<<B[a].yazar;
               cout<<"\n\n"<<ch<<ch<<" Kitap YAYINEVI: "<<B[a].yayinevi;
               cout<<"\n\n"<<ch<<ch<<" Kitap UCRETI: "<<B[a].ucret;
               found++;


            }
        }

        if(found == 0)

        cout<<"\n\n"<<ch<<ch<<" Aradiginiz kitap bulunamadi! "<<ch<<ch;

        
    }

}

void Guncelle()

{

    system("cls");
    Baslik();

    if(i==0)

    cout<<"\n\n"<<ch<<ch<<" Henuz Kitap Guncellenemedi! "<<ch<<ch;

    else

    {

        int t_id , found = 0;
        cout<<"\n\n"<<ch<<ch<<" Guncellemek istediginiz kitabin ID'sini giriniz: ";
        cin>>t_id;

        for(int a=0;a<i;a++)

        {

            if(t_id == B[a].id)

            {

                
                cout<<"\n\n"<<ch<<ch<<" Kitap ADI: "<<B[a].ad;
                cout<<"\n\n"<<ch<<ch<<" Kitap YAZARI: "<<B[a].yazar;
                cout<<"\n\n"<<ch<<ch<<" Kitap YAYINEVI: "<<B[a].yayinevi;
                cout<<"\n\n"<<ch<<ch<<" Kitap UCRETI: "<<B[a].ucret;
                found++;
                break;

                cout<<"\n\n"<<ch<<ch<<" Yeni Kitap ID: ";
                cin>>B[a].id;
                cout<<"\n\n"<<ch<<ch<<" Yeni Kitap ADI: ";
                cin>>B[a].ad;
                cout<<"\n\n"<<ch<<ch<<" Yeni Kitap YAZARI: ";
                cin>>B[a].yazar;
                cout<<"\n\n"<<ch<<ch<<" Yeni Kitap YAYINEVI: ";
                cin>>B[a].yayinevi;
                cout<<"\n\n"<<ch<<ch<<" Yeni Kitap UCRETI: ";
                cin>>B[a].ucret;
                cout<<"\n\n"<<ch<<ch<<" Kitap basariyla guncellendi! "<<ch<<ch;

            }
        }

        if(found == 0)

        cout<<"\n\n"<<ch<<ch<<" Aradiginiz kitap bulunamadi! "<<ch<<ch;

    }

}

void Sil()

{

    system("cls");
    Baslik();

    if(i==0)

    cout<<"\n\n"<<ch<<ch<<" Henuz Kitap Silinemedi! "<<ch<<ch;

    else

    {

        int t_id , found = 0;
        cout<<"\n\n"<<ch<<ch<<" Silmek istediginiz kitabin ID'sini giriniz: ";
        cin>>t_id;

        for(int a=0;a<i;a++)

        {

            if(t_id == B[a].id)

            {
                
                for(int k=a;k<i;k++)

                {

                    B[k].id = B[k+1].id;
                    B[k].ad = B[k+1].ad;
                    B[k].yazar = B[k+1].yazar;
                    B[k].yayinevi = B[k+1].yayinevi;
                    B[k].ucret = B[k+1].ucret;

                }
                cout<<"\n\n "<<ch<<ch<<"Kitap Basariyla Silindi! ";
                found++;
                i--;
                break;

            }
        }

        if(found == 0)

        cout<<"\n\n"<<ch<<ch<<" Aradiginiz kitap bulunamadi! "<<ch<<ch;

    }

}

void KitaplariListele()

{
 

    system("cls");
    Baslik();

    if(i==0)

    cout<<"\n\n"<<ch<<ch<<" Henuz Kitap Eklenmedi! "<<ch<<ch;

    else

    {

        
        for(int a=0;a<i;a++)

        {

            cout<<"\n\n"<<ch<<ch<<" Kitap ID: "<<B[a].id;
            cout<<"\n\n"<<ch<<ch<<" Kitap ADI: "<<B[a].ad;
            cout<<"\n\n"<<ch<<ch<<" Kitap YAZARI: "<<B[a].yazar;
            cout<<"\n\n"<<ch<<ch<<" Kitap YAYINEVI: "<<B[a].yayinevi;
            cout<<"\n\n"<<ch<<ch<<" Kitap UCRETI: "<<B[a].ucret;
            for(int m=1;m<=26;m++)
            cout<<ch;


            }

         
        }

        

    }



    

int main()

{
    
    system("color 3F");
    p:
    system("cls");
    int secim;
    Baslik();

        cout<<"\n\n"<<ch<<ch<<" [1] Kitap EKLE ";
        cout<<"\n\n"<<ch<<ch<<" [2] Kitap ARA ";
        cout<<"\n\n"<<ch<<ch<<" [3] Kitap GUNCELLE ";
        cout<<"\n\n"<<ch<<ch<<" [4] Kitap SIL ";
        cout<<"\n\n"<<ch<<ch<<" [5] Kitap LISTELE ";
        cout<<"\n\n"<<ch<<ch<<" [6] CIKIS\n\n ";

        for(int i=1;i<=26;i++)

        cout<<ch;

        cout<<"\n\n"<<ch<<ch<<" Seciminiz: ";
        cin>>secim;

        switch(secim)

        {

            case 1:
            kitapEkle();
            break;

            case 2:
            KitapAra();
            break;

            case 3:
            Guncelle();
            break;

            case 4:
            Sil();
            break;

            case 5:
            KitaplariListele();
            break;

            case 6:
            exit(0);

            default:
            cout<<"\n\n"<<ch<<ch<<" Hatali secim yaptiniz! "<<ch<<ch;


        }
        
        getch();
        goto p;


    }
