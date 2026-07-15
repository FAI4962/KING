# License: MSVC Proprietary
# The use of this compiler is only permitted for internal evaluation purposes and is otherwise governed by the MSVC License Agreement.
# See https://visualstudio.microsoft.com/license-terms/vs2022-ga-community/
$SG41485 DB     'FairusOwner2026', 00H
$SG41486 DB     '=======================================', 0aH, 00H
        ORG $+3
$SG41487 DB     '       FAIRUS AES-256 ENGINE           ', 0aH, 00H
        ORG $+3
$SG41488 DB     '=======================================', 0aH, 00H
        ORG $+3
$SG41489 DB     '1. Enkripsi (Target -> .Fairus)', 0aH, 00H
        ORG $+3
$SG41490 DB     '2. Dekripsi (.Fairus -> Normal)', 0aH, 00H
        ORG $+3
$SG41491 DB     'Pilih opsi (1-2): ', 00H
        ORG $+1
$SG41492 DB     'Masukkan nama file (misal: data.exe atau rahasia.txt): ', 00H
$SG41493 DB     'Masukkan Kunci Rahasia Pembuat: ', 00H
        ORG $+3
$SG41495 DB     0aH, '[!] AKSES DITOLAK! Kunci Salah.', 0aH, 00H
        ORG $+2
$SG41499 DB     '.Fairus', 00H
$SG41502 DB     0aH, 00H
        ORG $+2
$SG41503 DB     0aH, '[Sukses] File diacak total menjadi: ', 00H
        ORG $+2
$SG41504 DB     0aH, '[Gagal] File tidak ditemukan!', 0aH, 00H
$SG41506 DB     '.Fairus', 00H
$SG41508 DB     0aH, '[Gagal] Ini bukan berkas berekstensi .Fairus', 0aH, 00H
        ORG $+1
$SG41512 DB     0aH, 00H
        ORG $+2
$SG41513 DB     0aH, '[Sukses] Berkas dikembalikan normal ke: ', 00H
        ORG $+2
$SG41514 DB     0aH, '[Gagal] Proses dekripsi gagal.', 0aH, 00H
        ORG $+3
unsigned char const * const sbox DB 063H                                  ; sbox
        DB      07cH
        DB      077H
        DB      07bH
        DB      0f2H
        DB      06bH
        DB      06fH
        DB      0c5H
        DB      030H
        DB      01H
        DB      067H
        DB      02bH
        DB      0feH
        DB      0d7H
        DB      0abH
        DB      076H
        DB      0caH
        DB      082H
        DB      0c9H
        DB      07dH
        DB      0faH
        DB      059H
        DB      047H
        DB      0f0H
        DB      0adH
        DB      0d4H
        DB      0a2H
        DB      0afH
        DB      09cH
        DB      0a4H
        DB      072H
        DB      0c0H
        DB      0b7H
        DB      0fdH
        DB      093H
        DB      026H
        DB      036H
        DB      03fH
        DB      0f7H
        DB      0ccH
        DB      034H
        DB      0a5H
        DB      0e5H
        DB      0f1H
        DB      071H
        DB      0d8H
        DB      031H
        DB      015H
        DB      04H
        DB      0c7H
        DB      023H
        DB      0c3H
        DB      018H
        DB      096H
        DB      05H
        DB      09aH
        DB      07H
        DB      012H
        DB      080H
        DB      0e2H
        DB      0ebH
        DB      027H
        DB      0b2H
        DB      075H
        DB      09H
        DB      083H
        DB      02cH
        DB      01aH
        DB      01bH
        DB      06eH
        DB      05aH
        DB      0a0H
        DB      052H
        DB      03bH
        DB      0d6H
        DB      0b3H
        DB      029H
        DB      0e3H
        DB      02fH
        DB      084H
        DB      053H
        DB      0d1H
        DB      00H
        DB      0edH
        DB      020H
        DB      0fcH
        DB      0b1H
        DB      05bH
        DB      06aH
        DB      0cbH
        DB      0beH
        DB      039H
        DB      04aH
        DB      04cH
        DB      058H
        DB      0cfH
        DB      0d0H
        DB      0efH
        DB      0aaH
        DB      0fbH
        DB      043H
        DB      04dH
        DB      033H
        DB      085H
        DB      045H
        DB      0f9H
        DB      02H
        DB      07fH
        DB      050H
        DB      03cH
        DB      09fH
        DB      0a8H
        DB      051H
        DB      0a3H
        DB      040H
        DB      08fH
        DB      092H
        DB      09dH
        DB      038H
        DB      0f5H
        DB      0bcH
        DB      0b6H
        DB      0daH
        DB      021H
        DB      010H
        DB      0ffH
        DB      0f3H
        DB      0d2H
        DB      0cdH
        DB      0cH
        DB      013H
        DB      0ecH
        DB      05fH
        DB      097H
        DB      044H
        DB      017H
        DB      0c4H
        DB      0a7H
        DB      07eH
        DB      03dH
        DB      064H
        DB      05dH
        DB      019H
        DB      073H
        DB      060H
        DB      081H
        DB      04fH
        DB      0dcH
        DB      022H
        DB      02aH
        DB      090H
        DB      088H
        DB      046H
        DB      0eeH
        DB      0b8H
        DB      014H
        DB      0deH
        DB      05eH
        DB      0bH
        DB      0dbH
        DB      0e0H
        DB      032H
        DB      03aH
        DB      0aH
        DB      049H
        DB      06H
        DB      024H
        DB      05cH
        DB      0c2H
        DB      0d3H
        DB      0acH
        DB      062H
        DB      091H
        DB      095H
        DB      0e4H
        DB      079H
        DB      0e7H
        DB      0c8H
        DB      037H
        DB      06dH
        DB      08dH
        DB      0d5H
        DB      04eH
        DB      0a9H
        DB      06cH
        DB      056H
        DB      0f4H
        DB      0eaH
        DB      065H
        DB      07aH
        DB      0aeH
        DB      08H
        DB      0baH
        DB      078H
        DB      025H
        DB      02eH
        DB      01cH
        DB      0a6H
        DB      0b4H
        DB      0c6H
        DB      0e8H
        DB      0ddH
        DB      074H
        DB      01fH
        DB      04bH
        DB      0bdH
        DB      08bH
        DB      08aH
        DB      070H
        DB      03eH
        DB      0b5H
        DB      066H
        DB      048H
        DB      03H
        DB      0f6H
        DB      0eH
        DB      061H
        DB      035H
        DB      057H
        DB      0b9H
        DB      086H
        DB      0c1H
        DB      01dH
        DB      09eH
        DB      0e1H
        DB      0f8H
        DB      098H
        DB      011H
        DB      069H
        DB      0d9H
        DB      08eH
        DB      094H
        DB      09bH
        DB      01eH
        DB      087H
        DB      0e9H
        DB      0ceH
        DB      055H
        DB      028H
        DB      0dfH
        DB      08cH
        DB      0a1H
        DB      089H
        DB      0dH
        DB      0bfH
        DB      0e6H
        DB      042H
        DB      068H
        DB      041H
        DB      099H
        DB      02dH
        DB      0fH
        DB      0b0H
        DB      054H
        DB      0bbH
        DB      016H
unsigned char const * const rsbox DB 052H                             ; rsbox
        DB      09H
        DB      06aH
        DB      0d5H
        DB      030H
        DB      036H
        DB      0a5H
        DB      038H
        DB      0bfH
        DB      040H
        DB      0a3H
        DB      09eH
        DB      081H
        DB      0f3H
        DB      0d7H
        DB      0fbH
        DB      07cH
        DB      0e3H
        DB      039H
        DB      082H
        DB      09bH
        DB      02fH
        DB      0ffH
        DB      087H
        DB      034H
        DB      08eH
        DB      043H
        DB      044H
        DB      0c4H
        DB      0deH
        DB      0e9H
        DB      0cbH
        DB      054H
        DB      07bH
        DB      094H
        DB      032H
        DB      0a6H
        DB      0c2H
        DB      023H
        DB      03dH
        DB      0eeH
        DB      04cH
        DB      095H
        DB      0bH
        DB      042H
        DB      0faH
        DB      0c3H
        DB      04eH
        DB      08H
        DB      02eH
        DB      0a1H
        DB      066H
        DB      028H
        DB      0d9H
        DB      024H
        DB      0b2H
        DB      076H
        DB      05bH
        DB      0a2H
        DB      049H
        DB      06dH
        DB      08bH
        DB      0d1H
        DB      025H
        DB      072H
        DB      0f8H
        DB      0f6H
        DB      064H
        DB      086H
        DB      068H
        DB      098H
        DB      016H
        DB      0d4H
        DB      0a4H
        DB      05cH
        DB      0ccH
        DB      05dH
        DB      065H
        DB      0b6H
        DB      092H
        DB      06cH
        DB      070H
        DB      048H
        DB      050H
        DB      0fdH
        DB      0edH
        DB      0b9H
        DB      0daH
        DB      05eH
        DB      015H
        DB      046H
        DB      057H
        DB      0a7H
        DB      08dH
        DB      09dH
        DB      084H
        DB      090H
        DB      0d8H
        DB      0abH
        DB      00H
        DB      08cH
        DB      0bcH
        DB      0d3H
        DB      0aH
        DB      0f7H
        DB      0e4H
        DB      058H
        DB      05H
        DB      0b8H
        DB      0b3H
        DB      045H
        DB      06H
        DB      0d0H
        DB      02cH
        DB      01eH
        DB      08fH
        DB      0caH
        DB      03fH
        DB      0fH
        DB      02H
        DB      0c1H
        DB      0afH
        DB      0bdH
        DB      03H
        DB      01H
        DB      013H
        DB      08aH
        DB      06bH
        DB      03aH
        DB      091H
        DB      011H
        DB      041H
        DB      04fH
        DB      067H
        DB      0dcH
        DB      0eaH
        DB      097H
        DB      0f2H
        DB      0cfH
        DB      0ceH
        DB      0f0H
        DB      0b4H
        DB      0e6H
        DB      073H
        DB      096H
        DB      0acH
        DB      074H
        DB      022H
        DB      0e7H
        DB      0adH
        DB      035H
        DB      085H
        DB      0e2H
        DB      0f9H
        DB      037H
        DB      0e8H
        DB      01cH
        DB      075H
        DB      0dfH
        DB      06eH
        DB      047H
        DB      0f1H
        DB      01aH
        DB      071H
        DB      01dH
        DB      029H
        DB      0c5H
        DB      089H
        DB      06fH
        DB      0b7H
        DB      062H
        DB      0eH
        DB      0aaH
        DB      018H
        DB      0beH
        DB      01bH
        DB      0fcH
        DB      056H
        DB      03eH
        DB      04bH
        DB      0c6H
        DB      0d2H
        DB      079H
        DB      020H
        DB      09aH
        DB      0dbH
        DB      0c0H
        DB      0feH
        DB      078H
        DB      0cdH
        DB      05aH
        DB      0f4H
        DB      01fH
        DB      0ddH
        DB      0a8H
        DB      033H
        DB      088H
        DB      07H
        DB      0c7H
        DB      031H
        DB      0b1H
        DB      012H
        DB      010H
        DB      059H
        DB      027H
        DB      080H
        DB      0ecH
        DB      05fH
        DB      060H
        DB      051H
        DB      07fH
        DB      0a9H
        DB      019H
        DB      0b5H
        DB      04aH
        DB      0dH
        DB      02dH
        DB      0e5H
        DB      07aH
        DB      09fH
        DB      093H
        DB      0c9H
        DB      09cH
        DB      0efH
        DB      0a0H
        DB      0e0H
        DB      03bH
        DB      04dH
        DB      0aeH
        DB      02aH
        DB      0f5H
        DB      0b0H
        DB      0c8H
        DB      0ebH
        DB      0bbH
        DB      03cH
        DB      083H
        DB      053H
        DB      099H
        DB      061H
        DB      017H
        DB      02bH
        DB      04H
        DB      07eH
        DB      0baH
        DB      077H
        DB      0d6H
        DB      026H
        DB      0e1H
        DB      069H
        DB      014H
        DB      063H
        DB      055H
        DB      021H
        DB      0cH
        DB      07dH
