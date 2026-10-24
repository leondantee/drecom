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
// Address: 0x14b2bc - 0x14b328
void caseD_3_0x14b2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14b2bc");
#endif

    switch (ctx->pc) {
        case 0x14b2ccu: goto label_14b2cc;
        default: break;
    }

    ctx->pc = 0x14b2bcu;

    // 0x14b2bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b2c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b2c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B2C4u;
    SET_GPR_U32(ctx, 31, 0x14B2CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B2C4u, 0x14B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2CCu;
label_14b2cc:
    // 0x14b2cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2d0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b2d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2d8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b2dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b2e0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14b2e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2e8: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b2ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2f0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b2f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14b2f8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14b2fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b300: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b308: 0x0  nop
    ctx->pc = 0x14b308u;
    // NOP
    // 0x14b30c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b30cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b310: 0x0  nop
    ctx->pc = 0x14b310u;
    // NOP
    // 0x14b314: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14B314u;
    {
        const bool branch_taken_0x14b314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b314) {
            ctx->pc = 0x14B328u;
            return;
        }
    }
    ctx->pc = 0x14B31Cu;
    // 0x14b31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b324: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14b328u;
}
