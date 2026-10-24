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

// Function: entry_00112f40
// Address: 0x112f40 - 0x112f70
void entry_00112f40_0x112f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f40_0x112f40");
#endif

    ctx->pc = 0x112f40u;

    // 0x112f40: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x112F40u;
    {
        const bool branch_taken_0x112f40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f40) {
            ctx->pc = 0x113074u;
            return;
        }
    }
    ctx->pc = 0x112F48u;
    // 0x112f48: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x112f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f4c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x112f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x112f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112f54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112f58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f5c: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x112F5Cu;
    {
        const bool branch_taken_0x112f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F5Cu;
        // 0x112f60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f5c) {
            ctx->pc = 0x112F94u;
            return;
        }
    }
    ctx->pc = 0x112F64u;
    // 0x112f64: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x112f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x112f68: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x112f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f6c: 0x0  nop
    ctx->pc = 0x112f6cu;
    // NOP
    ctx->pc = 0x112f70u;
}
