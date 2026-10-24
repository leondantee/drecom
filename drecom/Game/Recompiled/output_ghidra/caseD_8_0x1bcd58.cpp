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

// Function: caseD_8
// Address: 0x1bcd58 - 0x1bcdb8
void caseD_8_0x1bcd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1bcd58");
#endif

    switch (ctx->pc) {
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcdb4u: goto label_1bcdb4;
        default: break;
    }

    ctx->pc = 0x1bcd58u;

    // 0x1bcd58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcd5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcd60: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bcd64: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1bcd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1bcd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd6c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bcd6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcd70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1bcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bcd74: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1bcd74u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcd78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BCD78u;
    SET_GPR_U32(ctx, 31, 0x1BCD80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BCD78u, 0x1BCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD80u;
label_1bcd80:
    // 0x1bcd80: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bcd80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcd84: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcd88: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bcd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcd8c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1bcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x1bcd90: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x1bcd90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1bcd94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1bcd94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd98: 0x0  nop
    ctx->pc = 0x1bcd98u;
    // NOP
    // 0x1bcd9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcda0: 0x0  nop
    ctx->pc = 0x1bcda0u;
    // NOP
    // 0x1bcda4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCDA4u;
    {
        const bool branch_taken_0x1bcda4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcda4) {
            ctx->pc = 0x1BCDB8u;
            return;
        }
    }
    ctx->pc = 0x1BCDACu;
    // 0x1bcdac: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1BCDACu;
    SET_GPR_U32(ctx, 31, 0x1BCDB4u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BCDACu, 0x1BCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDB4u;
label_1bcdb4:
    // 0x1bcdb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcdb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bcdb8u;
}
