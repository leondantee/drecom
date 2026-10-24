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

// Function: entry_00110654
// Address: 0x110654 - 0x110668
void entry_00110654_0x110654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110654_0x110654");
#endif

    switch (ctx->pc) {
        case 0x11065cu: goto label_11065c;
        default: break;
    }

    ctx->pc = 0x110654u;

    // 0x110654: 0xc085766  jal         func_215D98
    ctx->pc = 0x110654u;
    SET_GPR_U32(ctx, 31, 0x11065Cu);
    ctx->pc = 0x110658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110654u;
    // 0x110658: 0x26045200  addiu       $a0, $s0, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x11065Cu;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11065Cu) { return; }
    ctx->pc = 0x11065Cu;
label_11065c:
    // 0x11065c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11065Cu;
    {
        const bool branch_taken_0x11065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11065Cu;
        // 0x110660: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11065c) {
            ctx->pc = 0x110630u;
            return;
        }
    }
    ctx->pc = 0x110664u;
    // 0x110664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110668u;
}
