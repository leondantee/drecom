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

// Function: entry_002143d8
// Address: 0x2143d8 - 0x2143fc
void entry_002143d8_0x2143d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002143d8_0x2143d8");
#endif

    switch (ctx->pc) {
        case 0x2143f4u: goto label_2143f4;
        default: break;
    }

    ctx->pc = 0x2143d8u;

    // 0x2143d8: 0x3153c  dsll32      $v0, $v1, 20
    ctx->pc = 0x2143d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2143dc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2143dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2143e0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2143e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2143e4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2143E4u;
    {
        const bool branch_taken_0x2143e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143E4u;
        // 0x2143e8: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143e4) {
            ctx->pc = 0x2143FCu;
            return;
        }
    }
    ctx->pc = 0x2143ECu;
    // 0x2143ec: 0xc047520  jal         func_11D480
    ctx->pc = 0x2143ECu;
    SET_GPR_U32(ctx, 31, 0x2143F4u);
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x2143ECu, 0x2143F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143F4u;
label_2143f4:
    // 0x2143f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2143F4u;
    {
        const bool branch_taken_0x2143f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F4u;
        // 0x2143f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143f4) {
            ctx->pc = 0x214418u;
            return;
        }
    }
    ctx->pc = 0x2143FCu;
}
