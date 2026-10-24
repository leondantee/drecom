#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Plw02_move00
// Address: 0x1c16d0 - 0x1c188c
void Plw02_move00_0x1c16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_move00_0x1c16d0");
#endif

    switch (ctx->pc) {
        case 0x1c16d0u: goto label_1c16d0;
        case 0x1c16d4u: goto label_1c16d4;
        case 0x1c16d8u: goto label_1c16d8;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e0u: goto label_1c16e0;
        case 0x1c16e4u: goto label_1c16e4;
        case 0x1c16e8u: goto label_1c16e8;
        case 0x1c16ecu: goto label_1c16ec;
        case 0x1c16f0u: goto label_1c16f0;
        case 0x1c16f4u: goto label_1c16f4;
        case 0x1c16f8u: goto label_1c16f8;
        case 0x1c16fcu: goto label_1c16fc;
        case 0x1c1700u: goto label_1c1700;
        case 0x1c1704u: goto label_1c1704;
        case 0x1c1708u: goto label_1c1708;
        case 0x1c170cu: goto label_1c170c;
        case 0x1c1710u: goto label_1c1710;
        case 0x1c1714u: goto label_1c1714;
        case 0x1c1718u: goto label_1c1718;
        case 0x1c171cu: goto label_1c171c;
        case 0x1c1720u: goto label_1c1720;
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1728u: goto label_1c1728;
        case 0x1c172cu: goto label_1c172c;
        case 0x1c1730u: goto label_1c1730;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1738u: goto label_1c1738;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1740u: goto label_1c1740;
        case 0x1c1744u: goto label_1c1744;
        case 0x1c1748u: goto label_1c1748;
        case 0x1c174cu: goto label_1c174c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1754u: goto label_1c1754;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c175cu: goto label_1c175c;
        case 0x1c1760u: goto label_1c1760;
        case 0x1c1764u: goto label_1c1764;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c176cu: goto label_1c176c;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c1774u: goto label_1c1774;
        case 0x1c1778u: goto label_1c1778;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c1780u: goto label_1c1780;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1788u: goto label_1c1788;
        case 0x1c178cu: goto label_1c178c;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c1794u: goto label_1c1794;
        case 0x1c1798u: goto label_1c1798;
        case 0x1c179cu: goto label_1c179c;
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17acu: goto label_1c17ac;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17b4u: goto label_1c17b4;
        case 0x1c17b8u: goto label_1c17b8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c17c4u: goto label_1c17c4;
        case 0x1c17c8u: goto label_1c17c8;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d0u: goto label_1c17d0;
        case 0x1c17d4u: goto label_1c17d4;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17dcu: goto label_1c17dc;
        case 0x1c17e0u: goto label_1c17e0;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17e8u: goto label_1c17e8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f0u: goto label_1c17f0;
        case 0x1c17f4u: goto label_1c17f4;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1800u: goto label_1c1800;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c1808u: goto label_1c1808;
        case 0x1c180cu: goto label_1c180c;
        case 0x1c1810u: goto label_1c1810;
        case 0x1c1814u: goto label_1c1814;
        case 0x1c1818u: goto label_1c1818;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1820u: goto label_1c1820;
        case 0x1c1824u: goto label_1c1824;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c182cu: goto label_1c182c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1834u: goto label_1c1834;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c183cu: goto label_1c183c;
        case 0x1c1840u: goto label_1c1840;
        case 0x1c1844u: goto label_1c1844;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c184cu: goto label_1c184c;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1854u: goto label_1c1854;
        case 0x1c1858u: goto label_1c1858;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1864u: goto label_1c1864;
        case 0x1c1868u: goto label_1c1868;
        case 0x1c186cu: goto label_1c186c;
        case 0x1c1870u: goto label_1c1870;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c1878u: goto label_1c1878;
        case 0x1c187cu: goto label_1c187c;
        case 0x1c1880u: goto label_1c1880;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c1888u: goto label_1c1888;
        default: break;
    }

    ctx->pc = 0x1c16d0u;

