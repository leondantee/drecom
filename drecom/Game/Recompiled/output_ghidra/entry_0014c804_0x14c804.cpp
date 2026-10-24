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

// Function: entry_0014c804
// Address: 0x14c804 - 0x14c848
void entry_0014c804_0x14c804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c804_0x14c804");
#endif

    switch (ctx->pc) {
        case 0x14c81cu: goto label_14c81c;
        default: break;
    }

    ctx->pc = 0x14c804u;

    // 0x14c804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c80c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x14c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c810: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x14c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c814: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14C814u;
    SET_GPR_U32(ctx, 31, 0x14C81Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14C814u, 0x14C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C81Cu;
label_14c81c:
    // 0x14c81c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14c820: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c828: 0x0  nop
    ctx->pc = 0x14c828u;
    // NOP
    // 0x14c82c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c830: 0x0  nop
    ctx->pc = 0x14c830u;
    // NOP
    // 0x14c834: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14C834u;
    {
        const bool branch_taken_0x14c834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c834) {
            ctx->pc = 0x14C848u;
            return;
        }
    }
    ctx->pc = 0x14C83Cu;
    // 0x14c83c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c840: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c840u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14c844: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x14c848u;
}