unsigned char const * const Rcon DB 00H                                 ; Rcon
        DB      01H
        DB      02H
        DB      04H
        DB      08H
        DB      010H
        DB      020H
        DB      040H
        DB      080H
        DB      01bH
        DB      036H
std::basic_ostream<char,std::char_traits<char> > `RTTI Type Descriptor' DD FLAT:const type_info::`vftable' ; std::basic_ostream<char,std::char_traits<char> > `RTTI Type Descriptor'
        DB      '.?AV?$basic_ostream@DU?$char_traits@D@std@@@std@@', 00H
std::basic_ofstream<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)' DD FLAT:std::basic_ofstream<char,std::char_traits<char> > `RTTI Type Descriptor' ; std::basic_ofstream<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)'
const std::basic_ofstream<char,std::char_traits<char> >::`RTTI Complete Object Locator' DD 00H ; std::basic_ofstream<char,std::char_traits<char> >::`RTTI Complete Object Locator'
std::_Iosb<int>::`RTTI Base Class Descriptor at (0,-1,0,64)' DD FLAT:std::_Iosb<int> `RTTI Type Descriptor' ; std::_Iosb<int>::`RTTI Base Class Descriptor at (0,-1,0,64)'
std::_Iosb<int> `RTTI Type Descriptor' DD FLAT:const type_info::`vftable'    ; std::_Iosb<int> `RTTI Type Descriptor'
        DB      '.?AV?$_Iosb@H@std@@', 00H
std::basic_ios<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)' DD FLAT:std::basic_ios<char,std::char_traits<char> > `RTTI Type Descriptor' ; std::basic_ios<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)'
std::basic_ios<char,std::char_traits<char> > `RTTI Type Descriptor' DD FLAT:const type_info::`vftable' ; std::basic_ios<char,std::char_traits<char> > `RTTI Type Descriptor'
        DB      '.?AV?$basic_ios@DU?$char_traits@D@std@@@std@@', 00H
std::basic_istream<char,std::char_traits<char> > `RTTI Type Descriptor' DD FLAT:const type_info::`vftable' ; std::basic_istream<char,std::char_traits<char> > `RTTI Type Descriptor'
        DB      '.?AV?$basic_istream@DU?$char_traits@D@std@@@std@@', 00H
std::basic_ifstream<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)' DD FLAT:std::basic_ifstream<char,std::char_traits<char> > `RTTI Type Descriptor' ; std::basic_ifstream<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)'
const std::basic_ifstream<char,std::char_traits<char> >::`RTTI Complete Object Locator' DD 00H ; std::basic_ifstream<char,std::char_traits<char> >::`RTTI Complete Object Locator'
std::basic_streambuf<char,std::char_traits<char> > `RTTI Type Descriptor' DD FLAT:const type_info::`vftable' ; std::basic_streambuf<char,std::char_traits<char> > `RTTI Type Descriptor'
        DB      '.?AV?$basic_streambuf@DU?$char_traits@D@std@@@std@@', 00H
std::basic_filebuf<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)' DD FLAT:std::basic_filebuf<char,std::char_traits<char> > `RTTI Type Descriptor' ; std::basic_filebuf<char,std::char_traits<char> >::`RTTI Base Class Descriptor at (0,-1,0,64)'
const std::basic_filebuf<char,std::char_traits<char> >::`RTTI Complete Object Locator' DD 00H ; std::basic_filebuf<char,std::char_traits<char> >::`RTTI Complete Object Locator'
__ehfuncinfo$_main DD 019930522H
__ehfuncinfo$bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool) DD 019930522H

_j$1 = -16                                          ; size = 4
_i$2 = -12                                          ; size = 4
_temp$ = -8                                   ; size = 4
_t$3 = -1                                         ; size = 1
_key$ = 8                                         ; size = 4
_roundKeys$ = 12                                        ; size = 4
void KeyExpansion(unsigned char const *,unsigned char *) PROC               ; KeyExpansion
        push    ebp
        mov     ebp, esp
        sub     esp, 16                             ; 00000010H
        push    32                                  ; 00000020H
        mov     eax, DWORD PTR _key$[ebp]
        push    eax
        mov     ecx, DWORD PTR _roundKeys$[ebp]
        push    ecx
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        mov     DWORD PTR _i$2[ebp], 32             ; 00000020H
        jmp     SHORT $LN4@KeyExpansi
$LN2@KeyExpansi:
        mov     edx, DWORD PTR _i$2[ebp]
        add     edx, 4
        mov     DWORD PTR _i$2[ebp], edx
$LN4@KeyExpansi:
        cmp     DWORD PTR _i$2[ebp], 240      ; 000000f0H
        jge     $LN3@KeyExpansi
        push    4
        mov     eax, DWORD PTR _i$2[ebp]
        mov     ecx, DWORD PTR _roundKeys$[ebp]
        lea     edx, DWORD PTR [ecx+eax-4]
        push    edx
        lea     eax, DWORD PTR _temp$[ebp]
        push    eax
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        mov     ecx, DWORD PTR _i$2[ebp]
        and     ecx, -2147483617              ; 8000001fH
        jns     SHORT $LN12@KeyExpansi
        dec     ecx
        or      ecx, -32                            ; ffffffe0H
        inc     ecx
$LN12@KeyExpansi:
        test    ecx, ecx
        jne     $LN8@KeyExpansi
        mov     edx, 1
        imul    eax, edx, 0
        mov     cl, BYTE PTR _temp$[ebp+eax]
        mov     BYTE PTR _t$3[ebp], cl
        mov     edx, 1
        shl     edx, 0
        movzx   eax, BYTE PTR _temp$[ebp+edx]
        movzx   ecx, BYTE PTR unsigned char const * const sbox[eax]
        mov     eax, DWORD PTR _i$2[ebp]
        cdq
        and     edx, 31                             ; 0000001fH
        add     eax, edx
        sar     eax, 5
        movzx   edx, BYTE PTR unsigned char const * const Rcon[eax]
        xor     ecx, edx
        mov     eax, 1
        imul    edx, eax, 0
        mov     BYTE PTR _temp$[ebp+edx], cl
        mov     eax, 1
        shl     eax, 1
        movzx   ecx, BYTE PTR _temp$[ebp+eax]
        mov     edx, 1
        shl     edx, 0
        mov     al, BYTE PTR unsigned char const * const sbox[ecx]
        mov     BYTE PTR _temp$[ebp+edx], al
        mov     ecx, 1
        imul    edx, ecx, 3
        movzx   eax, BYTE PTR _temp$[ebp+edx]
        mov     ecx, 1
        shl     ecx, 1
        mov     dl, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR _temp$[ebp+ecx], dl
        movzx   eax, BYTE PTR _t$3[ebp]
        mov     ecx, 1
        imul    edx, ecx, 3
        mov     al, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR _temp$[ebp+edx], al
        jmp     $LN10@KeyExpansi
$LN8@KeyExpansi:
        mov     ecx, DWORD PTR _i$2[ebp]
        and     ecx, -2147483617              ; 8000001fH
        jns     SHORT $LN13@KeyExpansi
        dec     ecx
        or      ecx, -32                            ; ffffffe0H
        inc     ecx
$LN13@KeyExpansi:
        cmp     ecx, 16                             ; 00000010H
        jne     SHORT $LN10@KeyExpansi
        mov     edx, 1
        imul    eax, edx, 0
        movzx   ecx, BYTE PTR _temp$[ebp+eax]
        mov     edx, 1
        imul    eax, edx, 0
        mov     cl, BYTE PTR unsigned char const * const sbox[ecx]
        mov     BYTE PTR _temp$[ebp+eax], cl
        mov     edx, 1
        shl     edx, 0
        movzx   eax, BYTE PTR _temp$[ebp+edx]
        mov     ecx, 1
        shl     ecx, 0
        mov     dl, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR _temp$[ebp+ecx], dl
        mov     eax, 1
        shl     eax, 1
        movzx   ecx, BYTE PTR _temp$[ebp+eax]
        mov     edx, 1
        shl     edx, 1
        mov     al, BYTE PTR unsigned char const * const sbox[ecx]
        mov     BYTE PTR _temp$[ebp+edx], al
        mov     ecx, 1
        imul    edx, ecx, 3
        movzx   eax, BYTE PTR _temp$[ebp+edx]
        mov     ecx, 1
        imul    edx, ecx, 3
        mov     al, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR _temp$[ebp+edx], al
$LN10@KeyExpansi:
        mov     DWORD PTR _j$1[ebp], 0
        jmp     SHORT $LN7@KeyExpansi
