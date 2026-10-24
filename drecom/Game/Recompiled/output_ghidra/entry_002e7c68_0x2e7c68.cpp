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

// Function: entry_002e7c68
// Address: 0x2e7c68 - 0x2e7c80
void entry_002e7c68_0x2e7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7c68_0x2e7c68");
#endif

    switch (ctx->pc) {
        case 0x2e7c78u: goto label_2e7c78;
        default: break;
    }

    ctx->pc = 0x2e7c68u;

    // 0x2e7c68: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7c6c: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2e7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7c70: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7C70u;
    SET_GPR_U32(ctx, 31, 0x2E7C78u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7C70u, 0x2E7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C78u;
label_2e7c78:
    // 0x2e7c78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7C78u;
    {
        const bool branch_taken_0x2e7c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c78) {
            ctx->pc = 0x2E7CE4u;
            return;
        }
    }
    ctx->pc = 0x2E7C80u;
}
