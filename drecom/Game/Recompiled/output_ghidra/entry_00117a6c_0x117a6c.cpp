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

// Function: entry_00117a6c
// Address: 0x117a6c - 0x117a98
void entry_00117a6c_0x117a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a6c_0x117a6c");
#endif

    switch (ctx->pc) {
        case 0x117a84u: goto label_117a84;
        default: break;
    }

    ctx->pc = 0x117a6cu;

    // 0x117a6c: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x117A6Cu;
    {
        const bool branch_taken_0x117a6c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x117a6c) {
            ctx->pc = 0x117A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117A6Cu;
            // 0x117a70: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117AA4u;
            return;
        }
    }
    ctx->pc = 0x117A74u;
    // 0x117a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x117a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x117a7c: 0xc046248  jal         func_118920
    ctx->pc = 0x117A7Cu;
    SET_GPR_U32(ctx, 31, 0x117A84u);
    ctx->pc = 0x117A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A7Cu;
    // 0x117a80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118920u;
    {
        ctx->pc = 0x117A84u;
        ps2_stubs::memchr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117A84u) { return; }
    ctx->pc = 0x117A84u;
label_117a84:
    // 0x117a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A88u;
    {
        const bool branch_taken_0x117a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A88u;
        // 0x117a8c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a88) {
            ctx->pc = 0x117A98u;
            return;
        }
    }
    ctx->pc = 0x117A90u;
    // 0x117a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A90u;
        // 0x117a94: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117A9Cu;
            return;
        }
    }
    ctx->pc = 0x117A98u;
}
