#include <iostream>
#include <windows.h>
#include <time.h>
#include <fstream>


using namespace std;


class assistant
{
public :
    void typing(string t);
    void speak(string s);
};

assistant a;


//---------------typing function--------------
void assistant::typing(string t)
{
     speak(t);//----------for speaking the text

     cout<<"\n\n";
  for (int i = 0; t[i] != '\0'; i++)
  {

    cout << t[i];
    Sleep(65);
  }

}



void assistant :: speak(string s)
{
  ofstream file;
  file.open("speak.vbs", ios::out);
  file << "dim s";
  file << "\nset s = createObject(\"sapi.spvoice\")";
  file << "\ns.speak \"" << s << "\"";
  file.close();
  system("start speak.vbs");
  Sleep(300);
}


void wishme()
{
      time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12)
        {
        a.typing("Good Morning Rituparna Mishra");

    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
        {
        a.typing("Good Afternoon Rituparna Mishra");



    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24)
        {
        a.typing("Good Evening Rituparna Mishra");



    }
}


void datetime()
     {

       time_t now = time(0);
       char *dt = ctime(&now);
       cout<<"\n\nThe date and time is "<< dt <<endl;

     }



int main()
{

    char ch[100];        //To take command from user
    char password[10];   //To take password


       cout<<endl;
       cout<<"###################################  VIRTUAL PERSONAL ASSISSTANT ########################################";




      do
        {

            cout<<endl<<endl<<"************************";
            a.typing("| ENTER THE PASSWORD TO CONFIRM YOU ARE RITUPARNA|");
            cout<<endl<<endl<<"************************"<<endl;
            gets(password);





            STARTUPINFO startInfo = {};
            PROCESS_INFORMATION processInfo = {};




          if (strcmp(password, "password")==0)
          {

              cout<<"************************"<<endl<<endl;

              wishme();
              do
              {
                   a.typing("How can I help you -- ");
                   gets(ch);

                   if(strcmp(ch, "what is the date and time") ==0 || strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0)
                          {
                            a.typing("Displaying date and time--");
                            cout<<endl;
                            datetime();
                          }

                   else if(strcmp(ch, "who are you")==0)
                          {
                             a.typing("I am a personal assistant created by  Rituparna Mishra");
                          }

                   else if(strcmp(ch, "hi") == 0 || strcmp(ch, "hello") == 0 )
                          {

                             a.typing( "Hello Rituparna.. ");
                             cout<<"\n\n";
                          }

                   else if(strcmp(ch, "how are you") == 0)
                          {
                             a.typing( "I am cool, Tell me what I can do for you ");
                             cout<<"\n\n";
                          }

                   else if(strcmp(ch, "open google")==0)
                          {
                             string s="https://www.google.co.in/";

                             a.typing( "opening google in chrome browser");
                             cout<<"\n\n";

                             ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
                          }

                   else if(strcmp(ch, "search in google")==0)
                          {
                              char text[100];
                              string res;
                              string g="https://www.google.com/search?q=";

                              a.typing( "Enter what do you want to search : ");
                              gets(text);

                              res=g+text;

                              a.typing( "searching in google");
                              cout<<"\n\n";

                              ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
                           }

                  else if(strcmp(ch, "open youtube")==0)

                          {
                              string n = "https://www.youtube.com/";

                              a.typing( "Opening youtube in chrome browser");
                              cout<<"\n\n";

                              ShellExecute(NULL,"open",n.c_str(),NULL,NULL,SW_SHOWNORMAL);

                           }


                  else if(strcmp(ch, "search in youtube")==0)
                           {
                               char text1[100];

                               a.typing( "Enter what do you want to search : ");
                               gets(text1);

                               string s;
                               string res1="https://www.youtube.com/results?search_query=";

                               s=res1+text1;

                               a.typing( "searching in youtube");
                               cout<<"\n\n";

                               ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
                           }



                  else if(strcmp(ch, "login gmail")==0)

                           {
                               string n = "https://www.gmail.com/";

                               a.typing( "Opening gmail login page in chrome browser");
                               cout<<"\n\n";

                               ShellExecute(NULL,"open",n.c_str(),NULL,NULL,SW_SHOWNORMAL);

                            }

                  else if(strcmp(ch, "open facebook")==0)

                           {
                               string n = "https://www.facebook.com/";

                               a.typing( "Opening facebook in chrome browser");
                               cout<<"\n\n";

                               ShellExecute(NULL,"open",n.c_str(),NULL,NULL,SW_SHOWNORMAL);

                            }


                  else if(strcmp(ch, "open instagram")==0)

                           {
                               string n = "https://www.instagram.com/?hl=en";

                               a.typing( "Opening instagram in chrome browser");
                               cout<<"\n\n";

                               ShellExecute(NULL,"open",n.c_str(),NULL,NULL,SW_SHOWNORMAL);

                            }


                  else if(strcmp(ch, "open amazon")==0)

                            {
                                string n = "https://www.amazon.in/";

                                a.typing( "Opening amazon in chrome browser");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open",n.c_str(),NULL,NULL,SW_SHOWNORMAL);

                            }

                   else if(strcmp(ch, "open code blocks")==0)
                            {
                                a.typing( "Opening code blocks");
                                cout<<"\n\n";

                                CreateProcess(TEXT("C:\\Program Files\\CodeBlocks\\codeblocks.exe"),NULL, NULL,NULL,FALSE,NULL,NULL, NULL, &startInfo, &processInfo);
                            }

                   else if(strcmp(ch, "open notepad")==0)
                            {
                                a.typing( "Opening notepad");
                                cout<<"\n\n";

                                CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL, NULL,NULL,FALSE,NULL,NULL, NULL, &startInfo, &processInfo);

                            }


                   else if(strcmp(ch, "open bsc syllabus")==0)
                            {

                                a.typing("Opening pdf");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open","C:\\Users\\Star\\Documents\\mbooks\\B.Sc Model Syllabus Comp Sc 2019.pdf",NULL,NULL,SW_SHOWNORMAL);
                            }

                   else if (strcmp(ch,"open image1")==0)
                            {

                                a.typing("Opening image");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open","C:\\Users\\Star\\Pictures\\Pics\\img.jpg",NULL,NULL,SW_SHOWNORMAL);
                            }

                   else if (strcmp(ch, "play pasoori")==0)
                            {
                                a.typing("Playing song pasoori");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open","C:\\Users\\Star\\Music\\Pasoori Shae Gill 128 Kbps.mp3",NULL,NULL,SW_SHOWNORMAL);

                            }


                   else if(strcmp(ch, "play alone")==0)
                            {

                                a.typing( "Playing alone in browser");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open","https://www.jiosaavn.com/song/alone/HQQkVBhdb2o",NULL,NULL,SW_SHOWNORMAL);
                            }


                   else if(strcmp(ch, "download song")==0)
                            {
                                char text[100];
                                string res1;
                                string e="https://pagalnew.com/search.php?find=";

                                a.typing( "Enter song name : ");
                                gets(text);

                                res1=e+text;

                                a.typing( "searching on browser for song");
                                cout<<"\n\n";

                                ShellExecute(NULL,"open",res1.c_str(),NULL,NULL,SW_SHOWNORMAL);

                             }


                    else if(strcmp(ch, " ")==0 )
                            {

                                a.typing( "Sorry, Invalid command");
                                cout<<"\n\n";
                            }


                    else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 )
                            {
                                system("cls");
                                a.typing( "Ok Bye.. ");
                                a.typing("Have a nice day");
                                exit(0);

                            }

                    else
                            {
                                a.typing( "Sorry, Invalid command");
                                cout<<"\n\n";
                            }


              }  while(1);
              }

              else
                {
                    system("cls");

                    cout<<"\t<###################################  VIRTUAL PERSONAL ASSISSTANT ########################################"<<endl;
                    cout << "************************" << endl;
                    a.typing("--Incorrect Password--");
                    a.typing("Please try again!!");
                    cout<< endl;
                    cout << "************************" << endl << endl;
                }
           } while(1);


          return 0;
}
