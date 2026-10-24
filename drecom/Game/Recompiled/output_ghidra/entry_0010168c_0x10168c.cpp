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

// Function: entry_0010168c
// Address: 0x10168c - 0x1016b8
void entry_0010168c_0x10168c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010168c_0x10168c");
#endif

    ctx->pc = 0x10168cu;

    // 0x10168c: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x10168Cu;
    {
        const bool branch_taken_0x10168c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10168Cu;
        // 0x101690: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10168c) {
            ctx->pc = 0x101780u;
            return;
        }
    }
    ctx->pc = 0x101694u;
    // 0x101694: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x101694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x101698: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x101698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x10169c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1016a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1016a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1016a4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1016A4u;
    {
        const bool branch_taken_0x1016a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1016A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016A4u;
        // 0x1016a8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016a4) {
            ctx->pc = 0x1016D8u;
            return;
        }
    }
    ctx->pc = 0x1016ACu;
    // 0x1016ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1016acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1016b0: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x1016b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x1016b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1016b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1016b8u;
}
