#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;
#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
   cout << "hola" << endl;

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());

  string filename("output.txt");
  fstream output_fstream;

  output_fstream.open(filename, std::ios_base::out);
  if (!output_fstream.is_open()) {
      cerr << "Failed to open " << filename << '\n';
  }
  else {
      output_fstream << "Maecenas accumsan purus id \norci gravida pellentesque." << endl;
      cerr << "Done Writing!" << endl;
  }


  return EXIT_SUCCESS;

  return 0;
}