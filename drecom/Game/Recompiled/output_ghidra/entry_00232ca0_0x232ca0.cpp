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

// Function: entry_00232ca0
// Address: 0x232ca0 - 0x232ce4
void entry_00232ca0_0x232ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232ca0_0x232ca0");
#endif

    switch (ctx->pc) {
        case 0x232cb8u: goto label_232cb8;
        default: break;
    }

    ctx->pc = 0x232ca0u;

    // 0x232ca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ca4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ca8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x232cac: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x232cb0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x232CB0u;
    SET_GPR_U32(ctx, 31, 0x232CB8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232CB0u, 0x232CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CB8u;
label_232cb8:
    // 0x232cb8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x232cbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232cc0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x232cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232cc4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232cc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232ccc: 0x0  nop
    ctx->pc = 0x232cccu;
    // NOP
    // 0x232cd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232CD0u;
    {
        const bool branch_taken_0x232cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232cd0) {
            ctx->pc = 0x232CE4u;
            return;
        }
    }
    ctx->pc = 0x232CD8u;
    // 0x232cd8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232cdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ce0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x232ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x232ce4u;
}
