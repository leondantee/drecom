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

// Function: entry_00282cb8
// Address: 0x282cb8 - 0x282ce8
void entry_00282cb8_0x282cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282cb8_0x282cb8");
#endif

    switch (ctx->pc) {
        case 0x282ce0u: goto label_282ce0;
        default: break;
    }

    ctx->pc = 0x282cb8u;

    // 0x282cb8: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x282cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282cbc: 0x3c02c0f8  lui         $v0, 0xC0F8
    ctx->pc = 0x282cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49400 << 16));
    // 0x282cc0: 0x3442e38e  ori         $v0, $v0, 0xE38E
    ctx->pc = 0x282cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58254);
    // 0x282cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282cc8: 0x0  nop
    ctx->pc = 0x282cc8u;
    // NOP
    // 0x282ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282cd0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x282cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x282cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282cd8: 0xc084964  jal         func_212590
    ctx->pc = 0x282CD8u;
    SET_GPR_U32(ctx, 31, 0x282CE0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282CD8u, 0x282CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CE0u;
label_282ce0:
    // 0x282ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282ce4: 0x0  nop
    ctx->pc = 0x282ce4u;
    // NOP
    ctx->pc = 0x282ce8u;
}
