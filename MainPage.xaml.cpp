//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"



using namespace App1;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
    InitializeComponent();

    localSettings = Windows::Storage::ApplicationData::Current->LocalSettings;
}

void MainPage::Tool1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Your code here for Tool 1
    // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new ToggleSwitch
    ToggleSwitch^ toggleSwitch = ref new ToggleSwitch();
    toggleSwitch->Header = "Toggle Switch";
    toggleSwitch->OffContent = "Off";
    toggleSwitch->OnContent = "On";

    // Set the properties of the dialog
    dialog->Title = "Tool 1";
    dialog->Content = "You clicked on Tool 1!";
    dialog->Content = toggleSwitch; // Set the content to the ToggleSwitch

    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();

    // Save the state of the ToggleSwitch
    bool m_toggleSwitchState = toggleSwitch->IsOn;
}

#include <fstream>
#include <string>

void blockIPsFromFile(const std::string& filename)
{
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line))
    {
        std::string command = "netsh advfirewall firewall add rule name=\"Block " + line + "\" dir=in interface=any action=block remoteip=" + line;
        system(command.c_str());
    }
}

void MainPage::Tool2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new ComboBox
    ComboBox^ comboBox = ref new ComboBox();
    comboBox->Items->Append("None");
    comboBox->Items->Append("Item 2");
    comboBox->Items->Append("Item 3");

    // Set the selected item to the stored item
    if (m_selectedItem != nullptr)
    {
        comboBox->SelectedItem = m_selectedItem;
    }

    // Set the properties of the dialog
    dialog->Title = "Tool 2";
    dialog->Content = comboBox; // Set the content to the ComboBox
    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();



    // Handle the selected item
    if (comboBox->SelectedItem != nullptr)
    {
        Platform::String^ selectedItem = safe_cast<Platform::String^>(comboBox->SelectedItem);

        if (selectedItem == "None")
        {
            // Code to make default IP rules
            #include <cstdlib>

            void resetIPRules();
            {
                system("netsh advfirewall reset");
            }


        }
        else if (selectedItem == "Item 2")
        {
            // Code to block IP from "ip_list_1.txt"
            blockIPsFromFile("ip_list_1.txt");
        }
        else if (selectedItem == "Item 3")
        {
            // Code to block IP from "ip_list_1.txt" and "ip_list_2.txt"
            blockIPsFromFile("ip_list_1.txt");
            blockIPsFromFile("ip_list_2.txt");
        }
    }
}

void MainPage::ComboBox_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
    ComboBox^ comboBox = safe_cast<ComboBox^>(sender);
    m_selectedItem = safe_cast<Platform::String^>(comboBox->SelectedItem);
}



void MainPage::Tool3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Your code here for Tool 3
        // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new ToggleSwitch
    ToggleSwitch^ toggleSwitch = ref new ToggleSwitch();
    toggleSwitch->Header = "Toggle Switch";
    toggleSwitch->OffContent = "Off";
    toggleSwitch->OnContent = "On";

    // Set the properties of the dialog
    dialog->Title = "Tool 3";
    dialog->Content = "You clicked on Tool 3!";
    dialog->Content = toggleSwitch; // Set the content to the ToggleSwitch

    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();
}

void MainPage::Tool4_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Your code here for Tool 4
        // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new ToggleSwitch
    ToggleSwitch^ toggleSwitch = ref new ToggleSwitch();
    toggleSwitch->Header = "Toggle Switch";
    toggleSwitch->OffContent = "Off";
    toggleSwitch->OnContent = "On";

    // Set the properties of the dialog
    dialog->Title = "Tool 4";
    dialog->Content = "You clicked on Tool 4!";
    dialog->Content = toggleSwitch; // Set the content to the ToggleSwitch

    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();
}

void MainPage::Tool5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Your code here for Tool 5
        // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new ToggleSwitch
    ToggleSwitch^ toggleSwitch = ref new ToggleSwitch();
    toggleSwitch->Header = "Toggle Switch";
    toggleSwitch->OffContent = "Off";
    toggleSwitch->OnContent = "On";

    // Set the properties of the dialog
    dialog->Title = "Tool 5";
    dialog->Content = "You clicked on Tool 5!";
    dialog->Content = toggleSwitch; // Set the content to the ToggleSwitch

    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();
}