label_1c16d0:
    // 0x1c16d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c16d4:
    // 0x1c16d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c16d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1c16d8:
    // 0x1c16d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c16d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c16dc:
    // 0x1c16dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1c16e0:
    // 0x1c16e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c16e4:
    // 0x1c16e4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1c16e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c16e8:
    // 0x1c16e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c16e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c16ec:
    // 0x1c16ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c16f0:
    // 0x1c16f0: 0xe4401564  swc1        $f0, 0x1564($v0)
    ctx->pc = 0x1c16f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5476), bits); }
label_1c16f4:
    // 0x1c16f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c16f8:
    // 0x1c16f8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c16fc:
    // 0x1c16fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1700:
    // 0x1c1700: 0xe4401568  swc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5480), bits); }
label_1c1704:
    // 0x1c1704: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1708:
    // 0x1c1708: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c170c:
    // 0x1c170c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1710:
    // 0x1c1710: 0xe4401570  swc1        $f0, 0x1570($v0)
    ctx->pc = 0x1c1710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5488), bits); }
label_1c1714:
    // 0x1c1714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1718:
    // 0x1c1718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c171c:
    // 0x1c171c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c171cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c1720:
    // 0x1c1720: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1724:
    // 0x1c1724: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c1724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c1728:
    // 0x1c1728: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c172c:
    // 0x1c172c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1c172cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1c1730:
    // 0x1c1730: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c1730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1734:
    // 0x1c1734: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1738:
    // 0x1c1738: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c1738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c173c:
    // 0x1c173c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1740:
    // 0x1c1740: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1c1740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c1744:
    // 0x1c1744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1748:
    // 0x1c1748: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c1748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c174c:
    // 0x1c174c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c1750:
    if (ctx->pc == 0x1C1750u) {
        ctx->pc = 0x1C1754u;
        goto label_1c1754;
    }
    ctx->pc = 0x1C174Cu;
    {
        const bool branch_taken_0x1c174c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c174c) {
            ctx->pc = 0x1C1774u;
            goto label_1c1774;
        }
    }
    ctx->pc = 0x1C1754u;
label_1c1754:
    // 0x1c1754: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1c1758:
    // 0x1c1758: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c175c:
    // 0x1c175c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c1760:
    if (ctx->pc == 0x1C1760u) {
        ctx->pc = 0x1C1764u;
        goto label_1c1764;
    }
    ctx->pc = 0x1C175Cu;
    {
        const bool branch_taken_0x1c175c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c175c) {
            ctx->pc = 0x1C1774u;
            goto label_1c1774;
        }
    }
    ctx->pc = 0x1C1764u;
label_1c1764:
    // 0x1c1764: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1768:
    // 0x1c1768: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c1768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1c176c:
    // 0x1c176c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c1770:
    if (ctx->pc == 0x1C1770u) {
        ctx->pc = 0x1C1774u;
        goto label_1c1774;
    }
    ctx->pc = 0x1C176Cu;
    {
        const bool branch_taken_0x1c176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c176c) {
            ctx->pc = 0x1C1780u;
            goto label_1c1780;
        }
    }
    ctx->pc = 0x1C1774u;
label_1c1774:
    // 0x1c1774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1778:
    // 0x1c1778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c177c:
    // 0x1c177c: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1c177cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1c1780:
    // 0x1c1780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1784:
    // 0x1c1784: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c1788:
    // 0x1c1788: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1c1788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
label_1c178c:
    // 0x1c178c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c1790:
    // 0x1c1790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c1790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c1794:
    // 0x1c1794: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c1794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c1798:
    // 0x1c1798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c179c:
    // 0x1c179c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c17a0:
    // 0x1c17a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1c17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_1c17a4:
    // 0x1c17a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c17a8:
    // 0x1c17a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c17ac:
    // 0x1c17ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c17acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c17b0:
    // 0x1c17b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c17b4:
    // 0x1c17b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c17b8:
    // 0x1c17b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1c17bc:
    // 0x1c17bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c17c0:
    // 0x1c17c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1c17c4:
    if (ctx->pc == 0x1C17C4u) {
        ctx->pc = 0x1C17C8u;
        goto label_1c17c8;
    }
    ctx->pc = 0x1C17C0u;
    {
        const bool branch_taken_0x1c17c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17c0) {
            ctx->pc = 0x1C1800u;
            goto label_1c1800;
        }
    }
    ctx->pc = 0x1C17C8u;
