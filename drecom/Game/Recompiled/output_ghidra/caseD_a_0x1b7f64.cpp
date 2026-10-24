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

// Function: caseD_a
// Address: 0x1b7f64 - 0x1b7fc0
void caseD_a_0x1b7f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1b7f64");
#endif

    switch (ctx->pc) {
        case 0x1b7f88u: goto label_1b7f88;
        case 0x1b7fbcu: goto label_1b7fbc;
        default: break;
    }

    ctx->pc = 0x1b7f64u;

    // 0x1b7f64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7f68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7f6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7f70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b7f74: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1b7f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1b7f78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b7f80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B7F80u;
    SET_GPR_U32(ctx, 31, 0x1B7F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7F80u, 0x1B7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F88u;
label_1b7f88:
    // 0x1b7f88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7f88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7f90: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1b7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7f94: 0x3c06c332  lui         $a2, 0xC332
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49970 << 16));
    // 0x1b7f98: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1b7f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1b7f9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7f9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7fa0: 0x0  nop
    ctx->pc = 0x1b7fa0u;
    // NOP
    // 0x1b7fa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7fa8: 0x0  nop
    ctx->pc = 0x1b7fa8u;
    // NOP
    // 0x1b7fac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7FACu;
    {
        const bool branch_taken_0x1b7fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7fac) {
            ctx->pc = 0x1B7FC0u;
            return;
        }
    }
    ctx->pc = 0x1B7FB4u;
    // 0x1b7fb4: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1B7FB4u;
    SET_GPR_U32(ctx, 31, 0x1B7FBCu);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B7FB4u, 0x1B7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FBCu;
label_1b7fbc:
    // 0x1b7fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b7fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b7fc0u;
}
