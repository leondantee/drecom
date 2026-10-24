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

// Function: entry_0011e9d8
// Address: 0x11e9d8 - 0x11e9fc
void entry_0011e9d8_0x11e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9d8_0x11e9d8");
#endif

    ctx->pc = 0x11e9d8u;

label_11e9d8:
    // 0x11e9d8: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x11e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x11e9dc: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x11e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x11e9e0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x11e9e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e9e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11e9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11e9e8: 0x0  nop
    ctx->pc = 0x11e9e8u;
    // NOP
    // 0x11e9ec: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E9ECu;
    {
        const bool branch_taken_0x11e9ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e9ec) {
            ctx->pc = 0x11E9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9d8;
        }
    }
    ctx->pc = 0x11E9F4u;
    // 0x11e9f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E9F4u;
    {
        const bool branch_taken_0x11e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9F4u;
        // 0x11e9f8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f4) {
            ctx->pc = 0x11EA20u;
            return;
        }
    }
    ctx->pc = 0x11E9FCu;
}
