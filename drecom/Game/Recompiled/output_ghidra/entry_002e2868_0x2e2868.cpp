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

// Function: entry_002e2868
// Address: 0x2e2868 - 0x2e2880
void entry_002e2868_0x2e2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2868_0x2e2868");
#endif

    switch (ctx->pc) {
        case 0x2e2878u: goto label_2e2878;
        default: break;
    }

    ctx->pc = 0x2e2868u;

    // 0x2e2868: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e286c: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x2e286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2870: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E2870u;
    SET_GPR_U32(ctx, 31, 0x2E2878u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E2870u, 0x2E2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2878u;
label_2e2878:
    // 0x2e2878: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E2878u;
    {
        const bool branch_taken_0x2e2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2878) {
            ctx->pc = 0x2E28E4u;
            return;
        }
    }
    ctx->pc = 0x2E2880u;
}
