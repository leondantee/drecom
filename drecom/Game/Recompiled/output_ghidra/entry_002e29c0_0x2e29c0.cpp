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

// Function: entry_002e29c0
// Address: 0x2e29c0 - 0x2e29d8
void entry_002e29c0_0x2e29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e29c0_0x2e29c0");
#endif

    switch (ctx->pc) {
        case 0x2e29d0u: goto label_2e29d0;
        default: break;
    }

    ctx->pc = 0x2e29c0u;

    // 0x2e29c0: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e29c4: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x2e29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e29c8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E29C8u;
    SET_GPR_U32(ctx, 31, 0x2E29D0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E29C8u, 0x2E29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29D0u;
label_2e29d0:
    // 0x2e29d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E29D0u;
    {
        const bool branch_taken_0x2e29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29d0) {
            ctx->pc = 0x2E2A3Cu;
            return;
        }
    }
    ctx->pc = 0x2E29D8u;
}
