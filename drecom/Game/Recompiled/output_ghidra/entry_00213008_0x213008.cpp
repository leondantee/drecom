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

// Function: entry_00213008
// Address: 0x213008 - 0x213018
void entry_00213008_0x213008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213008_0x213008");
#endif

    switch (ctx->pc) {
        case 0x213010u: goto label_213010;
        default: break;
    }

    ctx->pc = 0x213008u;

    // 0x213008: 0xc085006  jal         func_214018
    ctx->pc = 0x213008u;
    SET_GPR_U32(ctx, 31, 0x213010u);
    ctx->pc = 0x21300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213008u;
    // 0x21300c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214018u;
    {
        ctx->pc = 0x213010u;
        ps2_stubs::sceTtyRead(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213010u) { return; }
    ctx->pc = 0x213010u;
label_213010:
    // 0x213010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213010u;
    {
        const bool branch_taken_0x213010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213010u;
        // 0x213014: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213010) {
            ctx->pc = 0x213020u;
            return;
        }
    }
    ctx->pc = 0x213018u;
}
