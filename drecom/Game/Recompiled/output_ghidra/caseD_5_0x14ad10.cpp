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
// Address: 0x14ad10 - 0x14ad64
void caseD_5_0x14ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14ad10");
#endif

    switch (ctx->pc) {
        case 0x14ad20u: goto label_14ad20;
        default: break;
    }

    ctx->pc = 0x14ad10u;

    // 0x14ad10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ad14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ad18: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14AD18u;
    SET_GPR_U32(ctx, 31, 0x14AD20u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AD18u, 0x14AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD20u;
label_14ad20:
    // 0x14ad20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad24: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ad28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad2c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ad30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ad30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ad34: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14ad38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad3c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ad40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ad40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ad44: 0x0  nop
    ctx->pc = 0x14ad44u;
    // NOP
    // 0x14ad48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ad48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ad4c: 0x0  nop
    ctx->pc = 0x14ad4cu;
    // NOP
    // 0x14ad50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14AD50u;
    {
        const bool branch_taken_0x14ad50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ad50) {
            ctx->pc = 0x14AD64u;
            return;
        }
    }
    ctx->pc = 0x14AD58u;
    // 0x14ad58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ad58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ad5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad60: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14ad64u;
}
