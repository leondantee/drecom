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

// Function: entry_00106200
// Address: 0x106200 - 0x106218
void entry_00106200_0x106200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106200_0x106200");
#endif

    ctx->pc = 0x106200u;

    // 0x106200: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x106200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106204: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x106204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x106208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106208u;
    {
        const bool branch_taken_0x106208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106208u;
        // 0x10620c: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106208) {
            ctx->pc = 0x106218u;
            return;
        }
    }
    ctx->pc = 0x106210u;
    // 0x106210: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106210u;
        // 0x106214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106210) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x106218u;
}
