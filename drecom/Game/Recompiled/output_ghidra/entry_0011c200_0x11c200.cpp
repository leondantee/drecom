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

// Function: entry_0011c200
// Address: 0x11c200 - 0x11c218
void entry_0011c200_0x11c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c200_0x11c200");
#endif

    ctx->pc = 0x11c200u;

    // 0x11c200: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c204: 0x28023  negu        $s0, $v0
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11c208: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C208u;
    {
        const bool branch_taken_0x11c208 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C208u;
        // 0x11c20c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c208) {
            ctx->pc = 0x11C2BCu;
            return;
        }
    }
    ctx->pc = 0x11C210u;
    // 0x11c210: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C210u;
    {
        const bool branch_taken_0x11c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C210u;
        // 0x11c214: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c210) {
            ctx->pc = 0x11C278u;
            return;
        }
    }
    ctx->pc = 0x11C218u;
}
