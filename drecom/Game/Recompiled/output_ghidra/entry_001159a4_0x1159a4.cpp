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

// Function: entry_001159a4
// Address: 0x1159a4 - 0x1159b4
void entry_001159a4_0x1159a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001159a4_0x1159a4");
#endif

    switch (ctx->pc) {
        case 0x1159acu: goto label_1159ac;
        default: break;
    }

    ctx->pc = 0x1159a4u;

    // 0x1159a4: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1159A4u;
    SET_GPR_U32(ctx, 31, 0x1159ACu);
    ctx->pc = 0x1159A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159A4u;
    // 0x1159a8: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1159A4u, 0x1159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159ACu;
label_1159ac:
    // 0x1159ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1159ACu;
    {
        const bool branch_taken_0x1159ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159ACu;
        // 0x1159b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159ac) {
            ctx->pc = 0x1159BCu;
            return;
        }
    }
    ctx->pc = 0x1159B4u;
}