label_1c17c8:
    // 0x1c17c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c17cc:
    // 0x1c17cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c17d0:
    // 0x1c17d0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1c17d4:
    // 0x1c17d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c17d8:
    // 0x1c17d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1c17dc:
    // 0x1c17dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c17e0:
    // 0x1c17e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c17e4:
    // 0x1c17e4: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c17e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1c17e8:
    // 0x1c17e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c17ec:
    // 0x1c17ec: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c17f0:
    // 0x1c17f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c17f4:
    // 0x1c17f4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c17f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c17f8:
    // 0x1c17f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c17fc:
    if (ctx->pc == 0x1C17FCu) {
        ctx->pc = 0x1C1800u;
        goto label_1c1800;
    }
    ctx->pc = 0x1C17F8u;
    {
        const bool branch_taken_0x1c17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17f8) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C1800u;
label_1c1800:
    // 0x1c1800: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1804:
    // 0x1c1804: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1808:
    // 0x1c1808: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c180c:
    // 0x1c180c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c180cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1810:
    // 0x1c1810: 0x0  nop
    ctx->pc = 0x1c1810u;
    // NOP
label_1c1814:
    // 0x1c1814: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1818:
    // 0x1c1818: 0x0  nop
    ctx->pc = 0x1c1818u;
    // NOP
label_1c181c:
    // 0x1c181c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1c1820:
    if (ctx->pc == 0x1C1820u) {
        ctx->pc = 0x1C1824u;
        goto label_1c1824;
    }
    ctx->pc = 0x1C181Cu;
    {
        const bool branch_taken_0x1c181c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c181c) {
            ctx->pc = 0x1C1838u;
            goto label_1c1838;
        }
    }
    ctx->pc = 0x1C1824u;
label_1c1824:
    // 0x1c1824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1828:
    // 0x1c1828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c182c:
    // 0x1c182c: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c182cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1c1830:
    // 0x1c1830: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c1834:
    if (ctx->pc == 0x1C1834u) {
        ctx->pc = 0x1C1838u;
        goto label_1c1838;
    }
    ctx->pc = 0x1C1830u;
    {
        const bool branch_taken_0x1c1830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1830) {
            ctx->pc = 0x1C1840u;
            goto label_1c1840;
        }
    }
    ctx->pc = 0x1C1838u;
label_1c1838:
    // 0x1c1838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c183c:
    // 0x1c183c: 0xa040156c  sb          $zero, 0x156C($v0)
    ctx->pc = 0x1c183cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c1840:
    // 0x1c1840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1844:
    // 0x1c1844: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1c1848:
    // 0x1c1848: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1c1848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1c184c:
    // 0x1c184c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1850:
    // 0x1c1850: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1854:
    // 0x1c1854: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c1854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c1858:
    // 0x1c1858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c185c:
    // 0x1c185c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1860:
    // 0x1c1860: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c1864:
    // 0x1c1864: 0x24429110  addiu       $v0, $v0, -0x6EF0
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_1c1868:
    // 0x1c1868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c186c:
    // 0x1c186c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1870:
    // 0x1c1870: 0x40f809  jalr        $v0
label_1c1874:
    if (ctx->pc == 0x1C1874u) {
        ctx->pc = 0x1C1878u;
        goto label_1c1878;
    }
    ctx->pc = 0x1C1870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1870u, 0x1C1878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1878u;
label_1c1878:
    // 0x1c1878: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c1878u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c187c:
    // 0x1c187c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1880:
    // 0x1c1880: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1884:
    // 0x1c1884: 0x3e00008  jr          $ra
label_1c1888:
    if (ctx->pc == 0x1C1888u) {
        ctx->pc = 0x1C188Cu;
        goto label_fallthrough_0x1c1884;
    }
    ctx->pc = 0x1C1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c1884:
    ctx->pc = 0x1C188Cu;
}
