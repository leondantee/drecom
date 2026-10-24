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

// Function: entry_00195f1c
// Address: 0x195f1c - 0x195f74
void entry_00195f1c_0x195f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195f1c_0x195f1c");
#endif

    switch (ctx->pc) {
        case 0x195f30u: goto label_195f30;
        case 0x195f44u: goto label_195f44;
        default: break;
    }

    ctx->pc = 0x195f1cu;

    // 0x195f1c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x195f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f20: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x195f20u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x195f24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x195f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195f28: 0xc067844  jal         func_19E110
    ctx->pc = 0x195F28u;
    SET_GPR_U32(ctx, 31, 0x195F30u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x195F28u, 0x195F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F30u;
label_195f30:
    // 0x195f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195f34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x195f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195f38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195f3c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x195F3Cu;
    SET_GPR_U32(ctx, 31, 0x195F44u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x195F3Cu, 0x195F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F44u;
label_195f44:
    // 0x195f44: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x195f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195f4c: 0x0  nop
    ctx->pc = 0x195f4cu;
    // NOP
    // 0x195f50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f54: 0x0  nop
    ctx->pc = 0x195f54u;
    // NOP
    // 0x195f58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x195F58u;
    {
        const bool branch_taken_0x195f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f58) {
            ctx->pc = 0x195F74u;
            return;
        }
    }
    ctx->pc = 0x195F60u;
    // 0x195f60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x195f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195f64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195f68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x195f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x195f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195F6Cu;
    {
        const bool branch_taken_0x195f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f6c) {
            ctx->pc = 0x195F7Cu;
            return;
        }
    }
    ctx->pc = 0x195F74u;
}
