#include<iostream> // Include input-output stream library
using namespace std;

int main()
{
    int quant; // Variable to store the quantity entered by the user
    int choice; // Variable to store the menu choice entered by the user
    
    // Initial Quantity (total quantity available in the hotel for each item)
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    
    //Food Items Sold (tracks how many items have been sold for each category)
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    // Total Price Collected (tracks total earnings for each category)
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    // Input the initial quantity available for each item in the hotel
    cout<<"\n\t -:Quantity of items we have:-"<<endl;

    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    
    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;
    
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    
    cout<<"\n Quantity of Shake: ";
    cin>>Qshake;
    
    cout<<"\n Quantity of Chicken-Roll: ";
    cin>>Qchicken;

    // Label to return to menu after each operation
    m:

    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1 Rooms";
    cout<<"\n2 Pasta";
    cout<<"\n3 Burger";
    cout<<"\n4 Noodles";
    cout<<"\n5 Shake";
    cout<<"\n6 Chicken-Roll";
    cout<<"\n7 Information regarding sales and collection";
    cout<<"\n8 Exit";

    cout<<"\n\n Please Enter your choice! :";
    cin>>choice;

    // Switch-case to handle user menu selection
    switch (choice)
    {
        case 1:
        // Handling room booking
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;

        // Check if requested quantity is available
        if (Qrooms-Srooms >=quant)
        {
            Srooms+=quant; // Update the rooms sold
            Total_rooms+= quant *1200;  // Calculate total price (1200 per room)
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! "<<endl;
        }

        else
        {
            // If requested quantity is not available
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel "<<endl;
        }
        break;

        case 2:
        // Handling pasta order
        cout<<"\n\n Enter Pasta Quantity: ";
        cin>>quant;

        if (Qpasta-Spasta >=quant)
        {
            Spasta+=quant; // Update pasta sold
            Total_pasta+= quant *250; // Calculate total price (250 per pasta)
            cout<<"\n\n\t\t"<<quant<<" Pasta is the order! "<<endl;
        }

        else
        {
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel "<<endl;
        }    
        break;

        case 3:
        // Handling burger order
        cout<<"\n\n Enter Burger Quantity: ";
        cin>>quant;

        if (Qburger-Sburger>=quant)
        {
            Sburger+=quant; // Update burgers sold
            Total_burger+=quant*100; // Calculate total price (100 per burger)
            cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";
        }

        else
        {
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel "<<endl;
        }    
        break;

        case 4:
        // Handling noodles order
        cout<<"\n\n Enter Noodles Quantity: ";
        cin>>quant;

        if (Qnoodles-Snoodles>=quant)
        {
            Snoodles+=quant; // Update noodles sold
            Total_noodles+=quant*140; //// Calculate total price (140 per noodles)
            cout<<"\n\n\t\t"<<quant<<" Noodles is the order! "<<endl;
        }

        else
        {
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel "<<endl;
        }
        break;

        case 5:
        // Handling shake order
        cout<<"\n\n Enter Shake Quantity: ";
        cin>>quant;

        if (Qshake-Sshake>=quant)
        {
            Sshake+=quant; // Update shakes sold
            Total_shake+=quant*120; // Calculate total price (120 per shake)
            cout<<"\n\n\t\t"<<quant<<" Shake is the order! "<<endl;
        }

        else
        {
            cout<<"\n\t Only "<<Qshake-Sshake<<" Shake remaining in hotel "<<endl;
        }    
        break;

        case 6:
        // Handling chicken-roll order
        cout<<"\n\n Enter Chicken-Roll Quantity: ";
        cin>>quant;

        if (Qchicken-Schicken>=quant)
        {
            Schicken+=quant; // Update chicken-rolls sold
            Total_chicken+=quant*150; // Calculate total price (150 per chicken-roll)
            cout<<"\n\n\t\t"<<quant<<" Chicken-Roll is the order! "<<endl;
        }

        else
        {
            cout<<"\n\t Only "<<Qchicken-Sburger<<" Chicken remaining in hotel "<<endl;
        }    
        break;

        case 7:
        // Display sales and collection summary
        cout<<"\n\t\tDetails of sales and collection ";

        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

        cout<<"\n\n Number of Pasta we had : "<<Qpasta;
        cout<<"\n\n Number of Pasta we sold "<<Spasta;
        cout<<"\n\n Remaining Pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pasta collection for the day : "<<Total_pasta;

        cout<<"\n\n Number of Burger we had : "<<Qburger;
        cout<<"\n\n Number of Burger we sold "<<Sburger;
        cout<<"\n\n Remaining Burger : "<<Qburger-Sburger;
        cout<<"\n\n Total Burger collection for the day : "<<Total_burger;

        cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining Noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodles collection for the day : "<<Total_noodles;

        cout<<"\n\n Number of Shake we had : "<<Qshake;
        cout<<"\n\n Number of Shake we sold "<<Sshake;
        cout<<"\n\n Remaining Shake : "<<Qshake-Sshake;
        cout<<"\n\n Total Shake collection for the day : "<<Total_shake;

        cout<<"\n\n Number of Chicken-Rolls we had : "<<Qchicken;
        cout<<"\n\n Number of Chicken-Rolls we sold "<<Schicken;
        cout<<"\n\n Remaining Chicken-Rolls : "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-Rolls collection for the day : "<<Total_chicken;

        cout<<"\n\n Total collection for the day is: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken<<endl;

        break;

        case 8:
        //Exit the program        
        cout<<"\nThank You for visiting us!"<<endl;
        exit(0);
        
        default:
        //Invalid input case
        cout<<"\n Please select the numbers mentioned above! "<<endl;
    }
    //Return to menu
    goto m;

    return 0;
}