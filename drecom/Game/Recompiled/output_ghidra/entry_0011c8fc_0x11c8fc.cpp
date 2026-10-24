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

// Function: entry_0011c8fc
// Address: 0x11c8fc - 0x11c910
void entry_0011c8fc_0x11c8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c8fc_0x11c8fc");
#endif

    ctx->pc = 0x11c8fcu;

    // 0x11c8fc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x11c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x11c900: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C900u;
    {
        const bool branch_taken_0x11c900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C900u;
        // 0x11c904: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c900) {
            ctx->pc = 0x11C910u;
            return;
        }
    }
    ctx->pc = 0x11C908u;
    // 0x11c908: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C908u;
    {
        const bool branch_taken_0x11c908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C908u;
        // 0x11c90c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c908) {
            ctx->pc = 0x11C918u;
            return;
        }
    }
    ctx->pc = 0x11C910u;
}
