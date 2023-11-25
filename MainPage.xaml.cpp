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
}

void MainPage::Tool2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    // Create a new ContentDialog
    ContentDialog^ dialog = ref new ContentDialog();

    // Create a new StackPanel to hold the toggle switches
    StackPanel^ switchPanel = ref new StackPanel();
    switchPanel->Orientation = Orientation::Vertical;

    // Create a new ToggleSwitch
    ToggleSwitch^ toggleSwitch = ref new ToggleSwitch();
    toggleSwitch->Header = "Toggle Switch";
    toggleSwitch->OffContent = "Off";
    toggleSwitch->OnContent = "On";

    // Add the toggle switch to the switch panel
    switchPanel->Children->Append(toggleSwitch);

    // Create two more toggle switches with different headers
    ToggleSwitch^ toggleSwitch1 = ref new ToggleSwitch();
    toggleSwitch1->Header = "Toggle Switch 1";
    toggleSwitch1->OffContent = "Off";
    toggleSwitch1->OnContent = "On";

    ToggleSwitch^ toggleSwitch2 = ref new ToggleSwitch();
    toggleSwitch2->Header = "Toggle Switch 2";
    toggleSwitch2->OffContent = "Off";
    toggleSwitch2->OnContent = "On";

    // Add the toggle switches to the switch panel
    switchPanel->Children->Append(toggleSwitch1);
    switchPanel->Children->Append(toggleSwitch2);

    // Set the properties of the dialog
    dialog->Title = "Tool 2";
    dialog->Content = switchPanel; // Set the content to the switch panel
    dialog->CloseButtonText = "OK";

    // Show the dialog
    dialog->ShowAsync();
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
