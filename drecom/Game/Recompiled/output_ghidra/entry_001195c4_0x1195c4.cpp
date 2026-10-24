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

// Function: entry_001195c4
// Address: 0x1195c4 - 0x1195e8
void entry_001195c4_0x1195c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195c4_0x1195c4");
#endif

    ctx->pc = 0x1195c4u;

    // 0x1195c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1195c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1195ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1195d0: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1195D0u;
    {
        const bool branch_taken_0x1195d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195D0u;
        // 0x1195d4: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d0) {
            ctx->pc = 0x119620u;
            return;
        }
    }
    ctx->pc = 0x1195D8u;
    // 0x1195d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1195dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1195dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195e0: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x1195e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1195e4: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x1195e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1195e8u;
}
