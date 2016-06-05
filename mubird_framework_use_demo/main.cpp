/*=============================================================================
 *
 *
 *    Author  : tensorchen
 *    Time    : 2016年05月24日
 *
 *
 *===========================================================================*/
#include <iostream>

#include <gflags/gflags.h>
#include <glog/logging.h>

#include <mubird/mubird.h>

DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german", "comma-separated list of languages to offer in the 'lang' menu");

extern void mubird();

int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    std::cout << FLAGS_big_menu << std::endl; 
    std::cout << FLAGS_languages << std::endl; 
    mubird();
    LOG(INFO) << "log test in mubird!";
}
