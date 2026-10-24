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

// Function: Face_morph
// Address: 0x1b1630 - 0x1b187c
void Face_morph_0x1b1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Face_morph_0x1b1630");
#endif

    switch (ctx->pc) {
        case 0x1b165cu: goto label_1b165c;
        case 0x1b1674u: goto label_1b1674;
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1738u: goto label_1b1738;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1774u: goto label_1b1774;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b17b4u: goto label_1b17b4;
        case 0x1b17dcu: goto label_1b17dc;
        default: break;
    }

    ctx->pc = 0x1b1630u;

    // 0x1b1630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b1634: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1b1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1b1638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b163c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b164c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1b164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1b1650: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1654: 0xc06bec4  jal         func_1AFB10
    ctx->pc = 0x1B1654u;
    SET_GPR_U32(ctx, 31, 0x1B165Cu);
    ctx->pc = 0x1AFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB10u, 0x1B1654u, 0x1B165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B165Cu;
label_1b165c:
    // 0x1b165c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1660: 0x8c631304  lw          $v1, 0x1304($v1)
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4868)));
    // 0x1b1664: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x1b1664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b1668: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b1668u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b166c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1B166Cu;
    {
        const bool branch_taken_0x1b166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b166c) {
            ctx->pc = 0x1B17E8u;
            goto label_1b17e8;
        }
    }
    ctx->pc = 0x1B1674u;
label_1b1674:
    // 0x1b1674: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x1b1674u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b1678: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x1b1678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b167c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b167cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1680: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1684: 0x8c421304  lw          $v0, 0x1304($v0)
    ctx->pc = 0x1b1684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4868)));
    // 0x1b1688: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1b1688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b168c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1b168cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b1690: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b1694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1698: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b169c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1b169cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b16a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b16a4: 0x84420098  lh          $v0, 0x98($v0)
    ctx->pc = 0x1b16a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1b16a8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1b16a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b16ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1b16acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1b16b0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1b16b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b16b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b16b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b16b8: 0xc098d00  jal         func_263400
    ctx->pc = 0x1B16B8u;
    SET_GPR_U32(ctx, 31, 0x1B16C0u);
    ctx->pc = 0x263400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263400u, 0x1B16B8u, 0x1B16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b16c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b16c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b16c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b16c8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b16cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b16ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b16d0: 0x0  nop
    ctx->pc = 0x1b16d0u;
    // NOP
    // 0x1b16d4: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B17E0u;
            goto label_1b17e0;
        }
    }
    ctx->pc = 0x1B16DCu;
    // 0x1b16dc: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x1b16dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b16e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b16e4: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b16e8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b16e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b16ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b16ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b16f0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1b16f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b16f4: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B16F4u;
    {
        const bool branch_taken_0x1b16f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16f4) {
            ctx->pc = 0x1B17E0u;
            goto label_1b17e0;
        }
    }
    ctx->pc = 0x1B16FCu;
    // 0x1b16fc: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1b16fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1b1700: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1704: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b170c: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B170Cu;
    SET_GPR_U32(ctx, 31, 0x1B1714u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B170Cu, 0x1B1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1714u;
label_1b1714:
    // 0x1b1714: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1718: 0x1603000d  bne         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1718u;
    {
        const bool branch_taken_0x1b1718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1718) {
            ctx->pc = 0x1B1750u;
            goto label_1b1750;
        }
    }
    ctx->pc = 0x1B1720u;
    // 0x1b1720: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1724: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1b1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b1728: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b172c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1730: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B1730u;
    SET_GPR_U32(ctx, 31, 0x1B1738u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B1730u, 0x1B1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1738u;
label_1b1738:
    // 0x1b1738: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b173c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1b173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1b1740: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1748: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B1748u;
    SET_GPR_U32(ctx, 31, 0x1B1750u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B1748u, 0x1B1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1750u;
label_1b1750:
    // 0x1b1750: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b1750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1754: 0x1603000e  bne         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1754u;
    {
        const bool branch_taken_0x1b1754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1754) {
            ctx->pc = 0x1B1790u;
            goto label_1b1790;
        }
    }
    ctx->pc = 0x1B175Cu;
    // 0x1b175c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1760: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b1764: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1768: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b176c: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B176Cu;
    SET_GPR_U32(ctx, 31, 0x1B1774u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B176Cu, 0x1B1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1774u;
label_1b1774:
    // 0x1b1774: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1778: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b177c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1784: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B1784u;
    SET_GPR_U32(ctx, 31, 0x1B178Cu);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B1784u, 0x1B178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x0  nop
    ctx->pc = 0x1b178cu;
    // NOP
label_1b1790:
    // 0x1b1790: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1794: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1794u;
    {
        const bool branch_taken_0x1b1794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1794) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B179Cu;
    // 0x1b179c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17a0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1b17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b17a4: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b17a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17ac: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B17ACu;
    SET_GPR_U32(ctx, 31, 0x1B17B4u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B17ACu, 0x1B17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B4u;
label_1b17b4:
    // 0x1b17b4: 0x0  nop
    ctx->pc = 0x1b17b4u;
    // NOP
label_1b17b8:
    // 0x1b17b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b17bc: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B17BCu;
    {
        const bool branch_taken_0x1b17bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b17bc) {
            ctx->pc = 0x1B17E0u;
            goto label_1b17e0;
        }
    }
    ctx->pc = 0x1B17C4u;
    // 0x1b17c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b17c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17c8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1b17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b17cc: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b17ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b17d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17d4: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B17D4u;
    SET_GPR_U32(ctx, 31, 0x1B17DCu);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B17D4u, 0x1B17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17DCu;
label_1b17dc:
    // 0x1b17dc: 0x0  nop
    ctx->pc = 0x1b17dcu;
    // NOP
label_1b17e0:
    // 0x1b17e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b17e4: 0x0  nop
    ctx->pc = 0x1b17e4u;
    // NOP
label_1b17e8:
    // 0x1b17e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17ec: 0x9463130c  lhu         $v1, 0x130C($v1)
    ctx->pc = 0x1b17ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4876)));
    // 0x1b17f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b17f4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1b17f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b17f8: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1B17F8u;
    {
        const bool branch_taken_0x1b17f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b17f8) {
            ctx->pc = 0x1B1674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1674;
        }
    }
    ctx->pc = 0x1B1800u;
    // 0x1b1800: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1804: 0x84830098  lh          $v1, 0x98($a0)
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1b1808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b180c: 0xa4830098  sh          $v1, 0x98($a0)
    ctx->pc = 0x1b180cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1810: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1814: 0x84630098  lh          $v1, 0x98($v1)
    ctx->pc = 0x1b1814u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1b1818: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b1818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b181c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b181cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b1820: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1824: 0x9463130a  lhu         $v1, 0x130A($v1)
    ctx->pc = 0x1b1824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4874)));
    // 0x1b1828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b182c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b182cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1830: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1858u;
            goto label_1b1858;
        }
    }
    ctx->pc = 0x1B1838u;
    // 0x1b1838: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b183c: 0x9463130a  lhu         $v1, 0x130A($v1)
    ctx->pc = 0x1b183cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4874)));
    // 0x1b1840: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b1848: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b1848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b184c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b184cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b1850: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1854: 0xa4640098  sh          $a0, 0x98($v1)
    ctx->pc = 0x1b1854u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 152), (uint16_t)GPR_U32(ctx, 4));
label_1b1858:
    // 0x1b1858: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1b1858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b185c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b185cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b186c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b186cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1870: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1b1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b1874: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B187Cu;
}
