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

// Function: Em00_R1_wait
// Address: 0x2d16c0 - 0x2d18a8
void Em00_R1_wait_0x2d16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_wait_0x2d16c0");
#endif

    switch (ctx->pc) {
        case 0x2d172cu: goto label_2d172c;
        case 0x2d1764u: goto label_2d1764;
        case 0x2d1770u: goto label_2d1770;
        case 0x2d1780u: goto label_2d1780;
        case 0x2d178cu: goto label_2d178c;
        case 0x2d17b8u: goto label_2d17b8;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17f8u: goto label_2d17f8;
        case 0x2d1830u: goto label_2d1830;
        case 0x2d183cu: goto label_2d183c;
        case 0x2d184cu: goto label_2d184c;
        case 0x2d1858u: goto label_2d1858;
        default: break;
    }

    ctx->pc = 0x2d16c0u;

    // 0x2d16c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d16c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d16c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d16cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d16ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d16d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d16d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d16d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d16d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d16d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d16dc: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2D16DCu;
    {
        const bool branch_taken_0x2d16dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d16dc) {
            ctx->pc = 0x2D1810u;
            goto label_2d1810;
        }
    }
    ctx->pc = 0x2D16E4u;
    // 0x2d16e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d16e8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D16E8u;
    {
        const bool branch_taken_0x2d16e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d16e8) {
            ctx->pc = 0x2D1798u;
            goto label_2d1798;
        }
    }
    ctx->pc = 0x2D16F0u;
    // 0x2d16f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d16f4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D16F4u;
    {
        const bool branch_taken_0x2d16f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d16f4) {
            ctx->pc = 0x2D1744u;
            goto label_2d1744;
        }
    }
    ctx->pc = 0x2D16FCu;
    // 0x2d16fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D16FCu;
    {
        const bool branch_taken_0x2d16fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d16fc) {
            ctx->pc = 0x2D170Cu;
            goto label_2d170c;
        }
    }
    ctx->pc = 0x2D1704u;
    // 0x2d1704: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2D1704u;
    {
        const bool branch_taken_0x2d1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1704) {
            ctx->pc = 0x2D1898u;
            goto label_2d1898;
        }
    }
    ctx->pc = 0x2D170Cu;
label_2d170c:
    // 0x2d170c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1714: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d1718: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x2d1718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x2d171c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1720: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d1720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d1724: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D1724u;
    SET_GPR_U32(ctx, 31, 0x2D172Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D1724u, 0x2D172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D172Cu;
label_2d172c:
    // 0x2d172c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1730: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d1730u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1738: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d1738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d173c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1740: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d1740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d1744:
    // 0x2d1744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1748: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d174c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1750: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1750u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1754: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d175c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D175Cu;
    SET_GPR_U32(ctx, 31, 0x2D1764u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D175Cu, 0x2D1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1764u;
label_2d1764:
    // 0x2d1764: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1768: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D1768u;
    SET_GPR_U32(ctx, 31, 0x2D1770u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D1768u, 0x2D1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1770u;
label_2d1770:
    // 0x2d1770: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1774: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1778: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D1778u;
    SET_GPR_U32(ctx, 31, 0x2D1780u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D1778u, 0x2D1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1780u;
label_2d1780:
    // 0x2d1780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1784: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D1784u;
    SET_GPR_U32(ctx, 31, 0x2D178Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D1784u, 0x2D178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D178Cu;
label_2d178c:
    // 0x2d178c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1790: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D1790u;
    {
        const bool branch_taken_0x2d1790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1790) {
            ctx->pc = 0x2D1898u;
            goto label_2d1898;
        }
    }
    ctx->pc = 0x2D1798u;
label_2d1798:
    // 0x2d1798: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d179c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d17a4: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x2d17a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x2d17a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d17a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d17ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d17acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d17b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D17B0u;
    SET_GPR_U32(ctx, 31, 0x2D17B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D17B0u, 0x2D17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17B8u;
label_2d17b8:
    // 0x2d17b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d17c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17c4: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x2d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x2d17c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d17cc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d17ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d17d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D17D0u;
    SET_GPR_U32(ctx, 31, 0x2D17D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D17D0u, 0x2D17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17D8u;
label_2d17d8:
    // 0x2d17d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d17dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d17e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17e4: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x2d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x2d17e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d17e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2d17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d17f0: 0xc0b54f4  jal         func_2D53D0
    ctx->pc = 0x2D17F0u;
    SET_GPR_U32(ctx, 31, 0x2D17F8u);
    ctx->pc = 0x2D53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53D0u, 0x2D17F0u, 0x2D17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17F8u;
label_2d17f8:
    // 0x2d17f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d17fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1804: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d1804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d1808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d180c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d180cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d1810:
    // 0x2d1810: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1814: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d1818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d181c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d181cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1820: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1828: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D1828u;
    SET_GPR_U32(ctx, 31, 0x2D1830u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D1828u, 0x2D1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1830u;
label_2d1830:
    // 0x2d1830: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1834: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D1834u;
    SET_GPR_U32(ctx, 31, 0x2D183Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D1834u, 0x2D183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D183Cu;
label_2d183c:
    // 0x2d183c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1840: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1840u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1844: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D1844u;
    SET_GPR_U32(ctx, 31, 0x2D184Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D1844u, 0x2D184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D184Cu;
label_2d184c:
    // 0x2d184c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1850: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D1850u;
    SET_GPR_U32(ctx, 31, 0x2D1858u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D1850u, 0x2D1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1858u;
label_2d1858:
    // 0x2d1858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d185c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d185cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d1860: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1860u;
    {
        const bool branch_taken_0x2d1860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1860) {
            ctx->pc = 0x2D1898u;
            goto label_2d1898;
        }
    }
    ctx->pc = 0x2D1868u;
    // 0x2d1868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d186c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1870: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d187c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d187cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1884: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d188c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d188cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1894: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1898:
    // 0x2d1898: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d1898u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d189c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d189cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d18a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18A8u;
}
