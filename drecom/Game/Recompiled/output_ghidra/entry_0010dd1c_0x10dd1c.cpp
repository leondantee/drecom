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

// Function: entry_0010dd1c
// Address: 0x10dd1c - 0x10dd38
void entry_0010dd1c_0x10dd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd1c_0x10dd1c");
#endif

    ctx->pc = 0x10dd1cu;

    // 0x10dd1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10dd20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dd24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10dd28: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10DD28u;
    {
        const bool branch_taken_0x10dd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD28u;
        // 0x10dd2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd28) {
            ctx->pc = 0x10DD74u;
            return;
        }
    }
    ctx->pc = 0x10DD30u;
    // 0x10dd30: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x10dd30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x10dd34: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10dd38u;
}
