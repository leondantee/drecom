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

// Function: caseD_5
// Address: 0x14bb70 - 0x14bbc4
void caseD_5_0x14bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14bb70");
#endif

    switch (ctx->pc) {
        case 0x14bb80u: goto label_14bb80;
        default: break;
    }

    ctx->pc = 0x14bb70u;

    // 0x14bb70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bb74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bb78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14BB78u;
    SET_GPR_U32(ctx, 31, 0x14BB80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14BB78u, 0x14BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB80u;
label_14bb80:
    // 0x14bb80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb84: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb8c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14bb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14bb94: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14bb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14bb98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb9c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14bba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bba4: 0x0  nop
    ctx->pc = 0x14bba4u;
    // NOP
    // 0x14bba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14bba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bbac: 0x0  nop
    ctx->pc = 0x14bbacu;
    // NOP
    // 0x14bbb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BBC4u;
            return;
        }
    }
    ctx->pc = 0x14BBB8u;
    // 0x14bbb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14bbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bbbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbc0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14bbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14bbc4u;
}
