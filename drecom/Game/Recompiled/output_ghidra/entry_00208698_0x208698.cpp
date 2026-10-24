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

// Function: entry_00208698
// Address: 0x208698 - 0x2086e0
void entry_00208698_0x208698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208698_0x208698");
#endif

    switch (ctx->pc) {
        case 0x2086a8u: goto label_2086a8;
        default: break;
    }

    ctx->pc = 0x208698u;

    // 0x208698: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20869c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20869cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2086a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2086A0u;
    SET_GPR_U32(ctx, 31, 0x2086A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2086A0u, 0x2086A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086A8u;
label_2086a8:
    // 0x2086a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2086ac: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2086acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2086b0: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2086b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2086b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086b8: 0x0  nop
    ctx->pc = 0x2086b8u;
    // NOP
    // 0x2086bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2086bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2086c0: 0x0  nop
    ctx->pc = 0x2086c0u;
    // NOP
    // 0x2086c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2086C4u;
    {
        const bool branch_taken_0x2086c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2086c4) {
            ctx->pc = 0x2086E0u;
            return;
        }
    }
    ctx->pc = 0x2086CCu;
    // 0x2086cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2086ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086d0: 0x0  nop
    ctx->pc = 0x2086d0u;
    // NOP
    // 0x2086d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2086d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2086d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2086D8u;
    {
        const bool branch_taken_0x2086d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2086d8) {
            ctx->pc = 0x2086F0u;
            return;
        }
    }
    ctx->pc = 0x2086E0u;
}
