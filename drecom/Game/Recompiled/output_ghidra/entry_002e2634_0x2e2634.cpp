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

// Function: entry_002e2634
// Address: 0x2e2634 - 0x2e265c
void entry_002e2634_0x2e2634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2634_0x2e2634");
#endif

    switch (ctx->pc) {
        case 0x2e2644u: goto label_2e2644;
        case 0x2e2654u: goto label_2e2654;
        default: break;
    }

    ctx->pc = 0x2e2634u;

    // 0x2e2634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2638: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e263c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E263Cu;
    SET_GPR_U32(ctx, 31, 0x2E2644u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E263Cu, 0x2E2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2644u;
label_2e2644:
    // 0x2e2644: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2648: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e264c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E264Cu;
    SET_GPR_U32(ctx, 31, 0x2E2654u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E264Cu, 0x2E2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2654u;
label_2e2654:
    // 0x2e2654: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2E2654u;
    {
        const bool branch_taken_0x2e2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2654) {
            ctx->pc = 0x2E2BB8u;
            return;
        }
    }
    ctx->pc = 0x2E265Cu;
}
