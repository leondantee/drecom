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

// Function: entry_00158b70
// Address: 0x158b70 - 0x158b8c
void entry_00158b70_0x158b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b70_0x158b70");
#endif

    ctx->pc = 0x158b70u;

    // 0x158b70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158b74: 0x8c22f840  lw          $v0, -0x7C0($at)
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158b78: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158B78u;
    {
        const bool branch_taken_0x158b78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x158b78) {
            ctx->pc = 0x158B8Cu;
            return;
        }
    }
    ctx->pc = 0x158B80u;
    // 0x158b80: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158b84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158B84u;
    {
        const bool branch_taken_0x158b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b84) {
            ctx->pc = 0x158BBCu;
            return;
        }
    }
    ctx->pc = 0x158B8Cu;
}
