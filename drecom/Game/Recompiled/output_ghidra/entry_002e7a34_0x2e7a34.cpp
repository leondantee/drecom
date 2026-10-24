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

// Function: entry_002e7a34
// Address: 0x2e7a34 - 0x2e7a5c
void entry_002e7a34_0x2e7a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7a34_0x2e7a34");
#endif

    switch (ctx->pc) {
        case 0x2e7a44u: goto label_2e7a44;
        case 0x2e7a54u: goto label_2e7a54;
        default: break;
    }

    ctx->pc = 0x2e7a34u;

    // 0x2e7a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e7a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7a38: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a3c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A44u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7A3Cu, 0x2E7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A44u;
label_2e7a44:
    // 0x2e7a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e7a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7a48: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a4c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A54u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7A4Cu, 0x2E7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A54u;
label_2e7a54:
    // 0x2e7a54: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2E7A54u;
    {
        const bool branch_taken_0x2e7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a54) {
            ctx->pc = 0x2E7FB8u;
            return;
        }
    }
    ctx->pc = 0x2E7A5Cu;
}
