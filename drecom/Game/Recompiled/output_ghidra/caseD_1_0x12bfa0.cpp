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

// Function: caseD_1
// Address: 0x12bfa0 - 0x12c020
void caseD_1_0x12bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x12bfa0");
#endif

    switch (ctx->pc) {
        case 0x12bfb0u: goto label_12bfb0;
        case 0x12bfd8u: goto label_12bfd8;
        case 0x12bffcu: goto label_12bffc;
        default: break;
    }

    ctx->pc = 0x12bfa0u;

    // 0x12bfa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bfa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bfa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bfa8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12BFA8u;
    SET_GPR_U32(ctx, 31, 0x12BFB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BFA8u, 0x12BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFB0u;
label_12bfb0:
    // 0x12bfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12bfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12bfb4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bfb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bfbc: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x12bfc0: 0x3443b8c2  ori         $v1, $v0, 0xB8C2
    ctx->pc = 0x12bfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x12bfc4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12bfc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12bfc8: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12bfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12bfcc: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x12bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12bfd0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12BFD0u;
    SET_GPR_U32(ctx, 31, 0x12BFD8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BFD0u, 0x12BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFD8u;
label_12bfd8:
    // 0x12bfd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bfdc: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x12bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x12bfe0: 0x3c063e99  lui         $a2, 0x3E99
    ctx->pc = 0x12bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16025 << 16));
    // 0x12bfe4: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x12bfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x12bfe8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12bfe8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bfec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bff0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x12bff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x12bff4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12BFF4u;
    SET_GPR_U32(ctx, 31, 0x12BFFCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12BFF4u, 0x12BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFFCu;
label_12bffc:
    // 0x12bffc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c000: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x12c004: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C004u;
    {
        const bool branch_taken_0x12c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c004) {
            ctx->pc = 0x12C020u;
            return;
        }
    }
    ctx->pc = 0x12C00Cu;
    // 0x12c00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c010: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c014: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c018: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12C018u;
    SET_GPR_U32(ctx, 31, 0x12C020u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C018u, 0x12C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C020u;
}
