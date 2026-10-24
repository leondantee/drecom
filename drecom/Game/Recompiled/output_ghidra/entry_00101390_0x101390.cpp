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

// Function: entry_00101390
// Address: 0x101390 - 0x1013ac
void entry_00101390_0x101390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101390_0x101390");
#endif

    ctx->pc = 0x101390u;

label_101390:
    // 0x101390: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101394: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x101394u;
    {
        const bool branch_taken_0x101394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101394u;
        // 0x101398: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101394) {
            ctx->pc = 0x101510u;
            return;
        }
    }
    ctx->pc = 0x10139Cu;
    // 0x10139c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1013a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1013a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1013a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1013A4u;
    {
        const bool branch_taken_0x1013a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013A4u;
        // 0x1013a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013a4) {
            ctx->pc = 0x101390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101390;
        }
    }
    ctx->pc = 0x1013ACu;
}
