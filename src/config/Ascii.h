// Copyright (c) 2019, The CRYGCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                                                            \n"
" .d8888b.                    .d8888b.   .d8888b.           d8b          \n"
"d88P  Y88b                  d88P  Y88b d88P  Y88b          Y8P          \n"
"888    888                  888    888 888    888                       \n"
"888        888d888 888  888 888        888         .d88b.  888 88888b.  \n"
"888        888P\"   888  888 888  88888 888        d88\"\"88b 888 888 \"88b \n"
"888    888 888     888  888 888    888 888    888 888  888 888 888  888 \n"
"Y88b  d88P 888     Y88b 888 Y88b  d88P Y88b  d88P Y88..88P 888 888  888 \n"
" \"Y8888P\"  888      \"Y88888  \"Y8888P88  \"Y8888P\"   \"Y88P\"  888 888  888 \n"
"                        888                                             \n"
"                   Y8b d88P                                             \n"
"                    \"Y88P\"                                              \n";

const std::string nonWindowsAsciiArt = 
"\n                                                              \n"
" ██████╗██████╗ ██╗   ██╗ ██████╗  ██████╗ ██████╗ ██╗███╗   ██╗\n"
"██╔════╝██╔══██╗╚██╗ ██╔╝██╔════╝ ██╔════╝██╔═══██╗██║████╗  ██║\n"
"██║     ██████╔╝ ╚████╔╝ ██║  ███╗██║     ██║   ██║██║██╔██╗ ██║\n"
"██║     ██╔══██╗  ╚██╔╝  ██║   ██║██║     ██║   ██║██║██║╚██╗██║\n"
"╚██████╗██║  ██║   ██║   ╚██████╔╝╚██████╗╚██████╔╝██║██║ ╚████║\n"
" ╚═════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝  ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
