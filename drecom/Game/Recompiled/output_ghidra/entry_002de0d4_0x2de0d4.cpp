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

// Function: entry_002de0d4
// Address: 0x2de0d4 - 0x2de130
void entry_002de0d4_0x2de0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de0d4_0x2de0d4");
#endif

    switch (ctx->pc) {
        case 0x2de118u: goto label_2de118;
        case 0x2de128u: goto label_2de128;
        default: break;
    }

    ctx->pc = 0x2de0d4u;

    // 0x2de0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de0d8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2de0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2de0dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE0DCu;
    {
        const bool branch_taken_0x2de0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0dc) {
            ctx->pc = 0x2DE130u;
            return;
        }
    }
    ctx->pc = 0x2DE0E4u;
    // 0x2de0e4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2de0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2de0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de0ec: 0x0  nop
    ctx->pc = 0x2de0ecu;
    // NOP
    // 0x2de0f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2de0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de0f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de0fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2de100: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2de104: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de108: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2de10c: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
    // 0x2de110: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DE110u;
    SET_GPR_U32(ctx, 31, 0x2DE118u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE110u, 0x2DE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE118u;
label_2de118:
    // 0x2de118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE118u;
    {
        const bool branch_taken_0x2de118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de118) {
            ctx->pc = 0x2DE130u;
            return;
        }
    }
    ctx->pc = 0x2DE120u;
    // 0x2de120: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DE120u;
    SET_GPR_U32(ctx, 31, 0x2DE128u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE120u, 0x2DE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE128u;
label_2de128:
    // 0x2de128: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de12c: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2de12cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2de130u;
}
