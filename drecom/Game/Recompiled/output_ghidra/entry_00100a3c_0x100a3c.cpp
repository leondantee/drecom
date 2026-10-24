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

// Function: entry_00100a3c
// Address: 0x100a3c - 0x100a70
void entry_00100a3c_0x100a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a3c_0x100a3c");
#endif

    ctx->pc = 0x100a3cu;

    // 0x100a3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x100a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x100a40: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x100a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x100a44: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x100a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x100a48: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x100a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x100a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x100a50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x100a54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x100A54u;
    {
        const bool branch_taken_0x100a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A54u;
        // 0x100a58: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a54) {
            ctx->pc = 0x100A8Cu;
            return;
        }
    }
    ctx->pc = 0x100A5Cu;
    // 0x100a5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x100a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x100a60: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x100a64: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x100a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x100a68: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x100a6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x100a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100a70u;
}
