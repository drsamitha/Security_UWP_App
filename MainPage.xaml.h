//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace App1
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
    public ref class MainPage sealed
    {
    private:
        Platform::String^ m_selectedItem;
        Windows::Storage::ApplicationDataContainer^ localSettings;
       

public:
    MainPage();


        void Tool1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void ComboBox_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
        void Tool3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool4_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

        void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs^ e)
        {
            // Save the state of your controls here
            localSettings->Values->Insert("selectedItem", dynamic_cast<Platform::Object^>(m_selectedItem));
        }

        void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs^ e)
        {
            // Restore the state of your controls here
            if (localSettings->Values->HasKey("selectedItem"))
            {
                m_selectedItem = dynamic_cast<Platform::String^>(localSettings->Values->Lookup("selectedItem"));
            }
        }
    };





}