$LN5@KeyExpansi:
        mov     ecx, DWORD PTR _j$1[ebp]
        add     ecx, 1
        mov     DWORD PTR _j$1[ebp], ecx
$LN7@KeyExpansi:
        cmp     DWORD PTR _j$1[ebp], 4
        jge     SHORT $LN6@KeyExpansi
        mov     edx, DWORD PTR _j$1[ebp]
        mov     eax, DWORD PTR _i$2[ebp]
        lea     ecx, DWORD PTR [eax+edx-32]
        mov     edx, DWORD PTR _roundKeys$[ebp]
        movzx   eax, BYTE PTR [edx+ecx]
        mov     ecx, DWORD PTR _j$1[ebp]
        movzx   edx, BYTE PTR _temp$[ebp+ecx]
        xor     eax, edx
        mov     ecx, DWORD PTR _i$2[ebp]
        add     ecx, DWORD PTR _j$1[ebp]
        mov     edx, DWORD PTR _roundKeys$[ebp]
        mov     BYTE PTR [edx+ecx], al
        jmp     SHORT $LN5@KeyExpansi
$LN6@KeyExpansi:
        jmp     $LN2@KeyExpansi
$LN3@KeyExpansi:
        mov     esp, ebp
        pop     ebp
        ret     0
void KeyExpansion(unsigned char const *,unsigned char *) ENDP               ; KeyExpansion

_round$1 = -40                                      ; size = 4
_i$2 = -36                                          ; size = 4
_i$3 = -32                                          ; size = 4
_i$4 = -28                                          ; size = 4
_i$5 = -24                                          ; size = 4
_i$6 = -20                                          ; size = 4
_i$7 = -16                                          ; size = 4
_idx$8 = -12                                            ; size = 4
_t$ = -6                                                ; size = 1
_d$9 = -5                                         ; size = 1
_c$10 = -4                                          ; size = 1
_b$11 = -3                                          ; size = 1
_a$12 = -2                                          ; size = 1
_t$13 = -1                                          ; size = 1
_state$ = 8                                   ; size = 4
_roundKeys$ = 12                                        ; size = 4
void Cipher(unsigned char *,unsigned char const *) PROC                         ; Cipher
        push    ebp
        mov     ebp, esp
        sub     esp, 40                             ; 00000028H
        push    esi
        mov     DWORD PTR _i$7[ebp], 0
        jmp     SHORT $LN4@Cipher
$LN2@Cipher:
        mov     eax, DWORD PTR _i$7[ebp]
        add     eax, 1
        mov     DWORD PTR _i$7[ebp], eax
$LN4@Cipher:
        cmp     DWORD PTR _i$7[ebp], 16             ; 00000010H
        jge     SHORT $LN3@Cipher
        mov     ecx, DWORD PTR _roundKeys$[ebp]
        add     ecx, DWORD PTR _i$7[ebp]
        movzx   edx, BYTE PTR [ecx]
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$7[ebp]
        movzx   ecx, BYTE PTR [eax]
        xor     ecx, edx
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$7[ebp]
        mov     BYTE PTR [edx], cl
        jmp     SHORT $LN2@Cipher
$LN3@Cipher:
        mov     DWORD PTR _round$1[ebp], 1
        jmp     SHORT $LN7@Cipher
$LN5@Cipher:
        mov     eax, DWORD PTR _round$1[ebp]
        add     eax, 1
        mov     DWORD PTR _round$1[ebp], eax
$LN7@Cipher:
        cmp     DWORD PTR _round$1[ebp], 14             ; 0000000eH
        jge     $LN6@Cipher
        mov     DWORD PTR _i$4[ebp], 0
        jmp     SHORT $LN10@Cipher
