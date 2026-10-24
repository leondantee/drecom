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

// Function: entry_001ae398
// Address: 0x1ae398 - 0x1ae3e4
void entry_001ae398_0x1ae398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae398_0x1ae398");
#endif

    switch (ctx->pc) {
        case 0x1ae3c8u: goto label_1ae3c8;
        default: break;
    }

    ctx->pc = 0x1ae398u;

    // 0x1ae398: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae39c: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae39cu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae3a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae3a4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae3a8: 0xe420b510  swc1        $f0, -0x4AF0($at)
    ctx->pc = 0x1ae3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948112), bits); }
    // 0x1ae3ac: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae3b0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae3b0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae3b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae3b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae3bc: 0xe420b514  swc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1ae3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948116), bits); }
    // 0x1ae3c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE3C0u;
    SET_GPR_U32(ctx, 31, 0x1AE3C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE3C0u, 0x1AE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3C8u;
label_1ae3c8:
    // 0x1ae3c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE3C8u;
    {
        const bool branch_taken_0x1ae3c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae3c8) {
            ctx->pc = 0x1AE3E4u;
            return;
        }
    }
    ctx->pc = 0x1AE3D0u;
    // 0x1ae3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae3d4: 0x0  nop
    ctx->pc = 0x1ae3d4u;
    // NOP
    // 0x1ae3d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae3dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3DCu;
    {
        const bool branch_taken_0x1ae3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3dc) {
            ctx->pc = 0x1AE400u;
            return;
        }
    }
    ctx->pc = 0x1AE3E4u;
}
