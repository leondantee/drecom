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

// Function: entry_001b1674
// Address: 0x1b1674 - 0x1b1750
void entry_001b1674_0x1b1674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1674_0x1b1674");
#endif

    switch (ctx->pc) {
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1738u: goto label_1b1738;
        default: break;
    }

    ctx->pc = 0x1b1674u;

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
            return;
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
            return;
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
            return;
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
}
