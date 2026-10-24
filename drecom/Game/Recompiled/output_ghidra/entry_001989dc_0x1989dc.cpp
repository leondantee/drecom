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

// Function: entry_001989dc
// Address: 0x1989dc - 0x1989f4
void entry_001989dc_0x1989dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989dc_0x1989dc");
#endif

    switch (ctx->pc) {
        case 0x1989ecu: goto label_1989ec;
        default: break;
    }

    ctx->pc = 0x1989dcu;

    // 0x1989dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1989e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1989E4u;
    SET_GPR_U32(ctx, 31, 0x1989ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1989E4u, 0x1989ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989ECu;
label_1989ec:
    // 0x1989ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1989ECu;
    {
        const bool branch_taken_0x1989ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989ec) {
            ctx->pc = 0x198A04u;
            return;
        }
    }
    ctx->pc = 0x1989F4u;
}
