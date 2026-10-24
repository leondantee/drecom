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

// Function: entry_0011150c
// Address: 0x11150c - 0x111520
void entry_0011150c_0x11150c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011150c_0x11150c");
#endif

    switch (ctx->pc) {
        case 0x111514u: goto label_111514;
        default: break;
    }

    ctx->pc = 0x11150cu;

    // 0x11150c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11150Cu;
    SET_GPR_U32(ctx, 31, 0x111514u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11150Cu, 0x111514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111514u;
label_111514:
    // 0x111514: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x111514u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x111518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111518u;
    {
        const bool branch_taken_0x111518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111518u;
        // 0x11151c: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111518) {
            ctx->pc = 0x111524u;
            return;
        }
    }
    ctx->pc = 0x111520u;
}
