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

// Function: entry_00232de0
// Address: 0x232de0 - 0x232e2c
void entry_00232de0_0x232de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232de0_0x232de0");
#endif

    switch (ctx->pc) {
        case 0x232df8u: goto label_232df8;
        default: break;
    }

    ctx->pc = 0x232de0u;

    // 0x232de0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232de8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x232dec: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x232df0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x232DF0u;
    SET_GPR_U32(ctx, 31, 0x232DF8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232DF0u, 0x232DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DF8u;
label_232df8:
    // 0x232df8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x232dfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e00: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x232e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232e04: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232e0c: 0x0  nop
    ctx->pc = 0x232e0cu;
    // NOP
    // 0x232e10: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x232E10u;
    {
        const bool branch_taken_0x232e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232e10) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232E18u;
    // 0x232e18: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232e1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e20: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x232e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x232e24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x232E24u;
    {
        const bool branch_taken_0x232e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232e24) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232E2Cu;
}
