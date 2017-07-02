/* This file is auto-generated by the leap second code generator
  (0.03).  This code generator comes with the DateTime.pm module
  distribution in the tools/ directory

  Generated by ./tools/leap_seconds_header.pl.

  Do not edit this file directly.
*/

#define SET_LEAP_SECONDS(utc_rd, ls)  \
{                                     \
  {                                   \
    if (utc_rd < 720075) {            \
      ls = 0;           \
    } else if (utc_rd >= 720075 && utc_rd < 720259) {  \
      ls = 1;                      \
    } else if (utc_rd >= 720259 && utc_rd < 720624) {  \
      ls = 2;                      \
    } else if (utc_rd >= 720624 && utc_rd < 720989) {  \
      ls = 3;                      \
    } else if (utc_rd >= 720989 && utc_rd < 721354) {  \
      ls = 4;                      \
    } else if (utc_rd >= 721354 && utc_rd < 721720) {  \
      ls = 5;                      \
    } else if (utc_rd >= 721720 && utc_rd < 722085) {  \
      ls = 6;                      \
    } else if (utc_rd >= 722085 && utc_rd < 722450) {  \
      ls = 7;                      \
    } else if (utc_rd >= 722450 && utc_rd < 722815) {  \
      ls = 8;                      \
    } else if (utc_rd >= 722815 && utc_rd < 723362) {  \
      ls = 9;                      \
    } else if (utc_rd >= 723362 && utc_rd < 723727) {  \
      ls = 10;                      \
    } else if (utc_rd >= 723727 && utc_rd < 724092) {  \
      ls = 11;                      \
    } else if (utc_rd >= 724092 && utc_rd < 724823) {  \
      ls = 12;                      \
    } else if (utc_rd >= 724823 && utc_rd < 725737) {  \
      ls = 13;                      \
    } else if (utc_rd >= 725737 && utc_rd < 726468) {  \
      ls = 14;                      \
    } else if (utc_rd >= 726468 && utc_rd < 726833) {  \
      ls = 15;                      \
    } else if (utc_rd >= 726833 && utc_rd < 727380) {  \
      ls = 16;                      \
    } else if (utc_rd >= 727380 && utc_rd < 727745) {  \
      ls = 17;                      \
    } else if (utc_rd >= 727745 && utc_rd < 728110) {  \
      ls = 18;                      \
    } else if (utc_rd >= 728110 && utc_rd < 728659) {  \
      ls = 19;                      \
    } else if (utc_rd >= 728659 && utc_rd < 729206) {  \
      ls = 20;                      \
    } else if (utc_rd >= 729206 && utc_rd < 729755) {  \
      ls = 21;                      \
    } else if (utc_rd >= 729755 && utc_rd < 732312) {  \
      ls = 22;                      \
    } else if (utc_rd >= 732312 && utc_rd < 733408) {  \
      ls = 23;                      \
    } else if (utc_rd >= 733408 && utc_rd < 734685) {  \
      ls = 24;                      \
    } else {                         \
      ls = 25;       \
    }                              \
  }                                \
}

#define SET_EXTRA_SECONDS(utc_rd, es)  \
{                                      \
  {                                    \
    es = 0;                            \
    switch (utc_rd) {                  \
      case 720074: es = 1; break;            \
      case 720258: es = 1; break;            \
      case 720623: es = 1; break;            \
      case 720988: es = 1; break;            \
      case 721353: es = 1; break;            \
      case 721719: es = 1; break;            \
      case 722084: es = 1; break;            \
      case 722449: es = 1; break;            \
      case 722814: es = 1; break;            \
      case 723361: es = 1; break;            \
      case 723726: es = 1; break;            \
      case 724091: es = 1; break;            \
      case 724822: es = 1; break;            \
      case 725736: es = 1; break;            \
      case 726467: es = 1; break;            \
      case 726832: es = 1; break;            \
      case 727379: es = 1; break;            \
      case 727744: es = 1; break;            \
      case 728109: es = 1; break;            \
      case 728658: es = 1; break;            \
      case 729205: es = 1; break;            \
      case 729754: es = 1; break;            \
      case 732311: es = 1; break;            \
      case 733407: es = 1; break;            \
      case 734684: es = 1; break;            \
    }                                  \
  }                                    \
}

#define SET_DAY_LENGTH(utc_rd, dl)     \
{                                      \
  {                                    \
    dl = 86400;                        \
    switch (utc_rd) {                  \
      case 720074: dl = 86400 + 1; break;    \
      case 720258: dl = 86400 + 1; break;    \
      case 720623: dl = 86400 + 1; break;    \
      case 720988: dl = 86400 + 1; break;    \
      case 721353: dl = 86400 + 1; break;    \
      case 721719: dl = 86400 + 1; break;    \
      case 722084: dl = 86400 + 1; break;    \
      case 722449: dl = 86400 + 1; break;    \
      case 722814: dl = 86400 + 1; break;    \
      case 723361: dl = 86400 + 1; break;    \
      case 723726: dl = 86400 + 1; break;    \
      case 724091: dl = 86400 + 1; break;    \
      case 724822: dl = 86400 + 1; break;    \
      case 725736: dl = 86400 + 1; break;    \
      case 726467: dl = 86400 + 1; break;    \
      case 726832: dl = 86400 + 1; break;    \
      case 727379: dl = 86400 + 1; break;    \
      case 727744: dl = 86400 + 1; break;    \
      case 728109: dl = 86400 + 1; break;    \
      case 728658: dl = 86400 + 1; break;    \
      case 729205: dl = 86400 + 1; break;    \
      case 729754: dl = 86400 + 1; break;    \
      case 732311: dl = 86400 + 1; break;    \
      case 733407: dl = 86400 + 1; break;    \
      case 734684: dl = 86400 + 1; break;    \
    }                                  \
  }                                    \
}
