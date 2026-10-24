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

// Function: entry_0012cb1c
// Address: 0x12cb1c - 0x12cc78
void entry_0012cb1c_0x12cb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb1c_0x12cb1c");
#endif

    switch (ctx->pc) {
        case 0x12cb2cu: goto label_12cb2c;
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb70u: goto label_12cb70;
        case 0x12cb84u: goto label_12cb84;
        case 0x12cb9cu: goto label_12cb9c;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbccu: goto label_12cbcc;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc2cu: goto label_12cc2c;
        default: break;
    }

    ctx->pc = 0x12cb1cu;

    // 0x12cb1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cb20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12cb24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12CB24u;
    SET_GPR_U32(ctx, 31, 0x12CB2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CB24u, 0x12CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB2Cu;
label_12cb2c:
    // 0x12cb2c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb34: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x12cb38: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x12cb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x12cb3c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x12cb3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12cb40: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12cb44: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12cb48: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12CB48u;
    SET_GPR_U32(ctx, 31, 0x12CB50u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12CB48u, 0x12CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB50u;
label_12cb50:
    // 0x12cb50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12cb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12cb58: 0x3c073e99  lui         $a3, 0x3E99
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16025 << 16));
    // 0x12cb5c: 0x34e5999a  ori         $a1, $a3, 0x999A
    ctx->pc = 0x12cb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x12cb60: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12cb60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12cb64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb68: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12CB68u;
    SET_GPR_U32(ctx, 31, 0x12CB70u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12CB68u, 0x12CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB70u;
label_12cb70:
    // 0x12cb70: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb78: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12cb7c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12CB7Cu;
    SET_GPR_U32(ctx, 31, 0x12CB84u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CB7Cu, 0x12CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB84u;
label_12cb84:
    // 0x12cb84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cb8c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12cb8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12cb90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12cb94: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12CB94u;
    SET_GPR_U32(ctx, 31, 0x12CB9Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CB9Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CB9Cu) { return; }
    ctx->pc = 0x12CB9Cu;
label_12cb9c:
    // 0x12cb9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cb9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12cba0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cba8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12CBA8u;
    SET_GPR_U32(ctx, 31, 0x12CBB0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CBA8u, 0x12CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBB0u;
label_12cbb0:
    // 0x12cbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12cbb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cbb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cbbc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12cbc0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12cbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cbc4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12CBC4u;
    SET_GPR_U32(ctx, 31, 0x12CBCCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CBC4u, 0x12CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBCCu;
label_12cbcc:
    // 0x12cbcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cbd0: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cbd4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cbdc: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12cbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x12cbe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cbe4: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cbe8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cbf0: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12cbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x12cbf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cbf8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12CBF8u;
    SET_GPR_U32(ctx, 31, 0x12CC00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CBF8u, 0x12CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC00u;
label_12cc00:
    // 0x12cc00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc04: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12cc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x12cc08: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x12CC08u;
    {
        const bool branch_taken_0x12cc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc08) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12CC10u;
    // 0x12cc10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12cc10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12cc14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12cc18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12cc1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12cc20: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DB8u));
    // 0x12cc24: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12CC24u;
    SET_GPR_U32(ctx, 31, 0x12CC2Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CC24u, 0x12CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC2Cu;
label_12cc2c:
    // 0x12cc2c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x12cc30: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12cc34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x12cc34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x12cc38: 0x481000f  bgez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x12CC38u;
    {
        const bool branch_taken_0x12cc38 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12cc38) {
            ctx->pc = 0x12CC78u;
            return;
        }
    }
    ctx->pc = 0x12CC40u;
    // 0x12cc40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc48: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x12cc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12cc4c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12cc50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12cc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12cc58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc5c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12cc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cc60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cc68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12cc70: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CC78u;
}
