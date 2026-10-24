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

// Function: entry_002e7dc0
// Address: 0x2e7dc0 - 0x2e7dd8
void entry_002e7dc0_0x2e7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7dc0_0x2e7dc0");
#endif

    switch (ctx->pc) {
        case 0x2e7dd0u: goto label_2e7dd0;
        default: break;
    }

    ctx->pc = 0x2e7dc0u;

    // 0x2e7dc0: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7dc4: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2e7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7dc8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7DC8u;
    SET_GPR_U32(ctx, 31, 0x2E7DD0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7DC8u, 0x2E7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DD0u;
label_2e7dd0:
    // 0x2e7dd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7DD0u;
    {
        const bool branch_taken_0x2e7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7dd0) {
            ctx->pc = 0x2E7E3Cu;
            return;
        }
    }
    ctx->pc = 0x2E7DD8u;
}
