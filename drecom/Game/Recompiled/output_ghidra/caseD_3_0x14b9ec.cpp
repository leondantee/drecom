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

// Function: caseD_3
// Address: 0x14b9ec - 0x14ba58
void caseD_3_0x14b9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14b9ec");
#endif

    switch (ctx->pc) {
        case 0x14b9fcu: goto label_14b9fc;
        default: break;
    }

    ctx->pc = 0x14b9ecu;

    // 0x14b9ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b9f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b9f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b9f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B9F4u;
    SET_GPR_U32(ctx, 31, 0x14B9FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B9F4u, 0x14B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9FCu;
label_14b9fc:
    // 0x14b9fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba00: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ba04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba08: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ba0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ba0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ba10: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14ba10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14ba14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba18: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ba1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba20: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ba24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14ba24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14ba28: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14ba2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba30: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ba34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ba34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ba38: 0x0  nop
    ctx->pc = 0x14ba38u;
    // NOP
    // 0x14ba3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ba3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ba40: 0x0  nop
    ctx->pc = 0x14ba40u;
    // NOP
    // 0x14ba44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14BA44u;
    {
        const bool branch_taken_0x14ba44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ba44) {
            ctx->pc = 0x14BA58u;
            return;
        }
    }
    ctx->pc = 0x14BA4Cu;
    // 0x14ba4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ba4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ba50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba54: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14ba58u;
}
