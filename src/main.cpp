#include "vlcpp/vlc.hpp"
#include <iostream>
#include <thread>
using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " <file to play> " << std::endl;
        return 1;
    }

    auto instance = VLC::Instance(0, nullptr);
#if LIBVLC_VVERSION_INT >= LIBVLC_VERSION(4, 0, 0, 0)
    auto media = VLC::Media(argv[1], VLC::Media::FromPath);
    auto mp = VLC::MediaPlayer(instance, media);
#else
    auto media = VLC::Media(instance, argv[1], VLC::Media::FromPath);
    auto mp = VLC::MediaPlayer(media);
#endif
    mp.play();
    while(1)
        std::this_thread::sleep_for( std::chrono::seconds( 10 ) );
#if LIBVLC_VERSION_INT >= LIBVLC_VERSION(4, 0, 0, 0)
    mp.stopAsync();
#else
    mp.stop();
#endif
}
