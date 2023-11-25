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
    public:
        MainPage();
        void Tool1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool3_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool4_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void Tool5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };

}