$LN8@Cipher:
        mov     ecx, DWORD PTR _i$4[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$4[ebp], ecx
$LN10@Cipher:
        cmp     DWORD PTR _i$4[ebp], 16             ; 00000010H
        jge     SHORT $LN9@Cipher
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$4[ebp]
        movzx   eax, BYTE PTR [edx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$4[ebp]
        mov     dl, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR [ecx], dl
        jmp     SHORT $LN8@Cipher
$LN9@Cipher:
        mov     eax, 1
        shl     eax, 0
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$13[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 5
        mov     edx, 1
        shl     edx, 0
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 9
        mov     ecx, 1
        imul    edx, ecx, 5
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 13
        mov     eax, 1
        imul    ecx, eax, 9
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 13
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$13[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        shl     ecx, 1
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [edx+ecx]
        mov     BYTE PTR _t$13[ebp], al
        mov     ecx, 1
        imul    edx, ecx, 10
        mov     eax, 1
        shl     eax, 1
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [ecx+eax], dl
        mov     eax, 1
        imul    ecx, eax, 10
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$13[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [eax+edx]
        mov     BYTE PTR _t$13[ebp], cl
        mov     edx, 1
        imul    eax, edx, 14
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 14
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$13[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 3
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$13[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 15
        mov     edx, 1
        imul    eax, edx, 3
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 11
        mov     ecx, 1
        imul    edx, ecx, 15
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 7
        mov     eax, 1
        imul    ecx, eax, 11
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 7
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$13[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     DWORD PTR _i$2[ebp], 0
        jmp     SHORT $LN13@Cipher
$LN11@Cipher:
        mov     ecx, DWORD PTR _i$2[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$2[ebp], ecx
$LN13@Cipher:
        cmp     DWORD PTR _i$2[ebp], 4
        jge     $LN12@Cipher
        mov     edx, DWORD PTR _i$2[ebp]
        shl     edx, 2
        mov     DWORD PTR _idx$8[ebp], edx
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     cl, BYTE PTR [eax]
        mov     BYTE PTR _a$12[ebp], cl
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _idx$8[ebp]
        mov     al, BYTE PTR [edx+1]
        mov     BYTE PTR _b$11[ebp], al
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _idx$8[ebp]
        mov     dl, BYTE PTR [ecx+2]
        mov     BYTE PTR _c$10[ebp], dl
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     cl, BYTE PTR [eax+3]
        mov     BYTE PTR _d$9[ebp], cl
        movzx   edx, BYTE PTR _a$12[ebp]
        shl     edx, 1
        movzx   eax, BYTE PTR _a$12[ebp]
        sar     eax, 7
        and     eax, 1
        imul    ecx, eax, 27
        xor     edx, ecx
        movzx   eax, BYTE PTR _b$11[ebp]
        movzx   ecx, BYTE PTR _b$11[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        xor     edx, eax
        movzx   eax, BYTE PTR _c$10[ebp]
        xor     edx, eax
        movzx   ecx, BYTE PTR _d$9[ebp]
        xor     edx, ecx
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [eax], dl
        movzx   ecx, BYTE PTR _a$12[ebp]
        movzx   edx, BYTE PTR _b$11[ebp]
        shl     edx, 1
        movzx   eax, BYTE PTR _b$11[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     edx, eax
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$10[ebp]
        movzx   eax, BYTE PTR _c$10[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _c$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        xor     edx, eax
        xor     ecx, edx
        movzx   edx, BYTE PTR _d$9[ebp]
        xor     ecx, edx
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [eax+1], cl
        movzx   ecx, BYTE PTR _a$12[ebp]
        movzx   edx, BYTE PTR _b$11[ebp]
        xor     ecx, edx
        movzx   eax, BYTE PTR _c$10[ebp]
        shl     eax, 1
        movzx   edx, BYTE PTR _c$10[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        xor     ecx, eax
        movzx   eax, BYTE PTR _d$9[ebp]
        movzx   edx, BYTE PTR _d$9[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _d$9[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     eax, edx
        xor     ecx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [eax+2], cl
        movzx   ecx, BYTE PTR _a$12[ebp]
        movzx   edx, BYTE PTR _a$12[ebp]
        shl     edx, 1
        movzx   eax, BYTE PTR _a$12[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     edx, eax
        xor     ecx, edx
        movzx   edx, BYTE PTR _b$11[ebp]
        xor     ecx, edx
        movzx   eax, BYTE PTR _c$10[ebp]
        xor     ecx, eax
        movzx   edx, BYTE PTR _d$9[ebp]
        shl     edx, 1
        movzx   eax, BYTE PTR _d$9[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     edx, eax
        xor     ecx, edx
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [edx+3], cl
        jmp     $LN11@Cipher
$LN12@Cipher:
        mov     DWORD PTR _i$6[ebp], 0
        jmp     SHORT $LN16@Cipher
$LN14@Cipher:
        mov     eax, DWORD PTR _i$6[ebp]
        add     eax, 1
        mov     DWORD PTR _i$6[ebp], eax
$LN16@Cipher:
        cmp     DWORD PTR _i$6[ebp], 16             ; 00000010H
        jge     SHORT $LN15@Cipher
        mov     ecx, DWORD PTR _round$1[ebp]
        shl     ecx, 4
        add     ecx, DWORD PTR _i$6[ebp]
        mov     edx, DWORD PTR _roundKeys$[ebp]
        movzx   eax, BYTE PTR [edx+ecx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$6[ebp]
        movzx   edx, BYTE PTR [ecx]
        xor     edx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$6[ebp]
        mov     BYTE PTR [eax], dl
        jmp     SHORT $LN14@Cipher
$LN15@Cipher:
        jmp     $LN5@Cipher
$LN6@Cipher:
        mov     DWORD PTR _i$3[ebp], 0
        jmp     SHORT $LN19@Cipher
$LN17@Cipher:
        mov     ecx, DWORD PTR _i$3[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$3[ebp], ecx
$LN19@Cipher:
        cmp     DWORD PTR _i$3[ebp], 16             ; 00000010H
        jge     SHORT $LN18@Cipher
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$3[ebp]
        movzx   eax, BYTE PTR [edx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$3[ebp]
        mov     dl, BYTE PTR unsigned char const * const sbox[eax]
        mov     BYTE PTR [ecx], dl
        jmp     SHORT $LN17@Cipher
$LN18@Cipher:
        mov     eax, 1
        shl     eax, 0
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 5
        mov     edx, 1
        shl     edx, 0
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 9
        mov     ecx, 1
        imul    edx, ecx, 5
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 13
        mov     eax, 1
        imul    ecx, eax, 9
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 13
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        shl     ecx, 1
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [edx+ecx]
        mov     BYTE PTR _t$[ebp], al
        mov     ecx, 1
        imul    edx, ecx, 10
        mov     eax, 1
        shl     eax, 1
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [ecx+eax], dl
        mov     eax, 1
        imul    ecx, eax, 10
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [eax+edx]
        mov     BYTE PTR _t$[ebp], cl
        mov     edx, 1
        imul    eax, edx, 14
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 14
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 3
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 15
        mov     edx, 1
        imul    eax, edx, 3
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 11
        mov     ecx, 1
        imul    edx, ecx, 15
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 7
        mov     eax, 1
        imul    ecx, eax, 11
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 7
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     DWORD PTR _i$5[ebp], 0
        jmp     SHORT $LN22@Cipher
$LN20@Cipher:
        mov     ecx, DWORD PTR _i$5[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$5[ebp], ecx
$LN22@Cipher:
        cmp     DWORD PTR _i$5[ebp], 16             ; 00000010H
        jge     SHORT $LN21@Cipher
        mov     edx, DWORD PTR _roundKeys$[ebp]
        add     edx, DWORD PTR _i$5[ebp]
        movzx   eax, BYTE PTR [edx+224]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$5[ebp]
        movzx   edx, BYTE PTR [ecx]
        xor     edx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$5[ebp]
        mov     BYTE PTR [eax], dl
        jmp     SHORT $LN20@Cipher
$LN21@Cipher:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0
void Cipher(unsigned char *,unsigned char const *) ENDP                         ; Cipher

tv3154 = -88                                            ; size = 4
tv3152 = -84                                            ; size = 4
tv3150 = -80                                            ; size = 4
tv3148 = -76                                            ; size = 4
tv3146 = -72                                            ; size = 4
tv3144 = -68                                            ; size = 4
tv3142 = -64                                            ; size = 4
tv3140 = -60                                            ; size = 4
tv3138 = -56                                            ; size = 4
tv3136 = -52                                            ; size = 4
tv3134 = -48                                            ; size = 4
tv3132 = -44                                            ; size = 4
_i$1 = -40                                          ; size = 4
_round$2 = -36                                      ; size = 4
_i$3 = -32                                          ; size = 4
_i$4 = -28                                          ; size = 4
_i$5 = -24                                          ; size = 4
_i$6 = -20                                          ; size = 4
_i$7 = -16                                          ; size = 4
_idx$8 = -12                                            ; size = 4
_t$ = -6                                                ; size = 1
_t$9 = -5                                         ; size = 1
_d$10 = -4                                          ; size = 1
_c$11 = -3                                          ; size = 1
_b$12 = -2                                          ; size = 1
_a$13 = -1                                          ; size = 1
_state$ = 8                                   ; size = 4
_roundKeys$ = 12                                        ; size = 4
void InvCipher(unsigned char *,unsigned char const *) PROC                            ; InvCipher
        push    ebp
        mov     ebp, esp
        sub     esp, 88                             ; 00000058H
        push    ebx
        push    esi
        push    edi
        mov     DWORD PTR _i$7[ebp], 0
        jmp     SHORT $LN4@InvCipher
$LN2@InvCipher:
        mov     eax, DWORD PTR _i$7[ebp]
        add     eax, 1
        mov     DWORD PTR _i$7[ebp], eax
$LN4@InvCipher:
        cmp     DWORD PTR _i$7[ebp], 16             ; 00000010H
        jge     SHORT $LN3@InvCipher
        mov     ecx, DWORD PTR _roundKeys$[ebp]
        add     ecx, DWORD PTR _i$7[ebp]
        movzx   edx, BYTE PTR [ecx+224]
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$7[ebp]
        movzx   ecx, BYTE PTR [eax]
        xor     ecx, edx
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$7[ebp]
        mov     BYTE PTR [edx], cl
        jmp     SHORT $LN2@InvCipher
$LN3@InvCipher:
        mov     DWORD PTR _round$2[ebp], 13             ; 0000000dH
        jmp     SHORT $LN7@InvCipher
$LN5@InvCipher:
        mov     eax, DWORD PTR _round$2[ebp]
        sub     eax, 1
        mov     DWORD PTR _round$2[ebp], eax
$LN7@InvCipher:
        cmp     DWORD PTR _round$2[ebp], 0
        jle     $LN6@InvCipher
        mov     ecx, 1
        imul    edx, ecx, 13
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [eax+edx]
        mov     BYTE PTR _t$9[ebp], cl
        mov     edx, 1
        imul    eax, edx, 9
        mov     ecx, 1
        imul    edx, ecx, 13
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 5
        mov     eax, 1
        imul    ecx, eax, 9
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        shl     eax, 0
        mov     ecx, 1
        imul    edx, ecx, 5
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        shl     ecx, 0
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$9[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        shl     ecx, 1
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [edx+ecx]
        mov     BYTE PTR _t$9[ebp], al
        mov     ecx, 1
        imul    edx, ecx, 10
        mov     eax, 1
        shl     eax, 1
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [ecx+eax], dl
        mov     eax, 1
        imul    ecx, eax, 10
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$9[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [eax+edx]
        mov     BYTE PTR _t$9[ebp], cl
        mov     edx, 1
        imul    eax, edx, 14
        mov     ecx, 1
        imul    edx, ecx, 6
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 14
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$9[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 3
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$9[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 7
        mov     edx, 1
        imul    eax, edx, 3
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 11
        mov     ecx, 1
        imul    edx, ecx, 7
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 15
        mov     eax, 1
        imul    ecx, eax, 11
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 15
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR _t$9[ebp]
        mov     BYTE PTR [edx+ecx], al
        mov     DWORD PTR _i$4[ebp], 0
        jmp     SHORT $LN10@InvCipher
$LN8@InvCipher:
        mov     ecx, DWORD PTR _i$4[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$4[ebp], ecx
$LN10@InvCipher:
        cmp     DWORD PTR _i$4[ebp], 16             ; 00000010H
        jge     SHORT $LN9@InvCipher
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$4[ebp]
        movzx   eax, BYTE PTR [edx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$4[ebp]
        mov     dl, BYTE PTR unsigned char const * const rsbox[eax]
        mov     BYTE PTR [ecx], dl
        jmp     SHORT $LN8@InvCipher
$LN9@InvCipher:
        mov     DWORD PTR _i$6[ebp], 0
        jmp     SHORT $LN13@InvCipher
$LN11@InvCipher:
        mov     eax, DWORD PTR _i$6[ebp]
        add     eax, 1
        mov     DWORD PTR _i$6[ebp], eax
$LN13@InvCipher:
        cmp     DWORD PTR _i$6[ebp], 16             ; 00000010H
        jge     SHORT $LN12@InvCipher
        mov     ecx, DWORD PTR _round$2[ebp]
        shl     ecx, 4
        add     ecx, DWORD PTR _i$6[ebp]
        mov     edx, DWORD PTR _roundKeys$[ebp]
        movzx   eax, BYTE PTR [edx+ecx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$6[ebp]
        movzx   edx, BYTE PTR [ecx]
        xor     edx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$6[ebp]
        mov     BYTE PTR [eax], dl
        jmp     SHORT $LN11@InvCipher
$LN12@InvCipher:
        mov     DWORD PTR _i$1[ebp], 0
        jmp     SHORT $LN16@InvCipher
$LN14@InvCipher:
        mov     ecx, DWORD PTR _i$1[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$1[ebp], ecx
$LN16@InvCipher:
        cmp     DWORD PTR _i$1[ebp], 4
        jge     $LN15@InvCipher
        mov     edx, DWORD PTR _i$1[ebp]
        shl     edx, 2
        mov     DWORD PTR _idx$8[ebp], edx
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     cl, BYTE PTR [eax]
        mov     BYTE PTR _a$13[ebp], cl
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _idx$8[ebp]
        mov     al, BYTE PTR [edx+1]
        mov     BYTE PTR _b$12[ebp], al
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _idx$8[ebp]
        mov     dl, BYTE PTR [ecx+2]
        mov     BYTE PTR _c$11[ebp], dl
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     cl, BYTE PTR [eax+3]
        mov     BYTE PTR _d$10[ebp], cl
        movzx   edx, BYTE PTR _a$13[ebp]
        imul    eax, edx, 0
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        xor     eax, ecx
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        xor     eax, ecx
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        xor     eax, ecx
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _a$13[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        imul    ecx, ecx, 0
        xor     eax, ecx
        movzx   edx, BYTE PTR _b$12[ebp]
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     edx, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        imul    ecx, ecx, 0
        xor     edx, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     edx, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3132[ebp], eax
        movzx   eax, BYTE PTR _b$12[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     ecx, eax
        imul    ecx, ecx, 0
        xor     edx, ecx
        mov     eax, DWORD PTR tv3132[ebp]
        xor     eax, edx
        movzx   ecx, BYTE PTR _c$11[ebp]
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3134[ebp], eax
        movzx   eax, BYTE PTR _c$11[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     edx, eax
        imul    edx, edx, 0
        xor     ecx, edx
        mov     eax, DWORD PTR tv3134[ebp]
        xor     eax, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        movzx   edx, BYTE PTR _d$10[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _d$10[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _d$10[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _d$10[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3136[ebp], eax
        movzx   eax, BYTE PTR _d$10[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     edx, eax
        imul    edx, edx, 0
        xor     ecx, edx
        mov     eax, DWORD PTR tv3136[ebp]
        xor     eax, ecx
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [ecx], al
        movzx   edx, BYTE PTR _a$13[ebp]
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        imul    eax, eax, 0
        xor     edx, eax
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   eax, BYTE PTR _a$13[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ecx, eax
        shl     ecx, 1
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ecx, eax
        imul    ecx, ecx, 0
        xor     edx, ecx
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        xor     edx, eax
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        shl     eax, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _a$13[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     eax, ecx
        imul    eax, eax, 0
        xor     edx, eax
        movzx   ecx, BYTE PTR _b$12[ebp]
        imul    eax, ecx, 0
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3138[ebp], edx
        movzx   edx, BYTE PTR _b$12[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ebx, edx
        sar     ebx, 7
        and     ebx, 1
        imul    edx, ebx, 27
        xor     edi, edx
        sar     edi, 7
        and     edi, 1
        imul    edx, edi, 27
        xor     esi, edx
        sar     esi, 7
        and     esi, 1
        imul    edx, esi, 27
        xor     ecx, edx
        imul    ecx, ecx, 0
        xor     eax, ecx
        mov     edx, DWORD PTR tv3138[ebp]
        xor     edx, eax
        movzx   eax, BYTE PTR _c$11[ebp]
        movzx   ecx, BYTE PTR _c$11[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _c$11[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        imul    ecx, ecx, 0
        xor     eax, ecx
        movzx   ecx, BYTE PTR _c$11[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _c$11[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3140[ebp], edx
        movzx   edx, BYTE PTR _c$11[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ebx, edx
        sar     ebx, 7
        and     ebx, 1
        imul    edx, ebx, 27
        xor     edi, edx
        sar     edi, 7
        and     edi, 1
        imul    edx, edi, 27
        xor     esi, edx
        sar     esi, 7
        and     esi, 1
        imul    edx, esi, 27
        xor     ecx, edx
        imul    ecx, ecx, 0
        xor     eax, ecx
        mov     edx, DWORD PTR tv3140[ebp]
        xor     edx, eax
        movzx   eax, BYTE PTR _d$10[ebp]
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        imul    ecx, ecx, 0
        xor     eax, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     eax, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3142[ebp], edx
        movzx   edx, BYTE PTR _d$10[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ebx, edx
        sar     ebx, 7
        and     ebx, 1
        imul    edx, ebx, 27
        xor     edi, edx
        sar     edi, 7
        and     edi, 1
        imul    edx, edi, 27
        xor     esi, edx
        sar     esi, 7
        and     esi, 1
        imul    edx, esi, 27
        xor     ecx, edx
        imul    ecx, ecx, 0
        xor     eax, ecx
        mov     edx, DWORD PTR tv3142[ebp]
        xor     edx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [eax+1], dl
        movzx   ecx, BYTE PTR _a$13[ebp]
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   eax, BYTE PTR _a$13[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     edx, eax
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        xor     ecx, eax
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        xor     ecx, eax
        movzx   eax, BYTE PTR _a$13[ebp]
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        shl     eax, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _a$13[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     eax, edx
        imul    eax, eax, 0
        xor     ecx, eax
        movzx   edx, BYTE PTR _b$12[ebp]
        movzx   eax, BYTE PTR _b$12[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        imul    eax, eax, 0
        xor     edx, eax
        movzx   eax, BYTE PTR _b$12[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        imul    eax, eax, 0
        xor     edx, eax
        movzx   eax, BYTE PTR _b$12[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        xor     edx, eax
        movzx   eax, BYTE PTR _b$12[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3144[ebp], ecx
        movzx   ecx, BYTE PTR _b$12[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     ebx, ecx
        sar     ebx, 7
        and     ebx, 1
        imul    ecx, ebx, 27
        xor     edi, ecx
        sar     edi, 7
        and     edi, 1
        imul    ecx, edi, 27
        xor     esi, ecx
        sar     esi, 7
        and     esi, 1
        imul    ecx, esi, 27
        xor     eax, ecx
        imul    eax, eax, 0
        xor     edx, eax
        mov     ecx, DWORD PTR tv3144[ebp]
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        imul    eax, edx, 0
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     eax, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     eax, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     eax, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3146[ebp], ecx
        movzx   ecx, BYTE PTR _c$11[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     ebx, ecx
        sar     ebx, 7
        and     ebx, 1
        imul    ecx, ebx, 27
        xor     edi, ecx
        sar     edi, 7
        and     edi, 1
        imul    ecx, edi, 27
        xor     esi, ecx
        sar     esi, 7
        and     esi, 1
        imul    ecx, esi, 27
        xor     edx, ecx
        imul    edx, edx, 0
        xor     eax, edx
        mov     ecx, DWORD PTR tv3146[ebp]
        xor     ecx, eax
        movzx   edx, BYTE PTR _d$10[ebp]
        movzx   eax, BYTE PTR _d$10[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        xor     edx, eax
        movzx   eax, BYTE PTR _d$10[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        imul    eax, eax, 0
        xor     edx, eax
        movzx   eax, BYTE PTR _d$10[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        xor     edx, eax
        movzx   eax, BYTE PTR _d$10[ebp]
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     eax, esi
        shl     eax, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3148[ebp], ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     ebx, ecx
        sar     ebx, 7
        and     ebx, 1
        imul    ecx, ebx, 27
        xor     edi, ecx
        sar     edi, 7
        and     edi, 1
        imul    ecx, edi, 27
        xor     esi, ecx
        sar     esi, 7
        and     esi, 1
        imul    ecx, esi, 27
        xor     eax, ecx
        imul    eax, eax, 0
        xor     edx, eax
        mov     ecx, DWORD PTR tv3148[ebp]
        xor     ecx, edx
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [edx+2], cl
        movzx   eax, BYTE PTR _a$13[ebp]
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        xor     eax, ecx
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        shl     ecx, 1
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        sar     edx, 7
        and     edx, 1
        imul    edx, edx, 27
        xor     ecx, edx
        imul    ecx, ecx, 0
        xor     eax, ecx
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        xor     eax, edx
        movzx   edx, BYTE PTR _a$13[ebp]
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        shl     edx, 1
        movzx   ecx, BYTE PTR _a$13[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _a$13[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _a$13[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _a$13[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        sar     ecx, 7
        and     ecx, 1
        imul    ecx, ecx, 27
        xor     edx, ecx
        imul    edx, edx, 0
        xor     eax, edx
        movzx   ecx, BYTE PTR _b$12[ebp]
        movzx   edx, BYTE PTR _b$12[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _b$12[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _b$12[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _b$12[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _b$12[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _b$12[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _b$12[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3150[ebp], eax
        movzx   eax, BYTE PTR _b$12[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     edx, eax
        imul    edx, edx, 0
        xor     ecx, edx
        mov     eax, DWORD PTR tv3150[ebp]
        xor     eax, ecx
        movzx   ecx, BYTE PTR _c$11[ebp]
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        imul    edx, edx, 0
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        xor     ecx, edx
        movzx   edx, BYTE PTR _c$11[ebp]
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     edx, esi
        shl     edx, 1
        movzx   esi, BYTE PTR _c$11[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _c$11[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _c$11[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3152[ebp], eax
        movzx   eax, BYTE PTR _c$11[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     edx, eax
        imul    edx, edx, 0
        xor     ecx, edx
        mov     eax, DWORD PTR tv3152[ebp]
        xor     eax, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        imul    edx, ecx, 0
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     edx, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     edx, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        xor     edx, ecx
        movzx   ecx, BYTE PTR _d$10[ebp]
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        sar     esi, 7
        and     esi, 1
        imul    esi, esi, 27
        xor     ecx, esi
        shl     ecx, 1
        movzx   esi, BYTE PTR _d$10[ebp]
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        sar     edi, 7
        and     edi, 1
        imul    edi, edi, 27
        xor     esi, edi
        shl     esi, 1
        movzx   edi, BYTE PTR _d$10[ebp]
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        sar     ebx, 7
        and     ebx, 1
        imul    ebx, ebx, 27
        xor     edi, ebx
        shl     edi, 1
        movzx   ebx, BYTE PTR _d$10[ebp]
        shl     ebx, 1
        mov     DWORD PTR tv3154[ebp], eax
        movzx   eax, BYTE PTR _d$10[ebp]
        sar     eax, 7
        and     eax, 1
        imul    eax, eax, 27
        xor     ebx, eax
        sar     ebx, 7
        and     ebx, 1
        imul    eax, ebx, 27
        xor     edi, eax
        sar     edi, 7
        and     edi, 1
        imul    eax, edi, 27
        xor     esi, eax
        sar     esi, 7
        and     esi, 1
        imul    eax, esi, 27
        xor     ecx, eax
        imul    ecx, ecx, 0
        xor     edx, ecx
        mov     eax, DWORD PTR tv3154[ebp]
        xor     eax, edx
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _idx$8[ebp]
        mov     BYTE PTR [ecx+3], al
        jmp     $LN14@InvCipher
$LN15@InvCipher:
        jmp     $LN5@InvCipher
$LN6@InvCipher:
        mov     edx, 1
        imul    eax, edx, 13
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 9
        mov     edx, 1
        imul    eax, edx, 13
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 5
        mov     ecx, 1
        imul    edx, ecx, 9
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        shl     ecx, 0
        mov     edx, 1
        imul    eax, edx, 5
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        shl     edx, 0
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        shl     edx, 1
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [eax+edx]
        mov     BYTE PTR _t$[ebp], cl
        mov     edx, 1
        imul    eax, edx, 10
        mov     ecx, 1
        shl     ecx, 1
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [edx+ecx], al
        mov     ecx, 1
        imul    edx, ecx, 10
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     edx, 1
        imul    eax, edx, 6
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [ecx+eax]
        mov     BYTE PTR _t$[ebp], dl
        mov     eax, 1
        imul    ecx, eax, 14
        mov     edx, 1
        imul    eax, edx, 6
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 14
        mov     ecx, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR _t$[ebp]
        mov     BYTE PTR [ecx+eax], dl
        mov     eax, 1
        imul    ecx, eax, 3
        mov     edx, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [edx+ecx]
        mov     BYTE PTR _t$[ebp], al
        mov     ecx, 1
        imul    edx, ecx, 7
        mov     eax, 1
        imul    ecx, eax, 3
        mov     eax, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     dl, BYTE PTR [esi+edx]
        mov     BYTE PTR [eax+ecx], dl
        mov     eax, 1
        imul    ecx, eax, 11
        mov     edx, 1
        imul    eax, edx, 7
        mov     edx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR [esi+ecx]
        mov     BYTE PTR [edx+eax], cl
        mov     edx, 1
        imul    eax, edx, 15
        mov     ecx, 1
        imul    edx, ecx, 11
        mov     ecx, DWORD PTR _state$[ebp]
        mov     esi, DWORD PTR _state$[ebp]
        mov     al, BYTE PTR [esi+eax]
        mov     BYTE PTR [ecx+edx], al
        mov     ecx, 1
        imul    edx, ecx, 15
        mov     eax, DWORD PTR _state$[ebp]
        mov     cl, BYTE PTR _t$[ebp]
        mov     BYTE PTR [eax+edx], cl
        mov     DWORD PTR _i$3[ebp], 0
        jmp     SHORT $LN19@InvCipher
$LN17@InvCipher:
        mov     edx, DWORD PTR _i$3[ebp]
        add     edx, 1
        mov     DWORD PTR _i$3[ebp], edx
$LN19@InvCipher:
        cmp     DWORD PTR _i$3[ebp], 16             ; 00000010H
        jge     SHORT $LN18@InvCipher
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$3[ebp]
        movzx   ecx, BYTE PTR [eax]
        mov     edx, DWORD PTR _state$[ebp]
        add     edx, DWORD PTR _i$3[ebp]
        mov     al, BYTE PTR unsigned char const * const rsbox[ecx]
        mov     BYTE PTR [edx], al
        jmp     SHORT $LN17@InvCipher
$LN18@InvCipher:
        mov     DWORD PTR _i$5[ebp], 0
        jmp     SHORT $LN22@InvCipher
$LN20@InvCipher:
        mov     ecx, DWORD PTR _i$5[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$5[ebp], ecx
$LN22@InvCipher:
        cmp     DWORD PTR _i$5[ebp], 16             ; 00000010H
        jge     SHORT $LN21@InvCipher
        mov     edx, DWORD PTR _roundKeys$[ebp]
        add     edx, DWORD PTR _i$5[ebp]
        movzx   eax, BYTE PTR [edx]
        mov     ecx, DWORD PTR _state$[ebp]
        add     ecx, DWORD PTR _i$5[ebp]
        movzx   edx, BYTE PTR [ecx]
        xor     edx, eax
        mov     eax, DWORD PTR _state$[ebp]
        add     eax, DWORD PTR _i$5[ebp]
        mov     BYTE PTR [eax], dl
        jmp     SHORT $LN20@InvCipher
$LN21@InvCipher:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0
void InvCipher(unsigned char *,unsigned char const *) ENDP                            ; InvCipher

_inFile$ = -808                               ; size = 184
_outFile$ = -624                                        ; size = 176
$T2 = -448                                          ; size = 8
$T3 = -440                                          ; size = 8
_origSize$4 = -432                                  ; size = 4
_i$5 = -428                                   ; size = 4
$T6 = -421                                          ; size = 1
_i$7 = -420                                   ; size = 4
_i$8 = -416                                   ; size = 4
_buffer$ = -412                               ; size = 12
_j$9 = -400                                   ; size = 4
_j$10 = -396                                            ; size = 4
$T11 = -391                                   ; size = 1
$T12 = -390                                   ; size = 1
$T13 = -389                                   ; size = 1
$T14 = -388                                   ; size = 1
$T15 = -387                                   ; size = 1
_paddingVal$16 = -386                             ; size = 1
_paddingVal$17 = -385                             ; size = 1
_roundKeys$ = -384                                  ; size = 240
_nextPrevBlock$18 = -144                                ; size = 16
_prevBlock$19 = -128                                    ; size = 16
_prevBlock$20 = -112                                    ; size = 16
_block$21 = -96                               ; size = 16
_block$22 = -80                               ; size = 16
_key$ = -64                                   ; size = 32
_iv$ = -32                                          ; size = 16
__$ArrayPad$ = -16                                  ; size = 4
__$EHRec$ = -12                               ; size = 12
_input$ = 8                                   ; size = 4
_output$ = 12                                     ; size = 4
_keyStr$ = 16                                     ; size = 4
_isEncrypt$ = 20                                        ; size = 1
bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool) PROC ; ActionAES
        push    ebp
        mov     ebp, esp
        push    -1
        push    __ehhandler$bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool)
        mov     eax, DWORD PTR fs:0
        push    eax
        sub     esp, 796                      ; 0000031cH
        mov     eax, DWORD PTR ___security_cookie
        xor     eax, ebp
        mov     DWORD PTR __$ArrayPad$[ebp], eax
        push    ebx
        push    eax
        lea     eax, DWORD PTR __$EHRec$[ebp]
        mov     DWORD PTR fs:0, eax
        push    1
        push    64                                  ; 00000040H
        push    32                                  ; 00000020H
        mov     eax, DWORD PTR _input$[ebp]
        push    eax
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    std::basic_ifstream<char,std::char_traits<char> >::basic_ifstream<char,std::char_traits<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,int,int) ; std::basic_ifstream<char,std::char_traits<char> >::basic_ifstream<char,std::char_traits<char> >
        mov     DWORD PTR __$EHRec$[ebp+8], 0
        push    1
        push    64                                  ; 00000040H
        push    32                                  ; 00000020H
        mov     ecx, DWORD PTR _output$[ebp]
        push    ecx
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    std::basic_ofstream<char,std::char_traits<char> >::basic_ofstream<char,std::char_traits<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,int,int) ; std::basic_ofstream<char,std::char_traits<char> >::basic_ofstream<char,std::char_traits<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        mov     edx, DWORD PTR _inFile$[ebp]
        mov     eax, DWORD PTR [edx+4]
        lea     ecx, DWORD PTR _inFile$[ebp+eax]
        call    DWORD PTR __imp_bool std::ios_base::operator!(void)const 
        movzx   ecx, al
        test    ecx, ecx
        jne     SHORT $LN18@ActionAES
        mov     edx, DWORD PTR _outFile$[ebp]
        mov     eax, DWORD PTR [edx+4]
        lea     ecx, DWORD PTR _outFile$[ebp+eax]
        call    DWORD PTR __imp_bool std::ios_base::operator!(void)const 
        movzx   ecx, al
        test    ecx, ecx
        je      SHORT $LN17@ActionAES
$LN18@ActionAES:
        mov     BYTE PTR $T15[ebp], 0
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    void std::basic_ofstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    void std::basic_ifstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     al, BYTE PTR $T15[ebp]
        jmp     $LN1@ActionAES
$LN17@ActionAES:
        xor     edx, edx
        mov     DWORD PTR _key$[ebp], edx
        mov     DWORD PTR _key$[ebp+4], edx
        mov     DWORD PTR _key$[ebp+8], edx
        mov     DWORD PTR _key$[ebp+12], edx
        mov     DWORD PTR _key$[ebp+16], edx
        mov     DWORD PTR _key$[ebp+20], edx
        mov     DWORD PTR _key$[ebp+24], edx
        mov     DWORD PTR _key$[ebp+28], edx
        mov     BYTE PTR _iv$[ebp], 70                    ; 00000046H
        mov     BYTE PTR _iv$[ebp+1], 97      ; 00000061H
        mov     BYTE PTR _iv$[ebp+2], 105   ; 00000069H
        mov     BYTE PTR _iv$[ebp+3], 114   ; 00000072H
        mov     BYTE PTR _iv$[ebp+4], 117   ; 00000075H
        mov     BYTE PTR _iv$[ebp+5], 115   ; 00000073H
        mov     BYTE PTR _iv$[ebp+6], 65      ; 00000041H
        mov     BYTE PTR _iv$[ebp+7], 69      ; 00000045H
        mov     BYTE PTR _iv$[ebp+8], 83      ; 00000053H
        mov     BYTE PTR _iv$[ebp+9], 75      ; 0000004bH
        mov     BYTE PTR _iv$[ebp+10], 101                ; 00000065H
        mov     BYTE PTR _iv$[ebp+11], 121                ; 00000079H
        mov     BYTE PTR _iv$[ebp+12], 50   ; 00000032H
        mov     BYTE PTR _iv$[ebp+13], 48   ; 00000030H
        mov     BYTE PTR _iv$[ebp+14], 50   ; 00000032H
        mov     BYTE PTR _iv$[ebp+15], 54   ; 00000036H
        push    32                                  ; 00000020H
        mov     ecx, DWORD PTR _keyStr$[ebp]
        call    char const * std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str(void)const  ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str
        push    eax
        lea     eax, DWORD PTR _key$[ebp]
        push    eax
        call    DWORD PTR __imp__strncpy
        add     esp, 12                             ; 0000000cH
        lea     ecx, DWORD PTR _roundKeys$[ebp]
        push    ecx
        lea     edx, DWORD PTR _key$[ebp]
        push    edx
        call    void KeyExpansion(unsigned char const *,unsigned char *)          ; KeyExpansion
        add     esp, 8
        lea     ecx, DWORD PTR $T6[ebp]
        call    std::allocator<char>::allocator<char>(void)            ; std::allocator<char>::allocator<char>
        push    eax
        lea     ecx, DWORD PTR $T3[ebp]
        call    std::istreambuf_iterator<char,std::char_traits<char> >::istreambuf_iterator<char,std::char_traits<char> >(void) ; std::istreambuf_iterator<char,std::char_traits<char> >::istreambuf_iterator<char,std::char_traits<char> >
        mov     ecx, DWORD PTR [eax+4]
        push    ecx
        mov     edx, DWORD PTR [eax]
        push    edx
        lea     eax, DWORD PTR _inFile$[ebp]
        push    eax
        lea     ecx, DWORD PTR $T2[ebp]
        call    std::istreambuf_iterator<char,std::char_traits<char> >::istreambuf_iterator<char,std::char_traits<char> >(std::basic_istream<char,std::char_traits<char> > &) ; std::istreambuf_iterator<char,std::char_traits<char> >::istreambuf_iterator<char,std::char_traits<char> >
        mov     ecx, DWORD PTR [eax+4]
        push    ecx
        mov     edx, DWORD PTR [eax]
        push    edx
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    std::vector<char,std::allocator<char> >::vector<char,std::allocator<char> ><std::istreambuf_iterator<char,std::char_traits<char> >,0>(std::istreambuf_iterator<char,std::char_traits<char> >,std::istreambuf_iterator<char,std::char_traits<char> >,std::allocator<char> const &) ; std::vector<char,std::allocator<char> >::vector<char,std::allocator<char> ><std::istreambuf_iterator<char,std::char_traits<char> >,0>
        mov     BYTE PTR __$EHRec$[ebp+8], 2
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    void std::basic_ifstream<char,std::char_traits<char> >::close(void) ; std::basic_ifstream<char,std::char_traits<char> >::close
        npad    1
        movzx   eax, BYTE PTR _isEncrypt$[ebp]
        test    eax, eax
        je      $LN19@ActionAES
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        mov     DWORD PTR _origSize$4[ebp], eax
        mov     eax, DWORD PTR _origSize$4[ebp]
        xor     edx, edx
        mov     ecx, 16                             ; 00000010H
        div     ecx
        mov     eax, 16                             ; 00000010H
        sub     eax, edx
        mov     BYTE PTR _paddingVal$16[ebp], al
        mov     DWORD PTR _i$5[ebp], 0
        jmp     SHORT $LN4@ActionAES
$LN2@ActionAES:
        mov     ecx, DWORD PTR _i$5[ebp]
        add     ecx, 1
        mov     DWORD PTR _i$5[ebp], ecx
$LN4@ActionAES:
        movzx   edx, BYTE PTR _paddingVal$16[ebp]
        cmp     DWORD PTR _i$5[ebp], edx
        jge     SHORT $LN3@ActionAES
        mov     al, BYTE PTR _paddingVal$16[ebp]
        mov     BYTE PTR $T14[ebp], al
        lea     ecx, DWORD PTR $T14[ebp]
        push    ecx
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    void std::vector<char,std::allocator<char> >::push_back(char &&) ; std::vector<char,std::allocator<char> >::push_back
        npad    1
        jmp     SHORT $LN2@ActionAES
$LN3@ActionAES:
        push    16                                  ; 00000010H
        lea     edx, DWORD PTR _iv$[ebp]
        push    edx
        lea     eax, DWORD PTR _prevBlock$20[ebp]
        push    eax
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        mov     DWORD PTR _i$8[ebp], 0
        jmp     SHORT $LN7@ActionAES
$LN5@ActionAES:
        mov     ecx, DWORD PTR _i$8[ebp]
        add     ecx, 16                             ; 00000010H
        mov     DWORD PTR _i$8[ebp], ecx
$LN7@ActionAES:
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        cmp     DWORD PTR _i$8[ebp], eax
        jae     $LN6@ActionAES
        mov     DWORD PTR _j$10[ebp], 0
        jmp     SHORT $LN10@ActionAES
$LN8@ActionAES:
        mov     edx, DWORD PTR _j$10[ebp]
        add     edx, 1
        mov     DWORD PTR _j$10[ebp], edx
$LN10@ActionAES:
        cmp     DWORD PTR _j$10[ebp], 16      ; 00000010H
        jge     SHORT $LN9@ActionAES
        mov     eax, DWORD PTR _i$8[ebp]
        add     eax, DWORD PTR _j$10[ebp]
        push    eax
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char & std::vector<char,std::allocator<char> >::operator[](unsigned int) ; std::vector<char,std::allocator<char> >::operator[]
        movsx   ecx, BYTE PTR [eax]
        mov     edx, DWORD PTR _j$10[ebp]
        movzx   eax, BYTE PTR _prevBlock$20[ebp+edx]
        xor     ecx, eax
        mov     edx, DWORD PTR _j$10[ebp]
        mov     BYTE PTR _block$22[ebp+edx], cl
        jmp     SHORT $LN8@ActionAES
$LN9@ActionAES:
        lea     eax, DWORD PTR _roundKeys$[ebp]
        push    eax
        lea     ecx, DWORD PTR _block$22[ebp]
        push    ecx
        call    void Cipher(unsigned char *,unsigned char const *)                    ; Cipher
        add     esp, 8
        push    16                                  ; 00000010H
        lea     edx, DWORD PTR _block$22[ebp]
        push    edx
        mov     eax, DWORD PTR _i$8[ebp]
        push    eax
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char & std::vector<char,std::allocator<char> >::operator[](unsigned int) ; std::vector<char,std::allocator<char> >::operator[]
        push    eax
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        push    16                                  ; 00000010H
        lea     ecx, DWORD PTR _block$22[ebp]
        push    ecx
        lea     edx, DWORD PTR _prevBlock$20[ebp]
        push    edx
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        jmp     $LN5@ActionAES
$LN6@ActionAES:
        jmp     $LN24@ActionAES
$LN19@ActionAES:
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        xor     edx, edx
        mov     ecx, 16                             ; 00000010H
        div     ecx
        test    edx, edx
        jne     SHORT $LN22@ActionAES
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    bool std::vector<char,std::allocator<char> >::empty(void)const  ; std::vector<char,std::allocator<char> >::empty
        movzx   edx, al
        test    edx, edx
        je      SHORT $LN21@ActionAES
$LN22@ActionAES:
        mov     BYTE PTR $T13[ebp], 0
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >(void) ; std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    void std::basic_ofstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    void std::basic_ifstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     al, BYTE PTR $T13[ebp]
        jmp     $LN1@ActionAES
$LN21@ActionAES:
        push    16                                  ; 00000010H
        lea     eax, DWORD PTR _iv$[ebp]
        push    eax
        lea     ecx, DWORD PTR _prevBlock$19[ebp]
        push    ecx
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        mov     DWORD PTR _i$7[ebp], 0
        jmp     SHORT $LN13@ActionAES
$LN11@ActionAES:
        mov     edx, DWORD PTR _i$7[ebp]
        add     edx, 16                             ; 00000010H
        mov     DWORD PTR _i$7[ebp], edx
$LN13@ActionAES:
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        cmp     DWORD PTR _i$7[ebp], eax
        jae     $LN12@ActionAES
        push    16                                  ; 00000010H
        mov     eax, DWORD PTR _i$7[ebp]
        push    eax
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char & std::vector<char,std::allocator<char> >::operator[](unsigned int) ; std::vector<char,std::allocator<char> >::operator[]
        push    eax
        lea     ecx, DWORD PTR _block$21[ebp]
        push    ecx
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        push    16                                  ; 00000010H
        lea     edx, DWORD PTR _block$21[ebp]
        push    edx
        lea     eax, DWORD PTR _nextPrevBlock$18[ebp]
        push    eax
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        lea     ecx, DWORD PTR _roundKeys$[ebp]
        push    ecx
        lea     edx, DWORD PTR _block$21[ebp]
        push    edx
        call    void InvCipher(unsigned char *,unsigned char const *)       ; InvCipher
        add     esp, 8
        mov     DWORD PTR _j$9[ebp], 0
        jmp     SHORT $LN16@ActionAES
$LN14@ActionAES:
        mov     eax, DWORD PTR _j$9[ebp]
        add     eax, 1
        mov     DWORD PTR _j$9[ebp], eax
$LN16@ActionAES:
        cmp     DWORD PTR _j$9[ebp], 16             ; 00000010H
        jge     SHORT $LN15@ActionAES
        mov     ecx, DWORD PTR _j$9[ebp]
        movzx   ebx, BYTE PTR _block$21[ebp+ecx]
        mov     edx, DWORD PTR _j$9[ebp]
        movzx   eax, BYTE PTR _prevBlock$19[ebp+edx]
        xor     ebx, eax
        mov     ecx, DWORD PTR _i$7[ebp]
        add     ecx, DWORD PTR _j$9[ebp]
        push    ecx
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char & std::vector<char,std::allocator<char> >::operator[](unsigned int) ; std::vector<char,std::allocator<char> >::operator[]
        mov     BYTE PTR [eax], bl
        jmp     SHORT $LN14@ActionAES
$LN15@ActionAES:
        push    16                                  ; 00000010H
        lea     edx, DWORD PTR _nextPrevBlock$18[ebp]
        push    edx
        lea     eax, DWORD PTR _prevBlock$19[ebp]
        push    eax
        call    _memcpy
        add     esp, 12                             ; 0000000cH
        jmp     $LN11@ActionAES
$LN12@ActionAES:
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char & std::vector<char,std::allocator<char> >::back(void) ; std::vector<char,std::allocator<char> >::back
        mov     cl, BYTE PTR [eax]
        mov     BYTE PTR _paddingVal$17[ebp], cl
        movzx   edx, BYTE PTR _paddingVal$17[ebp]
        test    edx, edx
        jle     SHORT $LN23@ActionAES
        movzx   eax, BYTE PTR _paddingVal$17[ebp]
        cmp     eax, 16                             ; 00000010H
        jg      SHORT $LN23@ActionAES
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        movzx   ecx, BYTE PTR _paddingVal$17[ebp]
        sub     eax, ecx
        push    eax
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    void std::vector<char,std::allocator<char> >::resize(unsigned int) ; std::vector<char,std::allocator<char> >::resize
        npad    1
        jmp     SHORT $LN24@ActionAES
$LN23@ActionAES:
        mov     BYTE PTR $T12[ebp], 0
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >(void) ; std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    void std::basic_ofstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    void std::basic_ifstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     al, BYTE PTR $T12[ebp]
        jmp     SHORT $LN1@ActionAES
$LN24@ActionAES:
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    unsigned int std::vector<char,std::allocator<char> >::size(void)const  ; std::vector<char,std::allocator<char> >::size
        xor     edx, edx
        push    edx
        push    eax
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    char * std::vector<char,std::allocator<char> >::data(void) ; std::vector<char,std::allocator<char> >::data
        push    eax
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > & std::basic_ostream<char,std::char_traits<char> >::write(char const *,__int64)
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    void std::basic_ofstream<char,std::char_traits<char> >::close(void) ; std::basic_ofstream<char,std::char_traits<char> >::close
        npad    1
        mov     BYTE PTR $T11[ebp], 1
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _buffer$[ebp]
        call    std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >(void) ; std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _outFile$[ebp]
        call    void std::basic_ofstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _inFile$[ebp]
        call    void std::basic_ifstream<char,std::char_traits<char> >::`vbase destructor'(void)
        mov     al, BYTE PTR $T11[ebp]
$LN1@ActionAES:
        mov     ecx, DWORD PTR __$EHRec$[ebp]
        mov     DWORD PTR fs:0, ecx
        pop     ecx
        pop     ebx
        mov     ecx, DWORD PTR __$ArrayPad$[ebp]
        xor     ecx, ebp
        call    @__security_check_cookie@4
        mov     esp, ebp
        pop     ebp
        ret     0
__unwindfunclet$?ActionAES@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z$0:
        lea     ecx, DWORD PTR _inFile$[ebp]
        jmp     void std::basic_ifstream<char,std::char_traits<char> >::`vbase destructor'(void)
__unwindfunclet$?ActionAES@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z$1:
        lea     ecx, DWORD PTR _outFile$[ebp]
        jmp     void std::basic_ofstream<char,std::char_traits<char> >::`vbase destructor'(void)
__unwindfunclet$?ActionAES@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N@Z$2:
        lea     ecx, DWORD PTR _buffer$[ebp]
        jmp     std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >(void) ; std::vector<char,std::allocator<char> >::~vector<char,std::allocator<char> >
        int     3
        int     3
        int     3
        int     3
        int     3
__ehhandler$bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool):
        npad    1
        npad    1
        mov     edx, DWORD PTR [esp+8]
        lea     eax, DWORD PTR [edx+12]
        mov     ecx, DWORD PTR [edx-804]
        xor     ecx, eax
        call    @__security_check_cookie@4
        mov     ecx, DWORD PTR [edx-4]
        xor     ecx, eax
        call    @__security_check_cookie@4
        mov     eax, OFFSET __ehfuncinfo$bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool)
        jmp     ___CxxFrameHandler3
bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool) ENDP ; ActionAES

$T2 = -156                                          ; size = 4
$T3 = -152                                          ; size = 4
$T4 = -148                                          ; size = 4
_pos$5 = -144                                     ; size = 4
_menu$ = -140                                     ; size = 4
_outDec$6 = -136                                        ; size = 24
_outEnc$7 = -112                                        ; size = 24
_keyInput$ = -88                                        ; size = 24
_MASTER_KEY$ = -64                                  ; size = 24
_targetFile$ = -40                                  ; size = 24
__$ArrayPad$ = -16                                  ; size = 4
__$EHRec$ = -12                               ; size = 12
_main   PROC
        push    ebp
        mov     ebp, esp
        push    -1
        push    __ehhandler$_main
        mov     eax, DWORD PTR fs:0
        push    eax
        sub     esp, 144                      ; 00000090H
        mov     eax, DWORD PTR ___security_cookie
        xor     eax, ebp
        mov     DWORD PTR __$ArrayPad$[ebp], eax
        push    eax
        lea     eax, DWORD PTR __$EHRec$[ebp]
        mov     DWORD PTR fs:0, eax
        push    OFFSET $SG41485
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >(char const * const) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     DWORD PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _keyInput$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 2
        push    OFFSET $SG41486
        mov     eax, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    OFFSET $SG41487
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    OFFSET $SG41488
        mov     edx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    edx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    OFFSET $SG41489
        mov     eax, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    OFFSET $SG41490
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    OFFSET $SG41491
        mov     edx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    edx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        lea     eax, DWORD PTR _menu$[ebp]
        push    eax
        mov     ecx, DWORD PTR __imp_std::basic_istream<char,std::char_traits<char> > std::cin
        call    DWORD PTR __imp_std::basic_istream<char,std::char_traits<char> > & std::basic_istream<char,std::char_traits<char> >::operator>>(int &)
        push    OFFSET $SG41492
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        lea     edx, DWORD PTR _targetFile$[ebp]
        push    edx
        mov     eax, DWORD PTR __imp_std::basic_istream<char,std::char_traits<char> > std::cin
        push    eax
        call    std::basic_istream<char,std::char_traits<char> > & std::operator>><char,std::char_traits<char>,std::allocator<char> >(std::basic_istream<char,std::char_traits<char> > &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) ; std::operator>><char,std::char_traits<char>,std::allocator<char> >
        add     esp, 8
        push    OFFSET $SG41493
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        lea     edx, DWORD PTR _keyInput$[ebp]
        push    edx
        mov     eax, DWORD PTR __imp_std::basic_istream<char,std::char_traits<char> > std::cin
        push    eax
        call    std::basic_istream<char,std::char_traits<char> > & std::operator>><char,std::char_traits<char>,std::allocator<char> >(std::basic_istream<char,std::char_traits<char> > &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) ; std::operator>><char,std::char_traits<char>,std::allocator<char> >
        add     esp, 8
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        push    ecx
        lea     edx, DWORD PTR _keyInput$[ebp]
        push    edx
        call    bool std::operator!=<char,std::char_traits<char>,std::allocator<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) ; std::operator!=<char,std::char_traits<char>,std::allocator<char> >
        add     esp, 8
        movzx   eax, al
        test    eax, eax
        je      SHORT $LN2@main
        push    OFFSET $SG41495
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        mov     DWORD PTR $T4[ebp], 1
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _keyInput$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     eax, DWORD PTR $T4[ebp]
        jmp     $LN1@main
$LN2@main:
        cmp     DWORD PTR _menu$[ebp], 1
        jne     $LN3@main
        push    OFFSET $SG41499
        lea     edx, DWORD PTR _targetFile$[ebp]
        push    edx
        lea     eax, DWORD PTR _outEnc$7[ebp]
        push    eax
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> > std::operator+<char,std::char_traits<char>,std::allocator<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,char const * const) ; std::operator+<char,std::char_traits<char>,std::allocator<char> >
        add     esp, 12                             ; 0000000cH
        mov     BYTE PTR __$EHRec$[ebp+8], 3
        push    1
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        push    ecx
        lea     edx, DWORD PTR _outEnc$7[ebp]
        push    edx
        lea     eax, DWORD PTR _targetFile$[ebp]
        push    eax
        call    bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool) ; ActionAES
        add     esp, 16                             ; 00000010H
        movzx   ecx, al
        test    ecx, ecx
        je      SHORT $LN5@main
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    char const * std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str(void)const  ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str
        push    eax
        call    DWORD PTR __imp__remove
        add     esp, 4
        push    OFFSET $SG41502
        lea     edx, DWORD PTR _outEnc$7[ebp]
        push    edx
        push    OFFSET $SG41503
        mov     eax, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<char,std::char_traits<char>,std::allocator<char> >(std::basic_ostream<char,std::char_traits<char> > &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) ; std::operator<<<char,std::char_traits<char>,std::allocator<char> >
        add     esp, 8
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        jmp     SHORT $LN6@main
$LN5@main:
        push    OFFSET $SG41504
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
$LN6@main:
        mov     BYTE PTR __$EHRec$[ebp+8], 2
        lea     ecx, DWORD PTR _outEnc$7[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        npad    1
        jmp     $LN7@main
$LN3@main:
        cmp     DWORD PTR _menu$[ebp], 2
        jne     $LN7@main
        push    -1
        push    OFFSET $SG41506
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    unsigned int std::basic_string<char,std::char_traits<char>,std::allocator<char> >::rfind(char const * const,unsigned int)const  ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::rfind
        mov     DWORD PTR _pos$5[ebp], eax
        cmp     DWORD PTR _pos$5[ebp], -1
        jne     SHORT $LN8@main
        push    OFFSET $SG41508
        mov     edx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    edx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        mov     DWORD PTR $T3[ebp], 1
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _keyInput$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     eax, DWORD PTR $T3[ebp]
        jmp     $LN1@main
$LN8@main:
        mov     eax, DWORD PTR _pos$5[ebp]
        push    eax
        push    0
        lea     ecx, DWORD PTR _outDec$6[ebp]
        push    ecx
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> > std::basic_string<char,std::char_traits<char>,std::allocator<char> >::substr(unsigned int,unsigned int)const  ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::substr
        mov     BYTE PTR __$EHRec$[ebp+8], 4
        push    0
        lea     edx, DWORD PTR _MASTER_KEY$[ebp]
        push    edx
        lea     eax, DWORD PTR _outDec$6[ebp]
        push    eax
        lea     ecx, DWORD PTR _targetFile$[ebp]
        push    ecx
        call    bool ActionAES(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,bool) ; ActionAES
        add     esp, 16                             ; 00000010H
        movzx   edx, al
        test    edx, edx
        je      SHORT $LN9@main
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    char const * std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str(void)const  ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::c_str
        push    eax
        call    DWORD PTR __imp__remove
        add     esp, 4
        push    OFFSET $SG41512
        lea     eax, DWORD PTR _outDec$6[ebp]
        push    eax
        push    OFFSET $SG41513
        mov     ecx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    ecx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<char,std::char_traits<char>,std::allocator<char> >(std::basic_ostream<char,std::char_traits<char> > &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) ; std::operator<<<char,std::char_traits<char>,std::allocator<char> >
        add     esp, 8
        push    eax
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
        jmp     SHORT $LN10@main
$LN9@main:
        push    OFFSET $SG41514
        mov     edx, DWORD PTR __imp_std::basic_ostream<char,std::char_traits<char> > std::cout
        push    edx
        call    std::basic_ostream<char,std::char_traits<char> > & std::operator<<<std::char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *) ; std::operator<<<std::char_traits<char> >
        add     esp, 8
$LN10@main:
        mov     BYTE PTR __$EHRec$[ebp+8], 2
        lea     ecx, DWORD PTR _outDec$6[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        npad    1
$LN7@main:
        mov     DWORD PTR $T2[ebp], 0
        mov     BYTE PTR __$EHRec$[ebp+8], 1
        lea     ecx, DWORD PTR _keyInput$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     BYTE PTR __$EHRec$[ebp+8], 0
        lea     ecx, DWORD PTR _targetFile$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     DWORD PTR __$EHRec$[ebp+8], -1
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        call    std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        mov     eax, DWORD PTR $T2[ebp]
$LN1@main:
        mov     ecx, DWORD PTR __$EHRec$[ebp]
        mov     DWORD PTR fs:0, ecx
        pop     ecx
        mov     ecx, DWORD PTR __$ArrayPad$[ebp]
        xor     ecx, ebp
        call    @__security_check_cookie@4
        mov     esp, ebp
        pop     ebp
        ret     0
__unwindfunclet$_main$0:
        lea     ecx, DWORD PTR _MASTER_KEY$[ebp]
        jmp     std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
__unwindfunclet$_main$1:
        lea     ecx, DWORD PTR _targetFile$[ebp]
        jmp     std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
__unwindfunclet$_main$2:
        lea     ecx, DWORD PTR _keyInput$[ebp]
        jmp     std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
__unwindfunclet$_main$3:
        lea     ecx, DWORD PTR _outEnc$7[ebp]
        jmp     std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
__unwindfunclet$_main$4:
        lea     ecx, DWORD PTR _outDec$6[ebp]
        jmp     std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >(void) ; std::basic_string<char,std::char_traits<char>,std::allocator<char> >::~basic_string<char,std::char_traits<char>,std::allocator<char> >
        int     3
        int     3
        int     3
        int     3
        int     3
__ehhandler$_main:
        npad    1
        npad    1
        mov     edx, DWORD PTR [esp+8]
        lea     eax, DWORD PTR [edx+12]
        mov     ecx, DWORD PTR [edx-148]
        xor     ecx, eax
        call    @__security_check_cookie@4
        mov     ecx, DWORD PTR [edx-4]
        xor     ecx, eax
        call    @__security_check_cookie@4
        mov     eax, OFFSET __ehfuncinfo$_main
        jmp     ___CxxFrameHandler3
_main   ENDP